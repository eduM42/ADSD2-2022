#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float pol, cm;
    printf("Insira o valor em cm: ");
    scanf("%f", &cm);

    pol = cm / 2.54;

    printf("\n%.2fCM e igual a %.2fin\n\n", cm, pol);
}