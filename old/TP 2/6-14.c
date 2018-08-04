/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°14
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
	if((file_src == NULL)|| (file_dst == NULL)) {
		printf("Error de apertura del archivo. \n\n");
	}
	else{
        while(fgets(line,length-1,file_src)){
            switch(line[0]){
            case '#':
            case '*':
            case ';':
                fputs(line,file_dst);
            }
        }
	}
}
