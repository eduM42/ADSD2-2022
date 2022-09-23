#include <stdio.h>
#include <stdlib.h>

int main(){
    int ini;
    printf("insira o valor inicial para a contagem regressiva: ");
    scanf("%d", &ini);
    printf("Contagem iterativa:\n");
    cont_iterativa(10);
    printf("\nContagem recursiva:\n");
    cont_recursiva(ini);
}

void cont_iterativa(int ini){
    int num = ini;
    for(int i = ini; i > 0; i--){
        printf("%d\n", num);
        num--;
    }
}

int cont_recursiva(int ini){
    if(ini == 0){
        return 0;     
    }
    printf("%d\n", ini);
    cont_recursiva(ini-1);
   
}
