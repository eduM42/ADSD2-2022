#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float gc, gk;
    printf("Insira a temperatura em graus Celcius: ");
    scanf("%f", &gc);

    gk = gc+273.15;

    printf("\n%.2fC e igual a %.2fK\n\n", gc, gk);
}