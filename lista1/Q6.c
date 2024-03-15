# include <stdio.h>
# include <string.h>

int main() {
    float altura;
    char sexo[10];

    puts("Sua altura em metros: ");
    scanf("%f", &altura);
    puts("Seu sexo: ");
    scanf("%s", sexo);

    if (!strcmp(sexo, "Masculino") || !strcmp(sexo, "masculino")) {
        printf("\nPeso ideal em Kg: %.2f", 72.7 * altura - 58);
    } else if (!strcmp(sexo, "Feminino") || !strcmp(sexo, "feminino")) {
        printf("\nPeso ideal em Kg: %.2f", 62.1 * altura - 44.7);
    } else {
        printf("\nSexo inválido.");
    }

    return 0;
}