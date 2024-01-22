#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //printf("%s\n", "hello");
    char *word = "hello";
    word[0] = 'g';

    // dull way to fix this problem
    char *dullword = malloc(sizeof(char)*6);
    dullword[0] = 'h';
    dullword[1] = 'e';
    dullword[2] = 'l';
    dullword[3] = 'l';
    dullword[4] = 'o';
    dullword[5] = '\0';

    printf("%s\n", dullword);
    dullword[2] = 'q';
    printf("%s\n", dullword);



}
