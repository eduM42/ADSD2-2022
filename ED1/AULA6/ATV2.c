#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunos, nota;
    float *notas = NULL, soma;

    printf("Insira a quantidade de alunos na sala: ");
    scanf("%d", &alunos);

    notas = (float*) malloc(alunos*sizeof(float));
    for(int i = 0; i < alunos; i++){
        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    printf("\n\n\n");

    for(int i = 0; i < alunos; i++){
        printf("\nNota do aluno %d = %.2f", i+1, notas[i]);
        soma += notas[i];
    }
    printf("\n\nA media das notas e = %.2f", soma/alunos);
    printf("\n\n\n");
}