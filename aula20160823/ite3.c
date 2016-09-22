#include <stdio.h>
int main () {
    int i, soma=0;
    char string [256];
    printf("Digite a frase: ");
    scanf("%s", &string);
    for (i=0; string[i]!='\0';i++)
        soma=soma+1;
    printf ("\n O numero de caracteres da string e: %d", soma);
    return 0;
}

