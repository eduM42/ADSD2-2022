/*
    ED1D2
    
    ALUNO: EDUARDO MIRA OZÓRIO
    PRONTUÁRIO: GU302685X
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string1[20] = "";
    int cont = 0;
    int x = 0, i = 0;

    printf("Insira um texto para a string: ");
    gets(string1);

    for(i = 0; string1[i]; i++){
        string1[i] = string1[i+x];
        if(string1[i] == ' ' || string1[i] == '\t'){
            cont++;
            x++;
            i--;
        }
    }

    printf("\n\nA string possuía %d espaços vazios", cont);
    printf("\nString com os espaços removidos: %s\n\n", string1);

    return 0;
}