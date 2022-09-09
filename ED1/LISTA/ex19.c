#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float salbase;
    printf("Insira o salario base: R$");
    scanf("%f", &salbase);

    float valpago = salbase+(salbase*0.05)-(salbase*0.07);

    printf("\nO valor a ser pago ao funcionario é R$%.2f\n\n", valpago);   
}