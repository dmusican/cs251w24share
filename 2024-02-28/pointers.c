#include <stdio.h>
#include <stdlib.h>

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

typedef struct Thing {
    int (*f)(int,int);
} Thing;

int main() {
    printf("%i\n", doit(add, 3, 5));
    printf("%i\n", doit(multiply, 3, 5));

    Thing *t = malloc(sizeof(Thing));
    t->f = add;
    printf("%i\n", t->f(3,5));


}
