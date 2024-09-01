# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <time.h>

# define SIZE 10
# define SCALE_FACTOR 10
# define DISPLACEMENT_VALUE 0

void fillVector(unsigned *vector, unsigned size, unsigned scaleFactor, unsigned displacementValue);

void printVector(unsigned *vector, unsigned size);

unsigned findLargestNumber(unsigned *vector, unsigned size);

unsigned *createOccurrenceVector(unsigned *vector, unsigned size);

int main() {
    unsigned vector[SIZE];
    unsigned *occurrenceVector;

    srand(time(NULL));

    fillVector(vector, SIZE, SCALE_FACTOR, DISPLACEMENT_VALUE);

    printVector(vector, SIZE);

    occurrenceVector = createOccurrenceVector(vector, SIZE);

    printVector(occurrenceVector, findLargestNumber(vector, SIZE) + 1);

    free(occurrenceVector);

    return 0;
}

void fillVector(unsigned *vector, unsigned size, unsigned scaleFactor, unsigned displacementValue) {
    for (register unsigned i = 0; i < size; i++) { *(vector + i) = rand() % scaleFactor + displacementValue; }
}

void printVector(unsigned *vector, unsigned size) {
    puts("");

    for (register unsigned i = 0; i < size; i++) { printf("\n[%p]: %d", vector + i, *(vector + i)); }

    puts("\n");
}

unsigned findLargestNumber(unsigned *vector, unsigned size) {
    unsigned largestNumber = *vector;

    for (register unsigned i = 0; i < size; i++) { 
        if (largestNumber < *(vector + i)) { largestNumber = *(vector + i); }
    }

    return largestNumber;
}

unsigned *createOccurrenceVector(unsigned *vector, unsigned size) {
    unsigned *occurrenceVector;

    if (!(occurrenceVector = (unsigned *) calloc(findLargestNumber(vector, size) + 1, sizeof(unsigned)))) { return NULL; }

    for (register unsigned i = 0; i < size; i++) { *(occurrenceVector + *(vector + i)) += 1; }

    return occurrenceVector;
}