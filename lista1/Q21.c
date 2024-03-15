# include <stdio.h>

int main() {
    int numero1, numero2;

    puts("Digite dois números inteiros (n1 n2):");
    scanf("%d %d", &numero1, &numero2);

    printf("\n%d %s é multiplo de %d.", numero1, (numero1 % numero2) ? "não" : "", numero2);

    return 0;
}