#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Make an array
    int a[3];
    for (int i=0; i < 3; i++) {
        a[i] = i;
    }

    for (int i=0; i < 3; i++) {
        printf("a[%i] = %i\n", i, a[i]);
    }

    int b[3];
    // Copy array? No..
    //  b = a; Error, bad

    for (int i=0; i < 3; i++) {
        b[i] = a[i];
    }
    // or.... (specify number of bytes to copy)
    memcpy(b, a, sizeof(int)*3);
    for (int i=0; i < 3; i++) {
        printf("b[%i] = %i\n", i, b[i]);
    }
    // unreliable information
    printf("C says sizeof a is %lu\n", sizeof(a));

    // Try in heap instead
    int *c = malloc(sizeof(int)*3);

    // Can think of pointers as interchangeable as arrays
    for (int i=0; i < 3; i++) {
        c[i] = i;
    }

    for (int i=0; i < 3; i++) {
        printf("c[%i] = %i\n", i, c[i]);
    }

    // Technical detail, proof that they're not typed the same
    int *d;
    d = c;
    d[1] = 9;

    for (int i=0; i < 3; i++) {
        printf("c[%i] = %i\n", i, c[i]);
        printf("d[%i] = %i\n", i, d[i]);
    }

    free(c);
}
