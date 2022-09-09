#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float ang, rad;
    printf("Insira o angulo em graus: ");
    scanf("%f", &ang);

    rad = ang*3,1415926535/180;

    printf("\n%.2f Graus e igual a %.2f em Radianos\n\n", ang, rad);
}