# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define SCALE_FACTOR 10
# define DISPLACEMENT_VALUE 0

typedef struct {
    int *ptr;
    unsigned size;
    double average;
} vector;

typedef void (*fillVector)(vector *); 

void allocateVector(vector *);

void fillRandomNumbers(vector *);

void calculateAverage(vector *);

void createVector(vector *, unsigned, fillVector);

void printVector(vector *);

int main(int argc, char *argv[]) {
    char *endptr;
    vector x;

    if (argc != 2) { abort(); }

    srand(time(NULL));

    createVector(&x, strtoul(*(argv + 1), &endptr, 10), fillRandomNumbers);

    printVector(&x);

    printf("Average: %.2f\n", x.average);

    free(x.ptr);

    return 0;
}

void allocateVector(vector *x) {
    if (!(x->ptr = (int *) malloc(x->size * sizeof(int)))) { return; }
}

void fillRandomNumbers(vector *x) {
    for (register unsigned i = 0; i < x->size; i++) {
        *(x->ptr + i) = rand() % SCALE_FACTOR + DISPLACEMENT_VALUE;
    }
}

void calculateAverage(vector *x) {
    double average = 0;

    for (register unsigned i = 0; i < x->size; i++) {
        average += *(x->ptr + i);
    }

    x->average = average / x->size;
}

void createVector(vector *x, unsigned size, fillVector y) {
    x->size = size;
    allocateVector(x);
    y(x);
    calculateAverage(x);
}

void printVector(vector *x) {
    puts("");

    for (register unsigned i = 0; i < x->size; i++) {
        printf("[%p]: %d\n", x->ptr + i, *(x->ptr + i));
    }

    puts("");
}