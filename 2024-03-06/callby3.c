#include <stdio.h>
#include <stdlib.h>

void foo(int *x) {
   *x = 7;
}

int main() {
   int *a = malloc(sizeof(int));
   *a = 5;
   printf("%i\n",*a);
   foo(a);
   printf("%i\n",*a);
}
