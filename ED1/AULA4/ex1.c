#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 0, n2 = 0, n3 = 0;
    colValores(&n1, &n2, &n3);
    maiscem(&n1, &n2, &n3);
    printf("\n\nValor de n1 = %d\nValor de n2 = %d\nValor de n3 = %d\n\n", n1, n2, n3);
}

void colValores(int *n1, int *n2, int *n3){
    printf("Insira o valor do primeiro número: ");
    scanf("%d", n1);
    printf("Insira o valor do segundo número: ");
    scanf("%d", n2);
    printf("Insira o valor do terceiro número: ");
    scanf("%d", n3);
}

void maiscem(int *n1, int *n2, int *n3){
    *n1 += 100;
    *n2 += 100;
    *n3 += 100;
}