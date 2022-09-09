#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int dias;
    printf("Insira o numero de dias trabalhados: ");
    scanf("%d", &dias);

    float pagamento = (30*dias)-(30*dias)*0.08;

    printf("\nO valor que deve ser pago, decontando IR, é de R$%.2f\n\n", pagamento);
}