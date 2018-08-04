/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°10
    26/06/2018
*/
#include <stdio.h>

int main (){
    FILE *file;
    char character;
    int quantity[10] = {0};
    file = fopen("datos.csv","r");
    if (file == NULL){
        printf("\nError de apertura del archivo. \n\n");
    }
    else{
        while((character = fgetc(file)) != EOF){
                switch(character){
                case '0':
                    quantity[0]++;
                    break;
                case '1':
                    quantity[1]++;
                    break;
                case '2':
                    quantity[2]++;
                    break;
                case '3':
                    quantity[3]++;
                    break;
                case '4':
                    quantity[4]++;
                    break;
                case '5':
                    quantity[5]++;
                    break;
                case '6':
                    quantity[6]++;
                    break;
                case '7':
                    quantity[7]++;
                    break;
                case '8':
                    quantity[8]++;
                    break;
                case '9':
                    quantity[9]++;
                    break;
                }
        }
    }
    printf("Valor              Cantidad\n\n");
    for(int i=0;i<10;i++){
        printf("  %d                     %d\n",i,quantity[i]);
    }
	return 0;
}
