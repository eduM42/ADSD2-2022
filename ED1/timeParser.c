#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hr{
    int dias;
    int horas;
    int minutos;
    int segundos;
}TEMPO;

typedef struct hrchar{
    char dias[3];
    char horas[2];
    char minutos[2];
    char segundos[2];
}TEMPOCHAR;


int main(){
    TEMPO hrInicial;
    TEMPOCHAR hold;
    char entrada[30];
    int formato = 0;
    int type = 0;
    

    printf("Selecione o formato em que o horário será inserido:\n\n");
    printf("1- Segundos;\n");
    printf("2- Minutos : Segundos;\n");
    printf("3- Horas : Minutos : Segundos;\n");
    printf("4- Dias : Horas : Minutos : Segundos;\n");
    printf("Digite o número correspondente ao formato: ");
    scanf("%d", &formato);

    if(formato == 1){
        printf("Insira o valor em segundos -> ");
        scanf("%d", &hrInicial.segundos);
    }
    
    else if(formato == 2){
        printf("Insira o valor em minutos : segundos -> ");
        scanf("%s", entrada);
        for(int i = 0; i <= strlen(entrada); i++){
            char n[5];
            n[0] = entrada[i];
            if(strcmp(&n[0], ":") == 0){
                type++;
            }else{
                if(type == 0){
                    hold.minutos[i] = n[0];
                }
                if(type == 1){
                    hold.segundos[i-2] = n[0];
                }
            }
        }
    }
    
    else if(formato == 3){
        
    }
    
    else if(formato == 4){
        
    }
    
    else{
        printf("\n\nOpção inválida...\n\n");
        return 0;
    }

    hrInicial.minutos = atoi(hold.minutos);
    hrInicial.segundos = atoi(hold.segundos);

    printf("\n\nTESTE -> %d:%d\n\n", hrInicial.minutos, hrInicial.segundos);
}