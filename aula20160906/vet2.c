#include <stdio.h>
int main () {
    int vet[10], aux[10];
    int i, n=10;
    for(i=0; i<10; i++){
        printf("Digite o %d numero do vetor: ",i+1);
        scanf("%d",&vet[i]);
    }
    for(i=0; i<5; i++){
        n--;
        aux[i]=vet[i];
        vet[i]=vet[n];
        vet[n]=aux[i];
    }
    printf("\nO vetor reverso e: ");
    for(i=0; i<10; i++)
        printf("%d",vet[i]);

    return 0;
}
