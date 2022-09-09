#include <stdio.h>
#include <stdlib.h>

void funcao_troca_inteiros(int *a, int *b){ // Essa troca o valor de a pelo valor de b e vice-versa
    int *aux; // Declara o ponteiro de uma variável que irá auxiliar na troca dos valores, intermediando a mudança
    aux = (int*) malloc(sizeof(int)); // Aloca na memória espaço sufuciente para uma variável do tipo int nomeada aux
    if(aux == NULL){ // Confere se aux foi alocada corretamente, caso contrário exibe uma mensagem de erro
        prinf("Memoria insuficiente\n");
        exit(1);
    }else{
        *aux = *a; // Transfere o valor presente no espaço da memória de a para o espaço na memória de aux
        *a = *b; // Transfere o valor presente no espaço da memória de b para o espaço na memória de a
        *b = *aux; // Recupera o valor armazenado no espaço de memória, que era anteriormente de a, e aloca para o espaço da memória referente à b
        free(aux); // Libera o espaço de memória referente a aux
    }
}

void main(){
    char *p; // Cria um ponteiro p do tipo char
    p = (char*) malloc(4*sizeof(char)); // Aloca para a variável p o espaço na memória de 4 chars (4 bytes)
    strcpy(p, "IFSP"); // Copia para p a string "IFSP"
    p = (char*) realloc(p, 15*sizeof(char)); // Altera o espaço alocado para p de 4 bytes para 15 bytes, sem alterar o valor anteriormente armazenado
    strcat(p, "-Guarulhos"); // Adiciona a string existente em p a string "-Guarulhos"
    printf("%s", p); // Imprime na tela o que está armazenado na string p
    free(p); // Libera a memória ocupada por p
}