/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°7
    26/06/2018
*/
#include <stdio.h>
#include <string.h>
int counting(char phrase[]);
int main (){
    char phrase[300];
    int lines_q = 0;
    int length = 0;
    FILE *file;
    file = fopen("texto.txt","a");
    if(file==NULL){
        printf("Error de apertura del archivo. \n\n");
    }
    else{
        printf("Ingrese las frases: \n");
        gets(phrase);
        while(strcmp(phrase,"fin") != 0){
            lines_q++;
            length = strlen(phrase);
            fprintf(file,"%03i - %s - %03i\n",lines_q,phrase,length);
            gets(phrase);
        }
    }
    fclose(file);
	return 0;
}

