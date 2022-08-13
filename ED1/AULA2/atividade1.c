#include <stdio.h>
#include <locale.h>

//VARIÁVEIS
float salario_bruto;
float salario_familia;
float vantagens;
float INSS;
float IRPF;
float dedc;

//PROTÓTIPOS
void calc_vantagens(int nm_horas, int nm_filhos, float vl_filhos, float salario_horas);
void calc_deducoes(float taxaIR);


int main(){
    setlocale(LC_ALL, "Portuguese");
    int hr = 0;
    int filhos = 0;
    float sal = 0;
    float s_filhos = 0;
    float IR = 0;

    printf("Insira o número de horas trabalhadas: ");
    scanf("%d", &hr);
    printf("Insira o valor do salário por hora: ");
    scanf("%f", &sal);
    printf("Insira o número filhos que trabalham: ");
    scanf("%d", &filhos);
    printf("Insira o valor do salário por filho: ");
    scanf("%f", &s_filhos);
    printf("\n\nInsira a taxa do IR (em \%): ");
    scanf("%f", &IR);
    IR /= 100;

    calc_vantagens(hr, filhos, s_filhos, sal);
    calc_deducoes(IR);

    printf("Salário bruto: %.2f\n", salario_bruto);
    printf("Salário da família: %.2f\n", salario_familia);
    printf("Soma da renda total: %.2f\n\n", vantagens);

    printf("Dedução do INSS: %.2f\n", INSS);
    printf("Dedução do IRPF: %.2f\n", IRPF);
    printf("Dedução do total (INSS + IRPF): %.2f\n\n", dedc);
}


void calc_vantagens(int nm_horas, int nm_filhos, float vl_filhos, float salario_hora){
    salario_bruto = nm_horas * salario_hora;
    salario_familia = nm_filhos * vl_filhos;
    vantagens = salario_bruto + salario_familia;
}

void calc_deducoes(float taxaIR){
    INSS = salario_bruto * 0.08;
    IRPF = salario_bruto * taxaIR;
    dedc = INSS + IRPF;
}
