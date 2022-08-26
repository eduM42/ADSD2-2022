#include <stdio.h>
#include <stdlib.h>

int main(){
    float v1[10] = {0}; // Declara um vetor de 10 posições

    for(int i = 0; i < 10; i++){ // Para as posições de 0 a 9 (10 pos.):
        printf("Endereço do vetor na posição %d: %x\n", i+1, &v1[i]); // Imprime a posição do vetor e o valor do endereço que essa posição ocupa
    }
}