#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float pol, cm;
    printf("Insira o valor em polegadas (in): ");
    scanf("%f", &pol);

    cm = pol * 2.54;

    printf("\n%.2fin e igual a %.2fcm\n\n", pol, cm);
}