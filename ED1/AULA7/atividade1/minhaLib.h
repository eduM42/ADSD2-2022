#ifndef minhaLib_h
#define minhaLib_h


        void calc_vantagens(float *salario_bruto, float *salario_familia, float *vantagens, int nm_horas,
                            int nm_filhos, float vl_filhos, float salario_hora);

        void calc_deducoes(float *INSS, float *IRPF, float *dedc, float *salario_bruto, float taxaIR);

#endif
