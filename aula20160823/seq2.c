#include<stdio.h>
int main () {
    float base_triangulo, altura_triangulo, area;
    printf("Favor entrar com a base do triangulo: ");
    scanf("%f",&base_triangulo);
    printf("Favor entrar com a altura do triangulo: ");
    scanf("%f",&altura_triangulo);
    area=(base_triangulo*altura_triangulo)/2;
    printf("A area do triangulo e: %f", area);
    return 0;
}
