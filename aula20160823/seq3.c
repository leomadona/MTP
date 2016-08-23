#include<stdio.h>
int main () {
    float notaA, notaB, notaC, media;
    printf("Favor entrar com a nota A: ");
    scanf("%f",&notaA);
    printf("Favor entrar com a nota B: ");
    scanf("%f",&notaB);
    printf("Favor entrar com a nota C: ");
    scanf("%f",&notaC);
    media=((notaA*2.0)+(notaB*3.0)+(notaC*5.0))/(2.0+3.0+5.0);
    printf("A media e: %f", media);
    return 0;
}
