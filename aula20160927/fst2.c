#include <stdio.h>

struct fracoes {
    int num1;
    int num2;
    int den1;
    int den2;
    int numerador;
    int denominador;
};

struct fracoes resposta(int num1, int num2, int den1, int den2, int numerador, int denominador);

int main() {
    struct fracoes resposta;
    int num1, num2, den1, den2, numerador, denominador;
    printf("Entre com a primeira fracao: "); scanf("%d/%d",&num1,&den1);
    printf("Entre com a segunda fracao: "); scanf("%d/%d",&num2,&den2);
    resposta = soma(num1, num2, den1, den2, numerador, denominador);
    printf("A soma das fracoes e: %d/%d",resposta.numerador,resposta.denominador);
    return 0;
}

struct fracoes soma(int num1, int num2, int den1, int den2, int numerador, int denominador) {
    struct fracoes resposta;
    resposta.numerador = (num1*den2)+(num2*den1);
    resposta.denominador = den1*den2;
    return resposta;
}
