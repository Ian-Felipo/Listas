# include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    puts("Comprimento:");
    scanf("%f", &comprimento);
    puts("Largura:");
    scanf("%f", &largura);
    puts("Altura:");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("\nVolume da caixa retangular: %.3f", volume);

    return 0;
}