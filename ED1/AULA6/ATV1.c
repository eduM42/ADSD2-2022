#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v = NULL, i, ent, cont = 1;

    v = (int*) malloc(1*sizeof(int));

    ent = 1;

    while(ent !=0){
        if(ent%2 == 0 && ent >= 0){
            cont++;
            printf("Insira um valor: ");
            scanf("%d", &ent);
            v = (int*) realloc(v, cont*sizeof(int));
            v[cont-2] = ent;
        }else{
            printf("Insira um valor: ");
            scanf("%d", &ent);
        }

    }

    printf("Vetor V -> ");
    for(i = 0; i < cont; i++){        
        printf("\n%d", v[i]);
    }
    printf("\n\n");
}