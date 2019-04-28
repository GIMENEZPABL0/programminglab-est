/*
    Gimenez Pablo 6°T
    Guía N°1 - Ejercicio N°2
    26/06/2018
*/

#include <stdio.h>

int main(){
	int v,c;
	for(int i=0;i<3;i++){
		printf("Ingrese el voltaje (en volts)\n");
		scanf(" %d",&v);
		printf("Ingrese la corriente (en ampere)\n");
		scanf(" %d",&c);
		float r = v/c;
		printf("La resistencia %d es de %f omh\n",i+1,r);
	}
	return 0;
}
