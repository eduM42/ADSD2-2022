#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float cub, l;
    printf("Insira o valor em litros: ");
    scanf("%f", &l);

    cub = l/1000;

    printf("\n%.2fL e igual a %.2fm3\n\n", l, cub);
}