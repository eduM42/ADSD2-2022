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
    if(f == NULL){
        printf("Erro na abertura!!!\n");
        exit(1);
    }
    f = fopen("arq2.txt", "w");
    while(entrada[i] != '\0'){
        entrada[i] = toupper(entrada[i]);
        fputc(entrada[i], f);
        i++;
    }


    printf("\n\nArquivo escrito com sucesso!!\n\n");
    return 0;
}