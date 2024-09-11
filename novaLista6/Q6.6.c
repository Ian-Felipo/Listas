# include <stdio.h>
# include <stdlib.h>

typedef struct node {
    int x;
    struct node *ptr;
} node;

void printLinkedList(const node *);

int main() {
    node v1, v2, v3, v4;

    v1.x = 1;
    v1.ptr = &v2;
    v2.x = 2;
    v2.ptr = &v3;
    v3.x = 3;
    v3.ptr = &v4;
    v4.x = 4;
    v4.ptr = NULL;

    printLinkedList(&v1);

    return 0;
}

void printLinkedList(const node *v) {
    puts("\n");

    do {
        printf("[%p]: %d\n", v, v->x);
        v = v->ptr;
    } while (v);

    puts("");
}