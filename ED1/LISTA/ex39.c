#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float k, m;
    printf("Insira a distancia em Milhas: ");
    scanf("%f", &m);

    k = m/1.6;

    printf("\n%.2f Milhas e igual a %.2f KM\n\n", m, k);
}