# include <stdio.h>

int main() {
    unsigned char numero;

    puts("\nDigite um número inteiro entre 1 e 7, digite 0 para sair do programa:");
    scanf("%d", &numero);

    while (numero != 0) {
        switch (numero) {
            case 1:
                printf("Dia correspondente ao número fornecido: Domingo.");
                break;
            case 2:
                printf("Dia correspondente ao número fornecido: Segunda.");
                break;
            case 3:
                printf("Dia correspondente ao número fornecido: Terça.");
                break;
            case 4:
                printf("Dia correspondente ao número fornecido: Quarta.");
                break;
            case 5:
                printf("Dia correspondente ao número fornecido: Quinta.");
                break;
            case 6:
                printf("Dia correspondente ao número fornecido: Sexta.");
                break;
            case 7:
                printf("Dia correspondente ao número fornecido: Sábado.");
                break;
            default:
                printf("Número de dia não válido.");
        }

        puts("\n\nDigite um número de 1 a 7, digite 0 para sair do programa:");
        scanf("%d", &numero);
    }

    return 0;
}