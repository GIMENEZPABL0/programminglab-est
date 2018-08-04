/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°1
    26/06/2018
*/

#include <stdio.h>

int main (){
    FILE * file;
    file = fopen("uno.txt","w");
    char character;
	int lines_q = 0;
	int numbers_q = 0;
	if(file == NULL){
		printf("Error de apertura del archivo. \n\n");
	}

    else{
	    printf("Ingrese frases por el teclado:\n");
	    while((character = getchar()) != '$'){
            while(character != '\n'){
                fputc(character,file);
                if((character>=47)&&(character<=58)){
                    numbers_q++;
                }
                character = getchar();
            }
            fputc('\n',file);
            lines_q++;
	    }
    }
    system("cls");
	printf("Cantidad de lineas ingresadas: %d\n",lines_q);
	printf("Cantidad de n%cmeros ingresados: %d\n",163,numbers_q);
    fclose(file);
	return 0;
}
