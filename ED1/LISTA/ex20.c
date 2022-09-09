#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valtotal = 1999.99;
    float valdesconto = valtotal - valtotal*0.1;
    float parcela = valtotal/3;
    float vcomissao = valtotal*0.05;
    float pcomissao = valdesconto*0.05;

    printf("\nValor total: R$%.2f", valtotal);
    printf("\nValor total com desconto de 10\%: R$%.2f", valdesconto);
    printf("\nValor das parcelas em 3x: R$%.2f", parcela);
    printf("\nValor da comissao com pagamento a vista: R$%.2f", vcomissao);
    printf("\nValor da comissao com pagamento parcelado: R$%.2f\n\n", pcomissao);

}