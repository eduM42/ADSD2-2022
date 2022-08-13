/*
    ED1D2
    
    ALUNO: EDUARDO MIRA OZÓRIO
    PRONTUÁRIO: GU302685X
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mtrx[5][5], v[10];
    int i = 0, j = 0, soma = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite os valores da matriz na posição: %d e %d: ", i, j);
            scanf("%d", &mtrx[i][j]);
        }
    }
    printf("\n\nTotal por linha:\n\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            soma = soma + mtrx[i][j];
        }
        printf("\nLinha %d : soma = %d\n", i + 1, soma);
        v[i] = soma;
        soma = 0;
    }
    printf("\n\nTotal por coluna\n\n");
    for(j = 0; j < 5; j++){
        for(i = 0; i < 5; i++){
            soma = soma + mtrx[i][j];
        }
        printf("\nColuna %d : soma = %d\n", j + 1, soma);
        v[j+5] = soma;
        soma = 0;
    }
    for(i = 0; i < 5; i++){
        printf("\nOs valores da soma da linha %d são: %d\n", i + 1, v[i]);
        printf("\nOs valores da soma da coluna %d são: %d\n", i + 1, v[i + 5]);
    }

    printf("\n\nMatriz inserida:\n\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%3d", mtrx[i][j]);
        }
        printf("\n");
    }
}