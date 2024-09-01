# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

# define TRUE 'y'

void findSmallestNumber(int *, int);

int main() {
    char continueProgram;
    int smallestNumber = INT_MAX, x;

    do {
        puts("\nEnter an integer:");

        if (scanf("%d", &x) != 1) { abort(); }

        findSmallestNumber(&smallestNumber, x);

        puts("\nDo you want to continue the program (y/n):");

        if (scanf("\n%c", &continueProgram) != 1) { abort(); }
    } while (continueProgram == TRUE);

    printf("\nSmallest number: %d\n", smallestNumber);
    
    return 0;
}

void findSmallestNumber(int *smallestNumber, int x) {
    if (*smallestNumber > x) { *smallestNumber = x; }
}