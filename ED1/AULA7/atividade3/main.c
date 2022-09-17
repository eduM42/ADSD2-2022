#include <stdio.h>
#include <stdlib.h>
#include "operacao.h"

int main(){
    int opt = 0;
    int v1 = 0;
    int v2 = 0;
    int res = 0;

    printf("Selecione a opcao desejada: ");
    printf("\n1- Soma;\n2- subtracao;\n3- Divisao;\n4- multiplicacao\n\nInsira a opcao: ");
    scanf("%d", &opt);
    printf("\nInsira o primeiro valor para a operacao: ");
    scanf("%d", &v1);
    printf("\nInsira o segundo valor para a operacao: ");
    scanf("%d", &v2);

    if(opt == 1){
        soma(v1, v2, &res);
    }else if(opt == 2){
        subtrai(v1, v2, &res);
    }else if(opt == 3){
        divide(v1, v2, &res);
    }else if(opt == 4){
        multiplica(v1, v2, &res);
    }

    printf("\n\nO resultado da operacao e %d\n\n", res);
}