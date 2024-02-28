#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

// potato is a pointer. It is a function pointer
int doit(int (*potato)(int,int), int x, int y) {
    /* return potato(x,y); */
    return (*potato)(x,y);
}

struct Thing {
    f;
}

int main() {
    printf("%i\n", doit(add, 3, 5));
    printf("%i\n", doit(multiply, 3, 5));
}
