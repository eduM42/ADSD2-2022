#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float salAtual;
    printf("Insira o valor do salário atual: R$");
    scanf("%f", &salAtual);
    
    float aumento = salAtual + salAtual*0.25;

    printf("\nO salario de R$%.2f depois do rajuste ficou no valor de = R$%.2f\n\n", salAtual, aumento);
}