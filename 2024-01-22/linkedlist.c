LinkedList *insertFrontLL(LinkedList *list, int item) {
    LinkedList *cell = malloc(sizeof(LinkedList));
    (*cell).value = item;
    (*cell).next = list;
    return cell;

}


int main() {
    LinkedList *list = NULL;
    for (int i=0; i < 5; i++) {
        list = insertFrontLL(list, i);
    }
}
