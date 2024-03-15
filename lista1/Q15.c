# include <stdio.h>
# include <stdlib.h>

int main() {
    int dias;
    float salario;

    puts("Número de dias trabalhados:");
    scanf("%d", &dias);

    if (dias < 0) {
        exit(1);
    } else if (dias <= 10) {
        salario = (52.25 * dias) * 0.9;
    } else if (dias <= 20) {
        salario = 1.2 * (52.25 * dias) * 0.9;
    } else {
        salario = 1.3 * (52.25 * dias) * 0.9;
    }

    printf("\nSalário líquido: %.2f", salario);

    return 0;
}