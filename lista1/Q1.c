# include <stdio.h>

int main() {
    int x;

    x = 7 + 3 * 6 / 2 - 1;

    // Ordem dos operadores:
    // 1) 3 * 6
    // 2) 18 / 2
    // 3) 7 + 9
    // 4) 16 - 1

    printf("x = %d", x); // x = 15

    x = 2 % 2 + 2 * 2 - 2 / 2;

    // Ordem dos operadores:
    // 1) 2 % 2
    // 2) 2 * 2
    // 3) 2 / 2
    // 4) 0 + 4
    // 5) 4 - 1

    printf("\nx = %d", x); // x = 3

    x = (3 * 9 * (3 + (9 * 3 / (3))));

    // Ordem dos operadores:
    // 1) 9 * 3
    // 2) 27 / 3
    // 3) 3 + 9
    // 4) 3 * 9
    // 5) 27 * 12

    printf("\nx = %d", x); // x = 324 
    
    return 0;
}