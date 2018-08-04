/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°15
    26/06/2018
*/
#include <stdio.h>
#include <string.h>
#define length 50
int main (){
    FILE *file;
    file = fopen("texto.txt","r");
    char line[length];
    if (file == NULL){
        printf("\nError de apertura del archivo. \n\n");
    }
    else{
        while(fgets(line,length-1,file)){
            for(int i=0;i<(strlen(line));i++){
                if((line[i]=='a') || (line[i]=='e') | (line[i]=='i') || (line[i]=='o') || (line[i]=='u')){
                    puts(line);
                    break;
                }
            }
        }
    }
    fclose(file);
	return 0;
}
