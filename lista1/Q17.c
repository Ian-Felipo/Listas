# include <stdio.h>
# include <stdlib.h>

int main() {
    int numero;

    puts("Digite um número inteiro:");
    scanf("%d", &numero);
    
    printf("\nValor absoluto do número: %d", abs(numero));

    return 0;
}