#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float mq, hc;
    printf("Insira o valor em m2: ");
    scanf("%f", &mq);

    hc = mq*0.0001;

    printf("\n%.2f m2 e igual a %.2f hectares\n\n", mq, hc);
}