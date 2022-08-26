#include <stdio.h>
#include <stdlib.h>

// Declaração dos protótipos dos procedimentos
void colValores(int *n1, int *n2, int *n3); // Parâmetros de três ponteiros declarados, do tipo int
void maiscem(int *n1, int *n2, int *n3); // Parâmetros de três ponteiros declarados, do tipo int

int main(){
    int n1 = 0, n2 = 0, n3 = 0; // Declara as variáveis do tipo int
    int *p1 = &n1, *p2 = &n2, *p3 = &n3; // Declara ponteiros do tipo int com valores da posição de n1, n2 e n3, respectivamente

    colValores(p1, p2, p3); // Passa ao procedimento o ponteiro (posição na memória) dos valores declarados acima
    maiscem(p1, p2, p3);  // Passa ao procedimento o ponteiro (posição na memória) dos valores declarados acima
    printf("\n\nValor de n1 = %d\nValor de n2 = %d\nValor de n3 = %d\n\n", n1, n2, n3); // Imprime os valores alterados das variávies
}

void colValores(int *n1, int *n2, int *n3){ // Atribui os valores inseridos pelo usuário nos endereços coletados nos parâmetros
    printf("Insira o valor do primeiro número: ");
    scanf("%d", n1);
    printf("Insira o valor do segundo número: ");
    scanf("%d", n2);
    printf("Insira o valor do terceiro número: ");
    scanf("%d", n3);
}

void maiscem(int *n1, int *n2, int *n3){ // Adiciona 100 aos valores correspondentes aos endereços passados pelos ponteiros nos parâmetros
    *n1 += 100;
    *n2 += 100;
    *n3 += 100;
}