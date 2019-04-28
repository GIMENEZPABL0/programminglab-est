/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°17
    26/06/2018
*/
#include <stdio.h>
int main (){
    char character;
    char cont;
    int i;
    FILE* file;
    file = fopen("t.csv","r");
    if(file == NULL){
        printf("Error de apertura del archivo. \n\n");
    }
    else{
        while((character=fgetc(file)) != EOF){
            if(i<20){
                if(character==';'){
                    printf("     ");
                }
                else if(character=='\n'){
                    printf("%c",character);
                    i++;
                }
                else
                    printf("%c",character);
            }
            else{
                while((cont!='x') && (cont!='X')){
                    printf("Ingrese 'X' para continuar: ");
                    scanf(" %c",&cont);
                }
                i = 0;
            }
        }
    }
    fclose(file);
	return 0;
}
