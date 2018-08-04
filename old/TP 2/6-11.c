/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°11
    26/06/2018
*/
#include <stdio.h>
#include <math.h>
int main (){
    FILE *file;
    file = fopen("funciones.csv","w");
    if (file == NULL){
        printf("\nError de apertura del archivo. \n\n");
    }
    float s,c,t;
    fprintf(file,"x;sen(x);cos(x);tf(x)\n");
    for(int i=0;i<360;i++){
        s = sin(i);
        c = cos(i);
        t = tan(i);
        fprintf(file,"%d;%f;%f;%f\n",i,s,c,t);
    }
    fclose(file);
	return 0;
}
