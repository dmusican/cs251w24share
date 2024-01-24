#include <stdio.h>
#include <stdlib.h>

int main() {
  /* int x; */
  /* printf("%i\n", x); */

  /* int *x = malloc(sizeof(int)); */
  /* free(x); */
  /* free(x); */

  /* free((int*)29413); */

  int *x = malloc(sizeof(int)*3);
  x[10] = 42;
  printf("%i\n", x[10]);
}
