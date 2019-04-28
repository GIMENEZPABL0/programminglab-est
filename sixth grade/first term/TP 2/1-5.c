/*
    Gimenez Pablo 6°T
    Guía N°1 - Ejercicio N°5
    26/06/2018
*/

#include <stdio.h>
int main (){
	int r1,r2,c;
	float f,ton,toff,t;
	printf("Ingrese la resistencia 1 (en ohm): ");
	scanf(" %d",&r1);
	printf("Ingrese la resistencia 2 (en ohm): ");
	scanf(" %d",&r2);
	printf("Ingrese la capacidad el%ctrica (en nanofaradios): ",130);
	scanf(" %d",&c);
	ton = 0.693*(r1+r2)*c;
	toff = 0.693*r2*c;
	f = 1/(ton+toff);
	printf("La frecuencia del astable es de: %f\n",f);
	printf("El tiempo de carga del astable es de: %f\n",ton);
	printf("El tiempo de descarga del astable es de: %f\n",toff);

	return 0;
}