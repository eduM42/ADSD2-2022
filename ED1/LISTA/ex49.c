#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float mt, jd;
    printf("Insira o valor em jardas: ");
    scanf("%f", &jd);

    mt = jd*0.91;

    printf("\n%.2f jardas e igual a %.2f metros\n\n", jd, mt);
}