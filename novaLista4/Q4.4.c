# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool readVectorShort(short **, unsigned);

bool readVectorInt(int **, unsigned);

bool readVectorLong(long **, unsigned);

void printVectorShort(short *, unsigned);

void printVectorInt(int *, unsigned);

void printVectorLong(long *, unsigned);

int main(int argc, char *argv[]) {
    short *vectorShort;
    int *vectorInt;
    long *vectorLong;
    unsigned size_1, size_2, size_3;

    if (argc != 4) { abort(); }

    size_1 = atoi(*(argv + 1));

    puts("\nVetor do tipo short int:");

    if (!readVectorShort(&vectorShort, size_1)) { abort(); }

    printf("\033[A");

    printVectorShort(vectorShort, size_1);

    size_2 = atoi(*(argv + 2));

    puts("Vetor do tipo int:");

    if (!readVectorInt(&vectorInt, size_2)) { abort(); }

    printf("\033[A");

    printVectorInt(vectorInt, size_2);

    size_3 = atoi(*(argv + 3));

    puts("Vetor do tipo long int:");

    if (!readVectorLong(&vectorLong, size_3)) { abort(); }

    printf("\033[A");

    printVectorLong(vectorLong, size_3);

    printf("\033[A");

    return 0;
}

bool readVectorShort(short **vector, unsigned size) {
    if (!(*vector = (short *) malloc(size * sizeof(short)))) { return false; }

    for (register unsigned i = 0; i < size; i++) {
        if(scanf("%hd", *vector + i) != 1) { return false; }
    }
}

bool readVectorInt(int **vector, unsigned size) {
    if (!(*vector = (int *) malloc(size * sizeof(int)))) { return false; }

    for (register unsigned i = 0; i < size; i++) {
        if(scanf("%d", *vector + i) != 1) { return false; }
    }
}

bool readVectorLong(long **vector, unsigned size) {
    if (!(*vector = (long *) malloc(size * sizeof(long)))) { return false; }

    for (register unsigned i = 0; i < size; i++) {
        if(scanf("%ld", *vector + i) != 1) { return false; }
    }
}

void printVectorShort(short *vector, unsigned size) {
    puts("\n");

    for (register unsigned i = 0; i < size; i++) {
        printf("[%p]: %hd\n", vector + i, *(vector + i));
    }

    puts("");
}

void printVectorInt(int *vector, unsigned size) {
    puts("\n");

    for (register unsigned i = 0; i < size; i++) {
        printf("[%p]: %d\n", vector + i, *(vector + i));
    }

    puts("");
}

void printVectorLong(long *vector, unsigned size) {
    puts("\n");

    for (register unsigned i = 0; i < size; i++) {
        printf("[%p]: %ld\n", vector + i, *(vector + i));
    }

    puts("");
}