#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float mq, hc;
    printf("Insira o valor em hectares: ");
    scanf("%f", &hc);

    mq = hc*10000;

    printf("\n%.2f hectares e igual a %.2f m2\n\n", hc, mq);
}