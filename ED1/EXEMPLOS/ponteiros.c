#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Ponteiros são variáveis que armazenam exclusivamente o ENDEREÇO na memória de outras variáveis, ou seja, a sua
    posição dentro da memória RAM do computador. Eles permitem que alterações nas variáveis normais sejam feitas sem a
    necessidade de passá-las por cópia.
*/


void maiscem(int *n1); // Protótipo da função "maiscem()"

int main(){
    setlocale(LC_ALL, "Portuguese");

    int var = 10; // Cria uma variável chamada "var"

    int *p1 = &var; // Cria um ponteiro (por isso o * na frente de p1) que contém o ENDEREÇO (por isso o & antes de var) da variável var

    printf("\n\nO valor da variável é %d e sua posição na memória e %x\n\n", var, p1); // Imprime o valor de var e de p1

    maiscem(p1); // Passa o endereço armazenado em p1, que é da variável var, para a função

    printf("\n\nO valor atual é %d\n\n", var); // Imprime o valor modificado da variável var
}


void maiscem(int *n1){ // *n1 é um novo ponteiro que recebe por cópia o valor de p1 (endereço de momória de var)

    *n1 += 100; // Adiciona 100 no valor contido no endereço de memória correspondente ao ponteiro n1, no caso adiciona 100 à var
}