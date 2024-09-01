# include <stdio.h>

int main() {
    float celsius, fahrenheit;

    puts("Digite a temperatura em graus celsius:");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("\nTemperatura em graus fahrenheit: %.2f", fahrenheit);

    return 0;
}