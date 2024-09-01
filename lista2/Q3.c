# include <stdio.h>

int main() {
    int numero;
    long long int f = 1;

    puts("Digite um número inteiro não negativo:");
    scanf("%d", &numero);

    for (int i = 2; i <= numero; i++) { f *= i; }

    printf("Fatorial do numero escolhido: %d", f);

    return 0;
}