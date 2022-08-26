#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1;
    int v2;

    if(&v1 > &v2){
        printf("\n\nO endereço da variável v1 é maior que a de v2: %x\n\n", &v1);
    }else if(&v2 > &v1){
        printf("\n\nO endereço da variável v2 é maior que a de v1: %x\n\n", &v2);
    }
}