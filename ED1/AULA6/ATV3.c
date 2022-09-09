#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas, soma = 0;
    int ** matriz;

    printf("Insira o numero de linhas desejadas: ");
    scanf("%d", &linhas);
    printf("Insira o numero de colunas desejadas: ");
    scanf("%d", &colunas);

    matriz = (int **) malloc(linhas * sizeof(int*));

    for(int i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Insira o valor para a linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            soma += matriz[i][j];
        }
    }

    printf("\n\n\n");
    printf("A soma dos valores inseridos na matriz é: %d\n\n", soma);
}
