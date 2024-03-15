# include <stdio.h>

int main() {
    float numero;

    puts("Digite um número de ponto flutuante: ");
    scanf("%f", &numero);

    printf("\nNúmero fornecido com precisão de uma casa decimal: %.1f", numero);

    return 0;
}