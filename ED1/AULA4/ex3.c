#include <stdio.h>
#include <stdlib.h>

int main(){
    float v1[10] = {0};

    for(int i = 0; i < 10; i++){
        printf("Endereço do vetor na posição %d: %x\n", i+1, &v1[i]);
    }
}