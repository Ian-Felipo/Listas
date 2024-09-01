# include <stdio.h>

int main() {
    int numero, centenas, dezenas, unidades;

    puts("Digite um número inteiro de 3 dígitos:");
    scanf("%d", &numero);

    centenas = numero / 100;
    unidades = numero % 100;
    dezenas = unidades / 10;
    unidades %= 10;

    numero = 100 * unidades + 10 * dezenas + centenas;

    printf("\nNúmero com os componentes na ordem inversa: %d", numero);

    return 0; 
}