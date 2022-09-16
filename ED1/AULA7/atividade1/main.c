#include <stdio.h>
#include <locale.h>
#include "minhaLib.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    int hr = 0;
    int filhos = 0;
    float sal = 0;
    float s_filhos = 0;
    float IR = 0;

    float salario_bruto;
    float salario_familia;
    float vantagens;
    float INSS;
    float IRPF;
    float dedc;

    printf("Insira o número de horas trabalhadas: ");
    scanf("%d", &hr);
    printf("Insira o valor do salário por hora: ");
    scanf("%f", &sal);
    printf("Insira o número filhos que trabalham: ");
    scanf("%d", &filhos);
    printf("Insira o valor do salário por filho: ");
    scanf("%f", &s_filhos);
    printf("\n\nInsira a taxa do IR (em %): ");
    scanf("%f", &IR);
    IR /= 100;

    calc_vantagens(&salario_bruto, &salario_familia, &vantagens, hr, filhos, s_filhos, sal);
    calc_deducoes(&INSS, &IRPF, &dedc, &salario_bruto, IR);

    printf("Salário bruto: %.2f\n", salario_bruto);
    printf("Salário da família: %.2f\n", salario_familia);
    printf("Soma da renda total: %.2f\n\n", vantagens);

    printf("Dedução do INSS: %.2f\n", INSS);
    printf("Dedução do IRPF: %.2f\n", IRPF);
    printf("Dedução do total (INSS + IRPF): %.2f\n\n", dedc);
}
