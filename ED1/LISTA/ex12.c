#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int c1 = 0, c2 = 0;

    printf("Insira o valor de um dos catetos: ");
    scanf("%d", &c1);
    printf("Insira o valor do outro cateto: ");
    scanf("%d", &c2);

    float sm = (c1*c1)+(c2*c2);

    float h = sqrt(sm);

    printf("\nA hipotenusa é = %.2f\n\n", h);
    
}