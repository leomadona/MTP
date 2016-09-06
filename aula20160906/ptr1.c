#include <stdio.h>
int main (){
    unsigned int numero = 0xFACA8421;
    unsigned char * ponteiro = NULL;
    printf("%p : %u\n", &numero, numero);
    ponteiro = (unsigned char *)&numero;
    printf("%p : %X\n", ponteiro, *ponteiro);
    printf("%p : %X\n", ponteiro+1, *(ponteiro+1));
    printf("%p : %X\n", ponteiro+2, *(ponteiro+2));
    printf("%p : %X\n", ponteiro+3, *(ponteiro+3));
    return 0;
}
