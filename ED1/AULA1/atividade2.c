/*
    ED1D2
    
    ALUNO: EDUARDO MIRA OZÓRIO
    PRONTUÁRIO: GU302685X
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num = 0;
    printf("Insira algum valor inteiro: ");
    scanf("%d", &num);
    if(num == 1){
        printf("A\n");
    }else if(num == 2){
        printf("B\n");
    }else if(num == 3){
        printf("C\n");
    }else if(num == 4){
        printf("D\n");
    }
    system("pause");
    return 0;
}
