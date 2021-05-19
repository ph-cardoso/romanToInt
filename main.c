#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "solution.c"

int main(){
    char s[15];
    //Atribuindo o INPUT manualmente
    //strcpy(s, "MMXIV");

    //Pegando o INPUT 
    printf("Insira o numero Romano: ");
    fgets(s, 15, stdin);

    printf("\n\nString inserida: %s\n\n", s);
    //printf("%c", s[strlen(s)-1]);
    printf("Numero: %i", romanToInt(s));

    clean_stdin();
    getchar();
    return 0;
}