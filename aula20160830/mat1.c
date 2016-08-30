#include<stdio.h>
#include<math.h>
int main () {
    float P1_x, P1_y, P2_x, P2_y, distancia;
    printf("Coordenada x de P1: ");
    scanf("%f",&P1_x);
    printf("Coordenada y de P1: ");
    scanf("%f",&P1_y);
    printf("Coordenada x de P2: ");
    scanf("%f",&P2_x);
    printf("Coordenada y de P2: ");
    scanf("%f",&P2_y);
    distancia = sqrt(pow(P2_x-P1_x,2.)+pow(P2_y-P1_y,2.));
    printf("A distancia entre os pontos e: %f",distancia);
    return 0;
}
