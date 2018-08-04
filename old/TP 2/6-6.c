/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°6
    26/06/2018
*/
#include <stdio.h>
#define length 50
int main (){
    FILE *file = fopen("uno.txt","r");
    char line[length];
    int lines_q = 0;
    int chars_q = 0;
    int longest_line = 0;
    float chars_prom;
    if(file == NULL){
		printf("Error de apertura del archivo. \n\n");
	}
	else{
        while(fgets(line,length-1,file)){
            switch(line[0]){
            case '#':
            case '/':
                chars_q += strlen(line);
                if(strlen(line)>longest_line){
                    longest_line = strlen(line);
                }
                lines_q++;
                puts(line);
                break;
            }
        }
    }
    chars_prom = chars_q / lines_q;
    printf("Cantidad de l%cneas: %d\n",161,lines_q);
    printf("Cantidad de car%ccteres: %d\n",160,chars_q);
    printf("Longitud promedio: %f\n",chars_prom);
    printf("Longitud m%cxima: %d",160,longest_line);
	return 0;
}
