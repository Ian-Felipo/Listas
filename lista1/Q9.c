# include <stdio.h>

int main() {
    int numero;

    puts("Número inteiro:");
    scanf("%d", &numero);

    printf("\nNúmero anterior: %d", numero - 1);
    printf("\nNúmero sucessor: %d", numero + 1);

    return 0;
}