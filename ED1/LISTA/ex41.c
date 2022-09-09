#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float ang, rad;
    printf("Insira o angulo em graus: ");
    scanf("%f", &rad);

    ang = rad*180/3,1415926535;

    printf("\n%.2f Radianos e igual a %.2f em Graus\n\n", rad, ang);
}