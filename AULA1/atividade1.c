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
    switch(num){
        case 1:
            printf("A\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("C\n");
            break;
        case 4:
            printf("C\n");
        default:
            break;
    }
    system("pause");
    return 0;
}
