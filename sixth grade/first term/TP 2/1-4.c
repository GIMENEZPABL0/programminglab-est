/*
    Gimenez Pablo 6°T
    Guía N°1 - Ejercicio N°2
    26/06/2018
*/

#include <stdio.h>

int main(){
	int n;
	printf("Ingrese el n%cmero\n",163);
	scanf(" %d",&n);
	printf("El n%cmero %d es ",163,n);
	if((n%2) == 0){
		printf("par y ");
	}
	else
		printf("impar y ");
	if((n%3) == 0){
		printf("es m%cltiplo de 3\n",163);
	}
	else
		printf("no es m%cltiplo de 3\n",163);
	return 0;
}
