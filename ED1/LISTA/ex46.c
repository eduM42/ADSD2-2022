#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float kg, lb;
    printf("Insira o valor em Kg: ");
    scanf("%f", &kg);

    lb = kg/0.45;

    printf("\n%.2fKg e igual a %.2fLb\n\n", kg, lb);
}