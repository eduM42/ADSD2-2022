#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float k, m;
    printf("Insira a distancia em KM: ");
    scanf("%f", &k);

    m = k*1.6;

    printf("\n%.2f KM e igual a %.2f Milhas\n\n", k, m);
}