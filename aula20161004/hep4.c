#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char nome [32];
	int idade;

}dados;
dados* incluir(dados* a, int *n);
void recebe(char tipo, void * endereco);
void recebeSTR(char * endereco, int n);
int main (){
	dados* info;
	int op, n=0;
	info=(dados*)calloc(1,sizeof(dados));
	printf("Escolha o que deseja fazer:\n");
	printf("Incluir dados, digite 1.\n");
	printf("Excluir dados, digite 2.\n");
	printf("Para ver todos os dados, digite 3.\n");
	recebe('i',&op);
	if (op==1)
	info=incluir(info, &n);
	printf("%s %d", info[0].nome, info[0].idade);

	return 0;
}
dados* incluir(dados* a, int *n)
{
	printf("Digite o nome: ");
	recebeSTR(a[*n].nome,32);
	//fgets(a[*n].nome,32,stdin);
	printf("Digite a idade: ");
	recebe('i', &a[*n].idade);
	a=(dados*)realloc(a, (*n)+2);
	(*n)++;
	return a;
}






void recebe(char tipo, void * endereco) {
    int c;
    switch(tipo){
        case 'i': scanf("%d",(int*) endereco); break;
        case 'f': scanf("%f",(float*) endereco); break;
        case 'd': scanf("%lf",(double*) endereco); break;
        case 'c': scanf("%c",(char*) endereco); break;
    }
    while((c = getchar()) != EOF && c != '\n'); // apagar o buffer de entrada
}

void recebeSTR(char * endereco, int n) {
    fgets(endereco, n, stdin);
    if(endereco[strlen(endereco)-1] == 10)
       endereco[strlen(endereco)-1] = '\0';
}
