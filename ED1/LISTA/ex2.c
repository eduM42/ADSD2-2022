#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 0, n2 = 0, n3 = 0;
    printf("Insira o primeiro número: ");
    scanf("%d", &n1);
    printf("Insira o segundo número: ");
    scanf("%d", &n2);
    printf("Insira o terceiro número: ");
    scanf("%d", &n3);

    int soma = n1+n2+n3;

    printf("\n\nA soma dos núemros inseridos é = %d\n\n", soma);

}