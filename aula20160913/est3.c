#include <stdio.h>

#define quantidade_cad 3

int main () {
    int i=0, opcao;
    struct cadastro {
        char nome[100];
        int idade;
        int tel;
    };
    for(; i<quantidade_cad ;i++){
        printf("Digite seu nome: ");
        gets_s("%c", &cadastro.nome);
        printf("Digite sua idade: ");
        scanf("%d", &cadastro.idade);
        printf("Digite seu telefone: ");
        scanf("%d", &cadastro.tel);
    }
    fflush(stdin);
    printf("Digite 1 para ver todos os nomes da lista, 2 para as idades e 3 para os telefones: ");
    scanf("%d",&opcao);
    switch(opcao){
        case "1": printf("%c",cadastro.nome}; break;
        case "2": printf("%d",cadastro.idade}; break;
        case "1": printf("%d",cadastro.tel}; break;
    return 0;
}
