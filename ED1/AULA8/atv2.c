#include <stdio.h>
#include <stdlib.h>

int main(){
    int ini = 0, opt = 0;
    printf("insira o valor inicial para a contagem: ");
    scanf("%d", &ini);
    printf("Métodos de cálculo\n(1) - Recursiva\n(2) - Iterativa\n\nSelecione a opção: ");
    scanf("%d", &opt);
    
    if(opt == 1){
        printf("\nSoma regressiva:\n");
        printf("%d\n", func_rec(ini));
    }else if(opt == 2){
        printf("\nSoma regressiva:\n");
        printf("%d\n", func_it(ini));
    }

}


int func_rec(int n){ // Faz a soma todos os números inteiros abaixo do número inicial
    if(n == 0){
        return 0;
    }
    return (n + func_rec(n-1));
}

int func_it(int n){
    for(int i = (n-1); i > 0; i--){
        n += i;
    }
    return n;
}