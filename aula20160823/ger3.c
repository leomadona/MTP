#include <stdio.h>
int main () {
    int num, i, soma=0;
    printf("Digite um numero para verificar se e perfeito: ");
    scanf("%d", &num);
    for (i=1; i<num; i++){
        if (num%i==0){
            soma=soma+i;
        }
    }
    if (num==soma)
        printf ("O numero e perfeito! \n");
    else
        printf ("O numero nao e perfeito! \n");
    return 0;
}
