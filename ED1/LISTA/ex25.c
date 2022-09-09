#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int segundos;

    printf("Insira uma quantidade de tempo em segundos: ");
    scanf("%d", &segundos);

    float horas = segundos/3600;
    float minutos = segundos/60;

    printf("\nHoras: %f", horas);
    printf("\nMinutos: %f", minutos);
    printf("\nSegundos: %d\n\n", segundos);

}