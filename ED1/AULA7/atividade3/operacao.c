#include "operacao.h"

void soma(int v1, int v2, int *resultado){
    *resultado = v1 + v2;
}

void subtrai(int v1, int v2, int *resultado){
    if(v1 > v2){
        *resultado = v1 - v2;
    }else{
        *resultado = v2 - v1;
    }
}

void divide(int v1, int v2, int *resultado){
    if(v1 > 0){
        *resultado = v1/v2;
    }else{
        printf("\n\nOperação inválida, 0 no denominador!!\n\n");
    }
}

void multiplica(int v1, int v2, int *resultado){
    *resultado = v1*v2;
}