#include <stdio.h>
#include <stdlib.h>

void foo(int *x) {
   *x = 6;
   x = NULL;
}

int main() {
   int a = 5;
   printf("%i\n",a);
   foo(&a);
   printf("%i\n",a);
}
