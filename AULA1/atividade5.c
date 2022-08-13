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
    char string1[20] = "Brasileiro";
    char string2[20] = "Brasil";
    char texto[20] = "";
    char letra = 'i';
    int x, cont1 = 0, cont2 = 0;

    printf("Insira um texto para a string 1: ");
    scanf("%s", &string1);
    printf("Insira um texto para a string 2: ");
    scanf("%s", &string2);
    printf("Insira um caractere para ser procurado em ambas as strings: ");
    scanf("%s", &letra);
    printf("Insira uma texto para ser procurado em ambas as atrings: ");
    scanf("%s", &texto);

    for(x = 0; x < strlen(string1); x++){
        if(string1[x] == letra){
            cont1++;
        }
    }

    for(x = 0; x < strlen(string2); x++){
        if(string2[x] == letra){
            cont2++;
        }
    }

    if(strstr(string1, texto)){
        printf("\n\nA string \'%s\" esta na string \"%s\"", texto, string1);
    }
    if(strstr(string2, texto)){
        printf("\n\nA string \'%s\" esta na string \"%s\"", texto, string2);
    }

    printf("\n\nA letra \"%c\" aparece %d vez(es) na string 1,", letra, cont1);
    printf(" e %d vez(es) na string 2", cont2);
    printf("\n\n\n");
}