# include <stdio.h>

int main() {
    int horas, minutos, segundos;

    puts("Número de segundos:");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos =  segundos % 60;

    printf("\nHoras = %d", horas);
    printf("\nMinutos = %d", minutos);
    printf("\nSegundos = %d", segundos);

    return 0;
}