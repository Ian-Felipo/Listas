# include <stdio.h>

int main() {
    float cotacao, reais;

    puts("Cotação do dólar hoje:");
    scanf("%f", &cotacao);
    puts("Quantidade de reais:");
    scanf("%f", &reais);

    printf("\nConversão em dólar: %.2f", reais / cotacao);

    return 0;
}