#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "solution.h"

//Limpa o buffer do teclado
void clean_stdin(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

//char romanVet [7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int romanToInt(char* s){
    //Somatório do value de cada caractere romano
    int c1 = 0, c5 = 0, c10 = 0, c50 = 0, c100 = 0, c500 = 0, c1000 = 0;
    int i;

    //Checar caractere por caractere da string de forma decrescente
    for(i = 0; i<(strlen(s)); i++){
        switch(s[i])
        {
            case 'I':
                if(s[i+1] == 'V' || s[i+1] == 'X')
                    c1 -= 1;
                else
                    c1 += 1;
            break;
            case 'V':
                c5 += 5;
            break;
            case 'X':
                if(s[i+1] == 'L' || s[i+1] == 'C')
                    c10 -= 10;
                else
                    c10 += 10;
            break;
            case 'L':
                c50 += 50;
            break;
            case 'C':
                if(s[i+1] == 'D' || s[i+1] == 'M')
                    c100 -= 100;
                else
                    c100 += 100;
            break;
            case 'D':
                c500 += 500;
            break;
            case 'M':
                c1000 += 1000;
            break;
        }
    }

    return (c1+c5+c10+c50+c100+c500+c1000);
}

char * intToRoman(int num){
    












}