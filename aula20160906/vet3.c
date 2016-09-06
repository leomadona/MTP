#include <stdio.h>
int main () {
    int vet[10];
    int i, soma=0, produto=1;
    for(i=0; i<10; i++){
        printf("Digite o %d numero do vetor: ",i+1);
        scanf("%d",&vet[i]);
        soma=soma+vet[i];
        produto=produto*vet[i];
    }
    printf("A soma e: %d",soma);
    printf("\nO produto e: %d",produto);
    return 0;
}

