# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void fillRandomVector(int *, unsigned, unsigned, int);

int *createRandomVector(unsigned, unsigned, int);

void printVector(int *, unsigned);

int *findSmallestElement(int *, unsigned);

int main(int argc, char *argv[]) {
    int *vector;
    unsigned size;

    if (argc != 2) { abort(); }

    size = atoi(*(argv + 1));

    vector = createRandomVector(size, 100, 0);

    printVector(vector, size);

    printf("\nEndereço do menor elemento do vetor: %p\n", findSmallestElement(vector, size));

    return 0;
}

void fillRandomVector(int *vector, unsigned size, unsigned sf, int dv) {
    for (register unsigned i = 0; i < size; i++) { *(vector + i) = rand() % sf + dv; }
}

int *createRandomVector(unsigned size, unsigned sf, int dv) {
    int *randomVector;

    if (!(randomVector = calloc(size, sizeof(int)))) { abort(); }

    fillRandomVector(randomVector, size, sf, dv);

    return randomVector;
}

void printVector(int *vector, unsigned size) {
    puts("\n");

    for (register unsigned i = 0; i < size; i++) { printf("[%p]: %d\n", vector + i, *(vector + i)); }

    puts("");
}

int *findSmallestElement(int *vector, unsigned size) {
    int *smaller = vector;

    for (register unsigned i = 1; i < size; i++) {
        if (*smaller > *(vector + i)) { smaller = vector + i; }
    }

    return smaller;
}