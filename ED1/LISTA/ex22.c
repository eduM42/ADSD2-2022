#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    letra = toupper(letra);
    printf("\nLetra inserida em maiusculo: %c\n\n", letra);
}