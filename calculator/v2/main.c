//? Scientific Calculator – `sin()`, `cos()`, `tan()`, `log()` using `<math.h>`.
//? bonus: error handling for invalid/undefined values in trignometric/logarithmic functions

/*
  * new concept

  * multiple modes for multiple types of calculations
    * 0
      * arithmetic
      * +, -, *, /, %
      * two float inputs and one operation input
    * 1
      * trignometric
      * sin, cos, tan, csc (cosec), sec, cot
      * one float input and one operation input
    * 2
      * logarithmic
      * log (base e by default), log10 (base 10)
      * one float input and one operation input
      * 
      * logb (log with a user-defined base)
      * one operation input, one float input(n), one integer input(base)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float arithmetic() {
  float n1, n2, result;
  char operation;

  printf("number 1: ");
  scanf("%f", &n1);
  printf("number 2: ");
  scanf("%f", &n2);
  printf("operation (+, -, *, /, %%): ");
  scanf(" %c", &operation);

  switch(operation) {
    case '+':
      result = n1 + n2;
      break;
    case '-':
      result = n1 - n2;
      break;
    case '*':
      result = n1 * n2;
      break;
    case '/':
      if (n2 != 0)
        result = n1 / n2;
      else {
        printf("can't divide by zero\n");
        return NAN;
      }
      break;
    case '%':
    if ((int) n2 != 0)
      result = fmod(n1, n2);
    else {
      printf("can't modulo by zero\n");
      return NAN;
    }
      break;
    default:
      printf("Invalid operation %c\n");
      return NAN;
  }
  return result;
}

float trignometric() {
  float n, result;
  char operation[5];
  printf("enter operation (sin, cos, tan, csc, sec, cot): ");
  scanf("% 4s", operation);
  printf("enter number: ");
  scanf("%f", &n);

  if (strcmp(operation, "sin") == 0) {
    result = sinf(n);
  } else if (strcmp(operation, "cos") == 0) {
    result = cosf(n);
  } else if (strcmp(operation, "tan") == 0) {
    result = tanf(n);
  } else if (strcmp(operation, "csc") == 0) {
    float val_sinf = sinf(n);
    if (val_sinf == 0) {
      printf("Undefined result for csc(%.2f)\n", n);
      return NAN;
    }
    result = 1 / val_sinf;
  } else if (strcmp(operation, "sec") == 0) {
    float val_cosf = cosf(n);
    if (val_cosf == 0) {
      printf("Undefined result for sec(%.2f)\n", n);
      return NAN;
    }
    result = 1 / val_cosf;
  } else if (strcmp(operation, "cot") == 0) {
    float val_tanf = tanf(n);
    if (val_tanf == 0) {
      printf("Undefined result for cot(%.2f)\n", n);
      return NAN;
    }
    result = 1 / val_tanf;
  } else {
    printf("Invalid operation %s\n", operation);
    return NAN;
  }
  return result;
}

float logarithmic() {
  float n, base, result;
  int operation;

  printf("enter operation: (0->log, 1-> log10, 2-> logb): ");
  scanf("%d", &operation);
  printf("enter number: ");
  scanf("%f", &n);
  if (n <= 0) {
    printf("Invalid value '%.2f'", n);
    return NAN;
  }
  switch (operation) {
    case 0:
      result = logf(n);
      break;
    case 1:
      result = log10f(n);
      break;
    case 2:
      printf("enter base: ");
      scanf("%f", &base);
      if (base <= 0 || base == 1) {
        printf("Invalid base '%.2f'", base);
        return NAN;
      }
      result = logf(n) / logf(base);
      break;
    default:
      printf("Invalid operation %d\n", operation);
      return NAN;
  }
  return result;
}

int main() {
  int mode = 0;
  float result;
  printf("enter mode(0-> arithmetic, 1-> trignometric, 2-> logarithmic): ");
  scanf("%d", &mode);
  switch(mode) {
    case 0:
      result = arithmetic();
      break;
    case 1:
      result = trignometric();
      break;
    case 2:
      result = logarithmic();
      break;
    default:
      printf("Invalid mode");
      return 1;
  }
  if (!isnan(result))
    printf("%.2f", result);
  else 
    return 1;
  return 0;
}