/*
    Gimenez Pablo 6°T
    Guía N°1 - Ejercicio N°1
    08/05/2018
*/

#include <stdio.h>

// PROTOTIPOS //

int sum(int n1, int n2);
int substraction(int n1, int n2);
float multiplication(int n1, int n2);
float division(int n1, int n2);

// ---------- //
int main(){
	int n1,n2;
	printf("Ingrese el primer n%cmero\n",163);
	scanf(" %d",&n1);
	printf("Ingrese el primer n%cmero\n",163);
	scanf(" %d",&n2);
	printf("%d\n",sum(n1,n2));
	printf("%d\n",substraction(n1,n2));
	printf("%f\n",multiplication(n1,n2));
	printf("%f\n",division(n1,n2));
	return 0;
}

// FUNCIONES //

int sum(int n1, int n2){
	return n1+n2;
}
int substraction(int n1, int n2){
	return n1-n2;
}
float multiplication(int n1, int n2){
	return n1*n2;
}
float division(int n1, int n2){
	return n1/n2;
}

// --------- //