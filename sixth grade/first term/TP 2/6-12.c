/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°12
    26/06/2018
*/
#include <stdio.h>
#include <string.h>

int main (){
    FILE * file;
    file = fopen("doce.txt","w");
    char character;
	if(file == NULL){
		printf("Error de apertura del archivo. \n\n");
	}

    else{
	    printf("Ingrese frases por el teclado: (* para finalizar)\n");
	    while((character = getchar()) != '*'){
	        if((character=='#') || (character=='@')){
                while(character != '\n'){
                    fputc(character,file);
                    character = getchar();
                }
                fputc('\n',file);
            }
	    }
    }
    fclose(file);
    return 0;
}
