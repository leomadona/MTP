#include<stdio.h>
int main () {
    int i, base, expoente, result=1;
    printf("Digite a base: ");
    scanf("%d",&base);
    printf("Digite o expoente: ");
    scanf("%d",&expoente);
    if(expoente==0){
        result=1;
    }
    else
        for(i=1; i<=expoente;i++)
            result=result*base;
    printf("O resultado da potencia e: %d",result);

    return 0;
}
