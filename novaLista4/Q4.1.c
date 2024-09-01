# include <stdio.h>
# include <stdlib.h>

void add(int *, int *, int *);

int main(int argc, char *argv[]) {
    int number_1, number_2, number_3;

    if (argc != 3) { abort(); }

    number_1 = atoi(*(argv + 1));
    number_2 = atoi(*(argv + 2));

    add(&number_1, &number_2, &number_3);

    printf("\nSum: %d\n", number_3);  
    printf("\nMemory address of the variable that stores the sum: %p\n", &number_3);  

    return 0;
}

void add(int *x, int *y, int *sum) {
    *sum = *x + *y;
}