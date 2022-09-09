#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float tmdegrau, altura;
    printf("Insira a altura que deve ser alcançada (em m): ");
    scanf("%f", &altura);
    printf("Insira o tamanho do degrau (em m): ");
    scanf("%f", &tmdegrau);


    int nmdeg = altura/tmdegrau;

    printf("\nO numero de degraus necessarios é = %d degraus\n\n", nmdeg);
}