#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float mq, ac;
    printf("Insira o valor em acres: ");
    scanf("%f", &ac);

    mq = ac*4048.58;

    printf("\n%.2f acres e igual a %.2f m2\n\n", ac, mq);
}