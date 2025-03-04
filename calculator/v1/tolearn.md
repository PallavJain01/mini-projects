```c
scanf("%f", &n1);
scanf("%c", &c); // the \n from previous scanf() will cause '\n' to be stored inside 'c'

// to counter this, use a space ' ' before taking character input
scanf("%f", &n1);
scanf(" %c", &c);
```

```c
// the '%' operation only works on integers, ensure that the operands are converted to int before calculation
float a = 10.5, b = 20.1;
float c = a % b; // error
float c = (int) a % (int) b; // works
// but this will still not calculate float modulo, so use this instead
#include <math.h>
float c = fmod(a, b);
```

```c
// in case of error handling, use 'return 1;' to exit program with an exit code '1'
if (n2 == 0) {
  printf("can't divide by zero, exiting\n");
  return 1;
}
// provided that 'return 1' is called inside main() function. if not, use this instead
#include <stdlib.h>
if (n2 == 0) {
  printf("can't divide by zero, exiting\n");
  exit(1)
}
// alternatively, you can use 'return NAN' and let the parent function handle all errors including this one at once accordingly
```