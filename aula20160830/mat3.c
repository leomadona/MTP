#include<stdio.h>
#include<math.h>
int main (){
    double numero, base,log_desejado;
    printf("Digite o numero: ");
    scanf("%lf",&numero);
    printf("Digite a base: ");
    scanf("%lf",&base);
    log_desejado=log(numero)/log(base);
    printf("\nO log e: %f\n",log_desejado);
    return 0;
}
