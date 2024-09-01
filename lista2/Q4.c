# include <stdio.h>

int main() {
    unsigned char alturaJose = 150, alturaPedro = 110, anos = 0;

    while (alturaPedro <= alturaJose) {
        alturaJose += 2;
        alturaPedro += 3;
        anos++;
    }

    printf("\nPedro será maior que José em %d anos.\n", anos);

    return 0;
}