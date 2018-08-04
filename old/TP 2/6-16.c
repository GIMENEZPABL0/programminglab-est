/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°16
    26/06/2018
*/
#include <stdio.h>
#include <string.h>
#define length 50
int main (){
    char name[length];
    int y,m,d,h,min,s;
    float t;
    FILE* file;
    printf("Escriba el nombre del archivo: ");
    gets(name);
    strcat(name,".csv");
    file = fopen(name,"a");
    if(file == NULL){
		printf("Error de apertura del archivo. \n\n");
	}
	else{
        for(int i=0;i<60;i++){
            printf("Ingrese la temperatura: ");
            scanf(" %f",&t);
            printf("\nIngrese el a%co: ",1646);
            scanf(" %d",&y);
            printf("\nIngrese el mes: ");
            scanf(" %d",&m);
            printf("\nIngrese el d%ca: ",161);
            scanf(" %d",&d);
            printf("\nIngrese la hora: ");
            scanf(" %d",&h);
            printf("\nIngrese los minutos: ");
            scanf(" %d",&min);
            printf("\nIngrese los segundos: ");
            scanf(" %d",&s);
            fprintf(file,"%.2f C;%04d-%04d-%04d;%02d:%02d:%02d;\n",t,y,m,d,h,min,s);
            system("cls");
        }
	}
	fclose(file);
	return 0;
}
