#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float cub, l;
    printf("Insira o valor em m3: ");
    scanf("%f", &cub);

    l = cub*1000;

    printf("\n%.2fm3 e igual a %.2fL\n\n", cub, l);
}