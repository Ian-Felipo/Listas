# include <stdio.h>
# include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    puts("Forneça as coordenadas x e y do 1° ponto (x y):");
    scanf("%f %f", &x1, &y1);
    puts("Forneça as coordenadas x e y do 2° ponto (x y):");
    scanf("%f %f", &x2, &y2);

    distancia = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    distancia = sqrt(distancia);

    printf("Distancia entre os dois pontos no plano: %.2f", distancia);

    return 0;
}