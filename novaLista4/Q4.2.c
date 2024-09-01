# include <stdio.h>
# include <stdlib.h>

void replace(int *, int *);

int main(int argc, char *argv[]) {
    int number_1, number_2;

    if (argc != 3) { abort(); }

    number_1 = atoi(*(argv + 1));
    number_2 = atoi(*(argv + 2));

    puts("\nBefore exchange");
    printf("\nNumber 1: %d", number_1);
    printf("\nNumber 2: %d\n", number_2);

    replace(&number_1, &number_2);

    puts("\nAfter the exchange");
    printf("\nNumber 1: %d", number_1);
    printf("\nNumber 2: %d\n", number_2);
    
    return 0;
}

void replace(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;    
}