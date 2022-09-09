#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float k, m;
    printf("Insira a velocidade em km/h: ");
    scanf("%f", &k);

    m = k/3.6;

    printf("\n%.2fkm/h e igual a %.2fm/s\n\n", k, m);
}