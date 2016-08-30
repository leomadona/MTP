#include<stdio.h>
#include<math.h>
int main () {
    double lado_a,lado_b, lado_c, angulo;
    printf("Digite um dos lados do triangulo: ");
    scanf("%lf",&lado_b);
    printf("Digite outro lado do triangulo: ");
    scanf("%lf",&lado_c);
    printf("Digite o angulo formado entre os lados acima (em radianos): ");
    scanf("%lf",&angulo);
    lado_a=sqrt(pow(lado_b,2)+ pow(lado_c,2)-2*lado_b*lado_c*cos(angulo));
    printf("\nO valor do lado que falta e: %f",lado_a);
    return 0;
}
