#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float gc, gk;
    printf("Insira a temperatura em Kelvin: ");
    scanf("%f", &gk);

    gc = gk-273.15;

    printf("\n%.2fK e igual a %.2fC\n\n", gk, gc);
}