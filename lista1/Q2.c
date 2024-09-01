# include <stdio.h>

int main() {
    int numero;

    puts("Digite um número inteiro na base decimal: ");
    scanf("%d", &numero);

    printf("\nNúmero forncecido representado como octal: %o", numero);
    printf("\nNúmero forncecido representado como hexadecimal: %x", numero);

    return 0; 
}