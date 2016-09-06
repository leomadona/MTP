#include <stdio.h>
int main () {
    float num1, num2, soma;
    unsigned char * ponteiro;
    printf("Digite um numero real: ");
    scanf("%f", &num1);
    printf("Digite outro numero real: ");
    scanf("%f", &num2);
    soma=num1+num2;
    printf("Endereço de memoria e conteudo do primeiro numero: %p : %f\n", &num1, num1);
    printf("Endereço de memoria e conteudo do segundo numero: %p : %f\n", &num2, num2);
    printf("Endereço de memoria e conteudo da soma: %p : %f\n", &soma, soma);
    return 0;
}
