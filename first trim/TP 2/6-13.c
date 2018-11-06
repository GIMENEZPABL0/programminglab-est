/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°13
    26/06/2018
*/
#include <stdio.h>
#include <string.h>
#define length 50
int counting(char phrase[]);
int main (){
    char line[length];
    int chars_q = 0;
    FILE *file;
    file = fopen("texto.txt","r");
    if(file==NULL){
        printf("Error de apertura del archivo. \n\n");
    }
    else{
        while(fgets(line,length-1,file)){
            chars_q = strlen(line) - 1;
            printf("%03d - %s\n",chars_q,line);
            }
        }
    fclose(file);
	return 0;
}

