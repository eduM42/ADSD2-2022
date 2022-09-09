#include <stdio.h> // Declara a biblioteca stdio
#include <stdlib.h> // Declara a biblioteca stdlib

void main(void){
    int soma = 0, linhas = 3, colunas = 2, i, j; //Define o número de linhas (3), colunas (2), e as variáveis i e j para as funções for
    int ** matriz;  // Declara um ponteiro do ponteiro para a memória
    matriz = (int **) malloc(linhas * sizeof(int*)); // Aloca para a variável "matriz" o espaço de memória para 3 valores do tipo int para as linhas

    for(i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int)); // Aloca para cada posição na variável o espaço para 2 valores do tipo int para as colunas
    }

    for(i = 0; i < linhas; i++){ // Passa por cada linha, esperando popular todas as colunas da linha com a função "for" seguinte
        for(j = 0; j < colunas; j++){ // Passa por cada coluna
            scanf("%d", &matriz[i][j]); //Preenche com valores inseridos pelo usuário a matriz declarada anteriormente
            soma += matriz[i][j];
        }
    }
    printf("%d\n\n\n",soma); // Dá três espaços

    for(i = 0; i < linhas; i++){ // Passa por cada linha, esperando popular todas as colunas da linha com a função "for" seguinte
        for(j = 0; j < colunas; j++){ // Passa por cada coluna
            printf("%d", matriz[i][j]); // Imprime na tela o valor armazenado na posição atual na matriz, ex. linha 1 e coluna 2
        }
        printf("\n"); // Pula uma linha após ler todas as colunas da linha atual da matriz
    }
    
    for(i = 0; i <linhas; i++){ // Passa por todas as linhas do vetor
        free(matriz[i]); // Libera a memória anteriormente alocada para cada linha da matriz
    }
    free(matriz); // Libera a memória para toda a matriz


    /*------------------------------------------------------------------------
    Tenta ler a matriz mesmo depois de liberar a memória anteriormente alocada
    ------------------------------------------------------------------------*/
    
    printf("\n\n\n");// Pula três linhas
    for(i = 0; i < linhas; i++){ // Passa por cada linha, esperando popular todas as colunas da linha com a função "for" seguinte
        for(j = 0; j < colunas; j++){ // Passa por cada coluna
            printf("%d", matriz[i][j]); // Imprime na tela o valor armazenado na matriz conforme a linha e coluna atual
        }
        printf("\n"); // Pula uma linha após ler todas as colunas da linha atual da matriz
    }
}