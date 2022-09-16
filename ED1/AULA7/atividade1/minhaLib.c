#include <stdio.h>
#include <stdlib.h>
#include "minhaLib.h"

void calc_vantagens(float *salario_bruto, float *salario_familia, float *vantagens, int nm_horas, int nm_filhos, float vl_filhos, float salario_hora){
    *salario_bruto = nm_horas * salario_hora;
    *salario_familia = nm_filhos * vl_filhos;
    *vantagens = *salario_bruto + *salario_familia;
}

void calc_deducoes(float *INSS, float *IRPF, float *dedc, float *salario_bruto, float taxaIR){
    *INSS = *salario_bruto * 0.08;
    *IRPF = *salario_bruto * taxaIR;
    *dedc = *INSS + *IRPF;
}
