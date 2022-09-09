#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float gc, gf;
    printf("Insira a temperatura em graus fahrenheit: ");
    scanf("%f", &gf);

    gc = (gf-32)*5/9;

    printf("\n%.2fF e igual a %.2fC\n\n", gf, gc);
}