#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int nota[3];
    char matricula[20];
    for(int i = 0; i < 3; i++){
        printf("Insira a nota da prova %d: ", i+1);
        scanf("%d", &nota[i]);
    }
    printf("\n\n");

    float media = (nota[0]+nota[1]+(nota[2]*2))/4;

    printf("\nA media final do aluno é de = %.2f", media);

    if(media >= 60){
        printf("\nAluno aprovado!!!\n\n");
    }else{
        printf("\nAluno reprovado\n\n");
    }
}