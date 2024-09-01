# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define SIZE 10
# define SCALE_FACTOR 10

void fillVector(unsigned *vector, unsigned size, unsigned scaleFactor, unsigned displacementValue);

void printVector(unsigned *vector, unsigned size);

void allocateColumns(unsigned **matrix, unsigned lines, unsigned columns);

void fillOccurrenceMatrix(unsigned **matrix, unsigned *vector_x, unsigned lines, unsigned *vector_y, unsigned columns);

unsigned **createOccurrenceMatrix(unsigned *vector_x, unsigned size_x, unsigned *vector_y, unsigned size_y);

void printMatrix(unsigned **matrix, unsigned lines, unsigned columns);

int main() {
    unsigned vector_x[SIZE], vector_y[SIZE], **matrix; 

    srand(time(NULL));

    puts("\n");

    fillVector(vector_x, SIZE, SCALE_FACTOR, 0);
    fillVector(vector_y, SIZE, SCALE_FACTOR, 0);

    printVector(vector_x, SIZE);
    puts("\n");
    printVector(vector_y, SIZE);

    matrix = createOccurrenceMatrix(vector_x, SIZE, vector_y, SIZE);

    printMatrix(matrix, SIZE, SIZE);

    return 0;
}

void fillVector(unsigned *vector, unsigned size, unsigned scaleFactor, unsigned displacementValue) {
    for (register unsigned i = 0; i < size; i++) { *(vector + i) = rand() % scaleFactor + displacementValue; }
}

void printVector(unsigned *vector, unsigned size) {
    for (register unsigned i = 0; i < size; i++) { printf("%u ", *(vector + i)); }
}

void allocateColumns(unsigned **matrix, unsigned lines, unsigned columns) {
    for (register unsigned line = 0; line < lines; line++) {
        if (!(*(matrix + line) = calloc(columns, sizeof(unsigned)))) { abort(); }
    }
}

void fillOccurrenceMatrix(unsigned **matrix, unsigned *vector_x, unsigned lines, unsigned *vector_y, unsigned columns) {
    for (register unsigned i = 0; i < lines; i++) {
        *(*(matrix + *(vector_x + i)) + *(vector_y + i)) += 1;     
    }
}

unsigned **createOccurrenceMatrix(unsigned *vector_x, unsigned size_x, unsigned *vector_y, unsigned size_y) {
    unsigned **matrix;

    if (!(matrix = calloc(size_x, sizeof(unsigned *)))) { abort(); }

    allocateColumns(matrix, size_x, size_y);

    fillOccurrenceMatrix(matrix, vector_x, size_x, vector_y, size_y);

    return matrix;
}

void printMatrix(unsigned **matrix, unsigned lines, unsigned columns) {
    puts("\n");

    for (register unsigned line = 0; line < lines; line++) {
        printVector(*(matrix + line), columns);
        puts("");
    }

    puts("");
}