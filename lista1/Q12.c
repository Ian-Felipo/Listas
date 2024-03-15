# include <stdio.h>

int main() {
    int numero1, numero2;

    puts("Insira dois números (a b):");
    scanf("%d %d", &numero1, &numero2);

    printf("Soma: %d", numero1 + numero2);
    printf("\nDiferença: %d", numero1 - numero2);
    printf("\nProduto: %d", numero1 * numero2);

    if (numero2) {
        printf("\nQuociente: %.2f", (float) numero1 / numero2);
        printf("\nResto da divisão: %d", numero1 % numero2);
    } else {
        printf("\nÍmpossivel dividir por zero.");
    } 

    return 0;
}