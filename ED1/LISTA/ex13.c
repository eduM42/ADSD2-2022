#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int alt = 12, raio = 3;
    float volume = 3.14159265*(raio*raio)*alt;

    printf("\nO volume do cilindro de raio %dm e altura %dm é = %.2fm2\n\n", raio, alt, volume);
}