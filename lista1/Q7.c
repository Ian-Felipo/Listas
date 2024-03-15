# include <stdio.h>

int main() {
    int horas, minutos, segundos;

    puts("Quantidade de horas:");
    scanf("%d", &horas);
    puts("Quantidade de minutos:");
    scanf("%d", &minutos);
    puts("Quantidade de segundos:");
    scanf("%d", &segundos);

    segundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("Total de segundos: %d", segundos);

    return 0;
}