# include <stdio.h>

int main() {
    printf("char: %d", sizeof(char));
    printf("\nshort int: %d", sizeof(short int));
    printf("\nint: %d", sizeof(int));
    printf("\nlong int: %d", sizeof(long int));
    printf("\nlong long int: %d", sizeof(long long int));
    printf("\nfloat: %d", sizeof(float));
    printf("\ndouble: %d", sizeof(double));
    printf("\nlong double: %d", sizeof(long double));

    return 0;
}