# include <stdio.h>
# include <math.h>

int main() {
    int numero;

    puts("Número inteiro:");
    scanf("%d", &numero);

    numero = pow(numero, 2);

    printf("\nQuadrado do número fornecido: %d", numero);

    return 0;
}