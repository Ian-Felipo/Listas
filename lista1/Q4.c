# include <stdio.h>

int main() {
    int numero;

    puts("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Triplo do número: %d", numero * numero * numero);
    printf("\nQuadrado do número: %d", numero * numero);
    printf("\nMeio do número: %.3f", (float) numero / 2);

    return 0;
}