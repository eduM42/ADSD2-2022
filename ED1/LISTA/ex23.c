#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, num1, num2, num3;
    printf("Digite um numero inteiro de 3 digitos positivo: ");
    scanf("%d", &num);
    if (num > 10) {
        num1 = num%10;
        num = num/10;
        num2 = num%10;
        num = num/10;
        num3=num%10;
        num=num/10;
    }
    printf("\n%d%d%d\n\n", num1, num2, num3);
}