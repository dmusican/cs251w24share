#include "linkedlist.h"
#include <stdlib.h>

LinkedList *insertFrontLL(LinkedList *list, int item) {
    LinkedList *cell = malloc(sizeof(LinkedList));
    (*cell).value = item;
    (*cell).next = list;
    return cell;

}

//void cleanupLL()

int main() {
    LinkedList *list = NULL;
    for (int i=0; i < 5; i++) {
        list = insertFrontLL(list, i);
    }
}
