# include <stdio.h>

int main() {
    int a, b;

    puts("Digite o número inteiro A:");
    scanf("%d", &a); 
    puts("Digite o número inteiro B:");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nA = %d", a);
    printf("\nB = %d", b);

    return 0;
}