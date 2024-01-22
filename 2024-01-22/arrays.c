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
}
