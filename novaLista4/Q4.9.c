# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <time.h>

# define SIZE 30
# define SCALE_FACTOR 10
# define DISPLACEMENT_VALUE 0

void fillVector(int *vector, unsigned size, unsigned scaleFactor, int displacementValue);

void printVector(int *vector, unsigned size);

void exchangeNumbers(int *x, int *y); 

void bubbleSort(int *vector, unsigned size);

int main() {
    int vector[SIZE];

    srand(time(NULL));

    fillVector(vector, SIZE, SCALE_FACTOR, DISPLACEMENT_VALUE);

    printf("\nDisorderly vector:");

    printVector(vector, SIZE);

    printf("\033[A");

    bubbleSort(vector, SIZE);

    printf("\nOrdered vector:");

    printVector(vector, SIZE);

    printf("\033[A");

    return 0;
}

void fillVector(int *vector, unsigned size, unsigned scaleFactor, int displacementValue) {
    for (register unsigned i = 0; i < size; i++) { *(vector + i) = rand() % scaleFactor + displacementValue; }
}

void printVector(int *vector, unsigned size) {
    puts("");

    for (register unsigned i = 0; i < size; i++) { printf("\n[%p]: %d", vector + i, *(vector + i)); }

    puts("\n");
}

void exchangeNumbers(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void bubbleSort(int *vector, unsigned size) {
    bool organizedVector;

    do {
        organizedVector = true;

        for (register unsigned i = 0; i < size; i++) {
            if (*(vector + i) > *(vector + i + 1)) { 
                organizedVector = false;
                exchangeNumbers(vector + i, vector + i + 1);
            }
        }

        size--;
    } while (!organizedVector);
}