# include <stdio.h>

int main() {
    int horas;
    float valor, desconto, s_bruto, s_liquido;

    puts("Número de horas trabalhadas no mês:");
    scanf("%d", &horas);
    puts("Valor da hora aula:");
    scanf("%f", &valor);
    puts("Percentual de desconto do INSS (0.0 - 1.0):");
    scanf("%f", &desconto);

    s_bruto = horas * valor;
    s_liquido = s_bruto * (1 - desconto);

    printf("\nSalário bruto: %.2f", s_bruto);
    printf("\nSalário líquido: %.2f", s_liquido);

    return 0;
}