#include<stdio.h>
#include<stdint.h>
int main (){
    double fatorial=1;
    int i;
    int numero;
    printf("Fatorial de: ");
    scanf("%d", &numero);
    for(i=2; i<=numero; i++)
        fatorial= fatorial*i;
    printf("O fatorial de %d e %lf\n",numero,fatorial);
    return 0;
}
