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
    struct funcionario func[5];
    FILE *f = fopen("funcionarios.txt", "wb");
    for(int i = 0; i < 5; i++){
        func[i].ID = i+1;
        printf("Insira os dados do funcionário %d\n", i+1);
        printf("Insira o nome do funcionário: ");
        scanf("%s", func[i].nome);
        printf("Insira a idade do funcionário: ");
        scanf("%d", &func[i].idade);
        printf("Insira o salário do funcionário: ");
        scanf("%f", &func[i].salario);
        printf("\n\n");

    }
    fwrite(func, sizeof(struct funcionario), 5, f);
    fclose(f);

    FILE *fr;
    fr = fopen("funcionarios.txt", "rb");
    struct funcionario rd;
    fseek(fr, 2*sizeof(struct funcionario), SEEK_SET);
    fread(&rd, sizeof(struct funcionario), 1, fr);
    printf("\n\nID: %d\nNome: %s\nIdade: %d\nSalario: %f\n\n", rd.ID, rd.nome, rd.idade, rd.salario);
    fclose(fr);

}