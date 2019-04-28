/*
    Gimenez Pablo 6°T
    Guía N°1 - Ejercicio N°3
    08/05/2018
*/

#include <stdio.h>
int main(){
	int secs = 0; int mins = 0; int hours = 0;int days = 0;
	printf("Ingrese la cantidad de segundos a convertir\n");
	scanf(" %d",&secs);
	if(secs<0){
		printf("ERROR.");
	}
	else{
		if(secs>59){
			mins = secs / 60;
			secs = secs % 60;
			if(mins>59){
				hours = mins / 60;
				mins = mins % 60;
				if(hours>23){
					days = hours / 24;
					hours = hours % 24;
				}

			}
		}
		printf("segundos: %d\n",secs);
		printf("minutos: %d\n",mins);
		printf("horas: %d\n",hours);
		printf("dias: %d\n",days);
	}
	return 0;
}