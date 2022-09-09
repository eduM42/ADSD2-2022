#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int ihr =12, imin = 33, iseg = 55, duracao;
    printf("\nHorario de inicio -> %d:%d:%d", ihr, imin, iseg);

    printf("\nInsira o tempo de duracao (em segundos):");
    scanf("%d", &duracao);

    int horas = duracao / 3600;
    int minutos = (duracao-(horas*3600))/60;
    int segundos = duracao - (horas*3600)-(minutos*60);

    int fhr = ihr + horas;
    int fmin = imin + minutos;
    int fseg = iseg + segundos;

    printf("\n\nHorario de termino -> %d:%d:%d\n\n", fhr, fmin, fseg);
}