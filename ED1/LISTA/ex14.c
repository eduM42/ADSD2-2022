#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valor;
    printf("Insira o valor do produto: R$");
    scanf("%f", &valor);

    float descontado = valor - valor*0.12;

    printf("\nValor após o desconto de 12\% = R$%.2f\n\n", descontado);
}