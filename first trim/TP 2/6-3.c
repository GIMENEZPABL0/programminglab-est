/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°3
    26/06/2018
*/
#include <stdio.h>
#include <string.h>
#define length 50

int main (){
    FILE * file_src; FILE * file_dst;
    file_src = fopen("uno.txt","r");
    file_dst = fopen("dos.txt","w");
    char line[length];
	int lines_readed_q = 0;
	int lines_copied_q = 0;
	int chars_q = 0;
	if((file_src == NULL)|| (file_dst == NULL)) {
		printf("Error de apertura del archivo. \n\n");
	}
	else{
        while(fgets(line,length-1,file_src)){
            lines_readed_q++;
            switch(line[0]){
            case '#':
            case '*':
            case ';':
                break;
            default:
                chars_q += strlen(line);
                lines_copied_q++;
                fputs(line,file_dst);
            }
        }
	}
	printf("Cantidad de l%cneas le%cdas: %d\n",161,161,lines_readed_q);
	printf("Cantidad de l%cneas copiadas: %d\n",161,lines_copied_q);
	printf("Cantidad de letras: %d\n",chars_q);
}
