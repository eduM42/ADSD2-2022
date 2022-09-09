#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float comprimento, largura, preco;

    printf("Insira o comprimento do terreno (em m): ");
    scanf("%f", &comprimento);
    printf("Insira a largura do terreno (em m): ");
    scanf("%f", &largura);
    printf("Insira o valor do metro do arame: ");
    scanf("%f", &preco);

    float precot = (comprimento*2 + largura*2)*preco;

    printf("\nO valor necessario para cercar o terreno e de R$%.2f\n\n", precot);
}