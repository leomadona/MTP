#include<stdio.h>

void num_pares ();

void num_impares ();

int main () {
        int op;
        printf("Voce deseja ver os pares ou os impares?\nPara pares digite 1 e para impares digite 2: ");
        scanf("%d",&op);
        switch(op) {
            case 1: num_pares(); break;
            case 2: num_impares(); break;
        }

    return 0;
}

void num_pares () {
    printf("2;4;6;8");
}

void num_impares () {
    printf("1;3;5;7;9");
}
