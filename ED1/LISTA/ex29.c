#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x = 0;
    float y = 0;
    float R = 0;
    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);
    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);
    R=sqrt(pow(x,2)+pow(y,2)); //pow(base, expoente) pra elevar ao quadrado e sqrt() é raíz quadrada
    printf("A distancia e: %f \n", R);
    fflush(stdin);
    getchar();
}