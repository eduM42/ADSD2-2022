#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float gc, gf;
    printf("Insira a temperatura em graus celcius: ");
    scanf("%f", &gc);

    gf = (gc*9/5)+32;

    printf("\n%.2fC e igual a %.2fF\n\n", gc, gf);
}