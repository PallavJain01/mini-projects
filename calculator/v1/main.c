//? Basic Console Calculator – Simple arithmetic operations (`+`, `-`, `*`, `/`, `%`).
//? bonus: error handling for diving/modulo by zero

#include <stdio.h>
#include <math.h> // for fmod()

int main() {
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
        printf("can't divide by zero, exiting\n");
        return 1;
      }
      break;
    case '%':
    if ((int) n2 != 0)
      result = fmod(n1, n2);
    else {
      printf("can't modulo by zero, exiting\n");
      return 1;
    }
      break;
    default:
      printf("no valid operation found");
      return 1;
  }

  printf("\n%.2f %c %.2f = %.2f", n1, operation, n2, result);

  return 0;
}