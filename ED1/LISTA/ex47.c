#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float kg, lb;
    printf("Insira o valor em Lb: ");
    scanf("%f", &lb);

    kg = lb*0.45;

    printf("\n%.2fLb e igual a %.2fKg\n\n", lb, kg);
}