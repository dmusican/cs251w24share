#include <stdio.h>

int main() {
  /* int x; */
  /* printf("%i\n", x); */

  int *x = malloc(sizeof(int));
  free(x);
  free(x);
}
