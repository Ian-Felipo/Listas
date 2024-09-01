# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void fillRandomVector(int *, unsigned, unsigned, int);

int *createRandomVector(unsigned, unsigned, int);

void printVector(int *, unsigned);

int *findSmallestElement(int *, unsigned);

int *findLargestElement(int *, unsigned);

void fillSmallerLargerVector(int **, int *, unsigned);

int **createSmallerLargerVector(int *, unsigned);

int main(int argc, char *argv[]) {
    int *vector_x;
    int **vector_y;
    unsigned size;

    if (argc != 2) { abort(); }

    size = atoi(*(argv + 1));

    vector_x = createRandomVector(size, 100, 0);

    printVector(vector_x, size);

    vector_y = createSmallerLargerVector(vector_x, size);

    printf("\nEndereço do menor elemento do vetor: %p\n", *vector_y);
    printf("\nEndereço do maior elemento do vetor: %p\n", *(vector_y + 1));

    printf("\nMenor elemento do vetor: %d\n", **vector_y);
    printf("\nMaior elemento do vetor: %d\n", **(vector_y + 1));

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

int *findLargestElement(int *vector, unsigned size) {
    int *bigger = vector;

    for (register unsigned i = 1; i < size; i++) {
        if (*bigger < *(vector + i)) { bigger = vector + i; }
    }

    return bigger;
}

void fillSmallerLargerVector(int **smallerLargerVector, int *vector, unsigned size) {
    *smallerLargerVector = findSmallestElement(vector, size);
    *(smallerLargerVector + 1) = findLargestElement(vector, size);
}

int **createSmallerLargerVector(int *vector, unsigned size) {
    int **smallerLargerVector;

    if (!(smallerLargerVector = calloc(2, sizeof(int *)))) { abort(); }

    fillSmallerLargerVector(smallerLargerVector, vector, size);

    return smallerLargerVector;
}