/*
    ED1D2

    ALUNO: EDUARDO MIRA OZÓRIO
    PRONTUÁRIO: GU302685X
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
};

void main(){
    setlocale(LC_ALL, "Portuguese");
    struct funcionario f[5];

    for(int i = 0; i < 5; i++){
        f[i].ID = i+1;
        printf("Insira os dados do funcionário %d\n", i+1);
        fflush(stdin);
        printf("Insira o nome do funcionário: ");
        fgets(f[i].nome, 30, stdin);
        fflush(stdin);
        printf("Insira a idade do funcionário: ");
        scanf("%d", &f[i].idade);
        printf("Insira o salário do funcionário: ");
        scanf("%f", &f[i].salario);
        printf("\n\n");
    }

    system("cls");

    for(int i = 0; i < 5; i++){
        printf("Funcinário %d)\n ID: %d\n nome: %s idade: %d\n salario: %.2f\n\n", i+1, f[i].ID, f[i].nome, f[i].idade, f[i].salario);
    }
}
