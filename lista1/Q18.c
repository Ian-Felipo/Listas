# include <stdio.h>
# define pi 3.14159

int main() {
    float raio;

    puts("Digite o raio do círculo:");
    scanf("%f", &raio);

    printf("\nDiametro: %f", raio * 2);
    printf("\nCircunferencia: %f", 2 * pi * raio);
    printf("\nÁrea: %f", pi * raio * raio);

    return 0;
}