// recebe x e n
// utilizar operadores binarios
// x * 2 ^ n

# include <stdio.h>

int main() {
    int x, n;

    puts("Digite dois números inteiros (x n):");
    scanf("%d %d", &x, &n);

    printf("\n%d * 2 ^ %d = %d", x, n, x << n);

    return 0;
}