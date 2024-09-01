# include <stdio.h>

int main() {
    int numero;

    puts("Digite um número inteiro:");
    scanf("%d", &numero);

    printf("\n%d é um número %s.", numero, (numero % 2) ? "ímpar" : "par");

    return 0;
}