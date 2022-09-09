#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    int nascimento = 2022 - idade;

    printf("\nUma pessoa de %d anos nasceu em %d\n\n", idade, nascimento);
}