#include<stdio.h>
int main () {
    float lado_quadrado, area;
    printf("Favor entrar com o lado do quadrado: ");
    scanf("%f",&lado_quadrado);
    area=lado_quadrado*lado_quadrado;
    printf("A area do quadrado e: %f", area);
    return 0;
}
