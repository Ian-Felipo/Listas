// recebe 3 floats
// imprima média aritmética e geométrica
// usar pow(base, expoente)

# include <stdio.h>
# include <math.h>

int main() {
    float num1, num2, num3, med_aritmetica, med_geometrica;

    puts("Digite três números em ponto flutuante (n1 n2 n3):");
    scanf("%f %f %f", &num1, &num2, &num3);

    med_aritmetica = (num1 + num2 + num3) / 3;
    med_geometrica = pow(num1 * num2 * num3, 1.0 / 3);

    printf("\nMédia aritmética = %.2f", med_aritmetica);
    printf("\nMédia geométrica = %.2f", med_geometrica);

    return 0;
}
