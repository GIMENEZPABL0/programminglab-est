/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°9
    26/06/2018
*/
#include <stdio.h>
#include <string.h>
#define length 50

int main (){
    FILE * file_src_a; FILE * file_dst; FILE * file_src_b;
    file_src_a = fopen("texto.txt","r");
    file_src_b = fopen("errores.txt","r");
    file_dst = fopen("conjunto.txt","w");
    char line[length];

	if((file_src_a == NULL)|| (file_dst == NULL)) {
		printf("Error de apertura del archivo. \n\n");
	}

	else{
        while(fgets(line,length-1,file_src_a)){
                fputs(line,file_dst);
            }
        }
    if(file_src_b == NULL){
        printf("Error de apertura del archivo. \n\n");
    }
    else{
        while(fgets(line,length-1,file_src_b)){
        fputs(line,file_dst);
        }
    }
}
