#include <stdio.h>
#include <stdlib.h>


int main(){
    // Uso malloc
    int *maloc; // Declara ponteiro que se tornará o vetor

    maloc = (int*) malloc(50 * sizeof(int)); // Aloca 50 posições no vetor para números inteiros (int)

    // Exibe tudo que está contido no vetor criado
    for(int i = 0; i < 50; i++){
        printf("\n\nPosição %d: %d\n\n", i, maloc[i]);
    }

    //==================================================================================================//

    int *caloc; // Declara ponteiro que se tornará o vetor

    caloc = (int*) calloc(50, sizeof(int)); // Aloca 50 posições no vetor para números inteiros (int)

    // Exibe tudo que está contido no vetor criado
    for(int i = 0; i < 50; i++){
        printf("\n\nPosição %d: %d\n\n", i, caloc[i]);
    }
}