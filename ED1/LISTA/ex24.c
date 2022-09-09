#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n[4] = {1,4,3,2};

    printf("Numero: ");
    for(int i = 0; i < 4; i++){
        printf("%d", n[i]);
    }
    printf("\n\n");
    for(int i = 0; i < 4; i++){
        printf("%d\n", n[i]);
    }
    printf("\n\n");
}