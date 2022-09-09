#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float mt, jd;
    printf("Insira o valor em metros: ");
    scanf("%f", &mt);

    jd = mt/0.91;

    printf("\n%.2f metros e igual a %.2f jardas\n\n", mt, jd);
}