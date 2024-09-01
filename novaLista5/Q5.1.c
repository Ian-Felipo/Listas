# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[]) {
    char operator;
    int x, y;

    if (argc != 4) { abort(); }

    operator = **(argv + 2);
    x = atoi(*(argv + 1));
    y = atoi(*(argv + 3));

    if (operator == '+') {
        printf("\nResult: %d\n", x + y);
    } else if (operator == 'x') {
        printf("\nResult: %d\n", x * y);
    } else {
        puts("\nInvalid operator!");
    }

    return 0;
}