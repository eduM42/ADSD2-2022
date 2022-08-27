#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1 = 0, v2 = 0; // Declara a primeira vairável
    printf("Insira o valor da primeira variável: ");
    scanf("%d", &v1);
    printf("Insira o valor da segunda variável: ");
    scanf("%d", &v2);
    if(&v1 > &v2){ // Se o valor do ENDEREÇO de v1 for maior que v2
        printf("\n\nO endereço da variável v1 é maior que a de v2: %x\nValor de v1: %d\n\n", &v1, v1); // Imprime a mensagem e o endereço de v1
    }else if(&v2 > &v1){ // Se o valor do ENDEREÇO de v2 for maior que v1
        printf("\n\nO endereço da variável v2 é maior que a de v1: %x\nValor de v2: %d\n", &v2, v2); // Imprime a mensagem e o endereço de v2
    }
}