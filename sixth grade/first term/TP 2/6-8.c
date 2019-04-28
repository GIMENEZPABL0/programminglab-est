/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°8
    26/06/2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 50

int main (){
    FILE * file_src; FILE * file_dst;
    file_src = fopen("texto.txt","r");
    file_dst = fopen("errores.txt","w");
    char line[length];
	int lines_readed_q = 0;
	int lines_copied_q = 0;
	if((file_src == NULL)|| (file_dst == NULL)) {
		printf("Error de apertura del archivo. \n\n");
	}
	else{
        while(fgets(line,length-1,file_src)){
            lines_readed_q++;
            if(line[0] == '#'){
                lines_copied_q++;
                fputs(line,file_dst);
            }
        }
	}
	printf("Cantidad de l%cneas le%cdas: %d\n",161,161,lines_readed_q);
	printf("Cantidad de l%cneas copiadas: %d\n",161,lines_copied_q);
}
