#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int premio = 780000;

    float primeiro = premio * 0.46;
    float segundo = premio * 0.32;
    float terceiro = premio - (primeiro+segundo);

    printf("\nOs ganhadores ficaram com prêmios de:\nPrimeiro lugar R$%.2f\nSegundo lugar R$%.2f\nTerceiro lugar R$%.2f\n\n",
    primeiro, segundo, terceiro);
}