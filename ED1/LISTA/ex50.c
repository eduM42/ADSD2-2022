#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float mq, ac;
    printf("Insira o valor em m2: ");
    scanf("%f", &mq);

    ac = mq*0.000247;

    printf("\n%.2f m2 e igual a %.2f acres\n\n", mq, ac);
}