#include <stdio.h>
#include <stdlib.h>

int main(){
    float real = 289.33;
    float cotacao = 5.16;

    printf("\nR$%.2f em dolar = $%.2f\n\n", real, (real/cotacao));

}