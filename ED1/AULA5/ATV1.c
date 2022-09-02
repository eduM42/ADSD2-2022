#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i = 0;
    FILE *f;

    char entrada[30];
    printf("\nInsira o texto que será inserido no arquivo: ");
    scanf("%s", entrada);
    
    i = 0;
    f = fopen("arq1.txt", "w");
    if(f == NULL){
        printf("Erro na abertura!!!\n");
        exit(1);
    }
    while(entrada[i] != '\0'){
        fputc(entrada[i], f);
        i++;
    }
    fclose(f);

    i = 0;
    f = fopen("arq2.txt", "w");
    if(f == NULL){
        printf("Erro na abertura!!!\n");
        exit(1);
    }
    while(entrada[i] != '\0'){
        entrada[i] = toupper(entrada[i]);
        fputc(entrada[i], f);
        i++;
    }
    fclose(f);

    printf("\n\nArquivo escrito com sucesso!!\n\n");

    FILE *fr;
    fr = fopen("arq1.txt", "r");
    char saida;

    printf("\nEm letras minúsculas: ");
    while(saida != EOF){
        saida = fgetc(fr);
        printf("%c", saida);
    }
    fclose(fr);


    FILE *fr2;
    fr2 = fopen("arq2.txt", "r");
    char saida2;

    printf("\n\nEm letras maiúsculas: ");
    while(saida2 != EOF){
        saida2 = fgetc(fr);
        printf("%c", saida2);
    }
    fclose(fr2);

    printf("\n\n");
    return 0;
}