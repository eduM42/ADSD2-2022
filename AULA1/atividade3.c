/*
    ED1D2
    
    ALUNO: EDUARDO MIRA OZÓRIO
    PRONTUÁRIO: GU302685X
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int v1[5], v2[5];
    int i = 0, j = 0;

    for(i = 0; i <5; i++){
        printf("\nInforme o valor do elemento %d do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for(j = 0; j <5; j++){
        printf("\nInforme o valor do elemento %d do vetor 2: ", j + 1);
        scanf("%d", &v2[j]);
    }

    for(i = 0; i <5; i++){
        printf("\nValor do elemento %d do vetor 1: %d", i + 1, v1[i]);
    }
    printf("\n");

    for(j = 0; j <5; j++){
        printf("\nValor do elemento %d do vetor 2: %d", j + 1, v2[j]);
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j <5; j++){
            if(v1[i] == v2[j]){
                printf("\nValores iguais na posição %d e %d\n", i + 1, j + 1);
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
