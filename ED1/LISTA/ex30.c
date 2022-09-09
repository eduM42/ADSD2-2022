#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float amg1, amg2, amg3, premio;

    printf("\nValor do premio: R$");
    scanf("%f", &premio);
    printf("\nInsira o valor gasto pelo primeiro amigo: ");
    scanf("%f", &amg1);
    printf("\nInsira o valor gasto pelo segundo amigo: ");
    scanf("%f", &amg2);
    printf("\nInsira o valor gasto pelo terceiro amigo: ");
    scanf("%f", &amg3);

    float valtotal = amg1+amg2+amg3;

    float prct1 = (amg1)/valtotal;
    float prct2 = (amg2)/valtotal;
    float prct3 = (amg3)/valtotal;

    printf("\n\nO primeiro amigo ira receber R$%.2f", premio*prct1);
    printf("\nO segundo amigo ira receber R$%.2f", premio*prct2);
    printf("\nO terceiro amigo ira receber R$%.2f\n\n", premio*prct3);
}