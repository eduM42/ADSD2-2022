#include <stdio.h>
#include <stdlib.h>

int main(){
    float pi = 3.1514926535;
    float raio = 7.13;
    float raioquad = raio * raio;
    float areacirc = pi * raioquad;

    printf("\nA area do circulo de raio %.2fm é = %.2fm2\n\n", raio, areacirc);

}