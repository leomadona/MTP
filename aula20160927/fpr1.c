#include <stdio.h>
int divisao(int dividendo, int divisor, int * pquociente, int * presto);
int main() {
    int dividendo, divisor;
    int quociente, resto;
    printf("Entre com o dividendo: "); scanf("%d",&dividendo);
    printf("Entre com o divisor: "); scanf("%d",&divisor);
    divisao(dividendo,divisor,&quociente,&resto);
    printf("Quociente: %d, Resto: %d\n",quociente,resto);
    return 0;
}

int divisao(int dividendo, int divisor, int * pquociente, int * presto){
        if(divisor != 0) {
        *pquociente = dividendo/divisor;
        *presto = dividendo%divisor;
        return 1;
        }
        else return 0;
}

