#include <complex.h>
#include <stdio.h>
int main(){
    double complex Z1, Z2;
    double R_Z1, I_Z1, multiplicacao;
    printf("Digite a parte real de Z1: ");
    scanf("%lf", &R_Z1);
    printf("Digite a parte imaginaria de Z1: ");
    scanf("%lf", &I_Z1);
    Z1 = R_Z1 + I_Z1*I;
    Z2 = conj(Z1);
    multiplicacao= R_Z1*creal(Z2) + I_Z1*cimag(Z2);
    printf("O conjugado e: %lf + %lf*i \n", creal(Z2), cimag(Z2));
    printf("Multiplicacao: %lf + %lf*i \n", creal(multiplicacao), cimag(multiplicacao));
    return 0;
}
