# include <stdio.h>

int main() {
    float conta;

    puts("Informe o valor da conta a ser paga: ");
    scanf("%f", &conta);

    conta *= 1.10;

    printf("Valor total a ser pago: %.2f", conta);

    return 0;
}