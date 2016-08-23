#include<stdio.h>
#include<time.h>
int main () {
    int num, soma;
    printf("Digite um numero: ");
    scanf("%d",&num);
    srand(time(0));
    int aleat;
    aleat = rand()%2;
    soma= num+aleat;
    if(soma%2==0){
        printf("O resultado da soma e par %d",soma);
    }
    else
        printf("O resultado da soma e impar %d",soma);

    return 0;
}
