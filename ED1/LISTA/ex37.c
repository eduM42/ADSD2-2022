#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float k, m;
    printf("Insira a velocidade em m/s: ");
    scanf("%f", &m);

    k = m*3.6;

    printf("\n%.2fm/s e igual a %.2fkm/h\n\n", m, k);
}