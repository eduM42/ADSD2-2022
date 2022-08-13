/*
    ED1D2

    ALUNO: EDUARDO MIRA OZÓRIO
    PRONTUÁRIO: GU302685X
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct struct_funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO func[5];

void col_func();
void print_func();
void reajuste(float *salario);
void rel_salario_corrigido();


void main(){
    setlocale(LC_ALL, "Portuguese");
    col_func();
    system("cls");
    print_func();
    for(int i = 0; i < 5; i++){
        reajuste(&func[i].salario);
    }
    rel_salario_corrigido();
}


void col_func(){
    for(int i = 0; i < 5; i++){
        printf("\nFUNCIONÁRIO %d\n", i+1);
        printf("Insira o nome do funcionário: ");
        scanf("%s", &func[i].nome);
        printf("Insira a idade do funcionário: ");
        scanf("%d", &func[i].idade);
        printf("Insira o salário do funcionário: ");
        scanf("%f", &func[i].salario);
        func[i].ID = i+1;
    }
}

void print_func(){
    for(int i = 0; i < 5; i++){
        printf("\n\nFuncionário %d) ID: %d, nome: %s, idade: %d, salario: %.2f\n\n",
        func[i].ID ,func[i].ID, func[i].nome, func[i].idade, func[i].salario);
    }
}

void reajuste(float *salario){
    *salario = *salario + (*salario*0.1);
}

void rel_salario_corrigido(){
    for(int i = 0; i < 5; i++){
        printf("\n\nFuncionário: %s, novo salário: %.2f\n\n",
        func[i].nome, func[i].salario);
    }
}
