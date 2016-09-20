#include <stdio.h>
#include <time.h>

int numero_dado();

int main () {
    srand(time(0));
    int i,l,soma=0, result_dado;
    for(l=1; l<=3; l++){
        printf("%d jogada:\n",l);
        for(i=0; i<5; i++){
            result_dado = numero_dado();
            soma = soma + result_dado;
        }
        printf("A soma dos resultados do dado foi: %d\n",soma);
        if(soma >= 21){
            printf("\nVoce ganhou!\n");
            break;
        }
        else {
            printf("\nVoce perdeu! Tente novamente\n\n");}
    }

        return 0;

}

int numero_dado() {
    return (rand()%7);
}
