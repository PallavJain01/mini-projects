```c
// instead of using
result = (int) n1 % (int) n2;
// use this
#include <math.h>
result = fmod(n1, n2);
// this handles floating point modulo properly along with negative values of n1/n2
```

```c
// instead of using
if (n == 0)
  printf("err msg");
  exit(1);
// use this
if (n == 0)
  printf("err msg");
  return NAN; // must not be inside the main fucntion
// this ensures the error is handled by parent function (if required) and doesn't cause whole program to terminate
```

```c
// when taking input in a character array like this
scanf("%ns", str); // n-> any +ve int
// make sure 'str' has n+1 length defined to avoid overflow (\0)
char str[5];
scanf("%4s", str);
```

```c
// instead of using
#include <math.h>
function cosec(float n) {
  if (sinf(n) == 0) {
    printf("undefined result for cosec(%.2f)", n);
    return NAN
  }
  return 1 / sinf(n);
}
// use this
#include <math.h>
function cosec(float n) {
  float val_sinf = sinf(n)
  if (val_sinf == 0) {
    printf("undefined result for cosec(%.2f)", n);
    return NAN
  }
  return 1 / val_sinf;
}
// to avoid calculating sinf(n) twice in case 'n != 0'
```

```c
// to compare strings, use
#include <string.h>

char str[5] = "test"
if (strcmp(str, "test") == 0)
  printf("equal");
else
  printf("not equal");

// using 'str == "test"' will not work in C
```

```c
(NAN == NAN)
// will always return false, because in C, NAN is not even equal to itself
// use this instead
#include <math.h>
isnan(someVal);
```