/*
    Gimenez Pablo 6°T
    Guía N°6 - Ejercicio N°4
    26/06/2018
*/
#include <stdio.h>
#include <string.h>

void toText(int number);

char number_name[30];

int main (){
    FILE * file;
    int number = 0;
    do{
        printf("Ingrese un n%cmero: ",163);
        scanf("%d",&number);
    } while(number>1000);
    toText(number);
    file = fopen(number_name,"w+");
    fprintf(file,"Tabla del número %d:\n",number);
      for(int i=0;i<11;i++){
        fprintf(file,"%d * %d = %d\n",number,i,i*number);
}
    return 0;
}

void toText(int number){
    int cents = number / 100;
    int tens = (number % 100) / 10;
    int ones = (number % 100) % 10;
    switch(cents){
    case 1:
        strcpy(number_name,"ciento");
        break;
    case 2:
        strcpy(number_name,"doscientos");
        break;
    case 3:
        strcpy(number_name,"trescientos");
        break;
    case 4:
        strcpy(number_name,"cuatrocientos");
        break;
    case 5:
        strcpy(number_name,"quinientos");
        break;
    case 6:
        strcpy(number_name,"seiscientos");
        break;
    case 7:
        strcpy(number_name,"setecientos");
        break;
    case 8:
        strcpy(number_name,"ochocientos");
        break;
    case 9:
        strcpy(number_name,"novecientos");
        break;
    default:
        strcpy(number_name,"");

    }

    switch(tens){
    case 1:
        if(ones>5)
            strcat(number_name,"diez");
        break;
    case 2:
        strcat(number_name,"veinti");
        break;
    case 3:
        strcat(number_name,"treinta ");
        break;
    case 4:
        strcat(number_name,"cuarenta ");
        break;
    case 5:
        strcat(number_name,"cincuenta ");
        break;
    case 6:
        strcat(number_name,"sesenta ");
        break;
    case 7:
        strcat(number_name,"setenta ");
        break;
    case 8:
        strcat(number_name,"ochenta ");
        break;
    case 9:
        strcat( number_name,"noventa " );
        break;
    }

    switch(ones){
    case 1:
        if(tens==1){
            strcat(number_name,"once");
        }else{
            if(tens > 2)
                strcat(number_name,"y uno");
            else
                strcat(number_name,"uno");
        }
        break;
    case 2:
        if(tens==1){
            strcat(number_name,"doce");
        }else{
            if(tens > 2)
                strcat(number_name,"y dos");
            else
                strcat(number_name,"dos");
        }
        break;
    case 3:
        if(tens == 1){
            strcat(number_name,"trece");
        }else{
            if(tens > 2)
                strcat(number_name,"y tres");
            else
                strcat(number_name,"tres");
        }
        break;
    case 4:
        if(tens==1){
            strcat(number_name,"catorce");
        }else{
            if(tens > 2)
                strcat(number_name,"y cuatro");
            else
                strcat(number_name,"cuatro");
        }
        break;
    case 5:
        if(tens==1){
            strcat(number_name,"quince");
        }else{
            if(tens > 2)
                strcat(number_name,"y cinco");
            else
                strcat(number_name,"cinco");
        }
        break;
    case 6:
            strcat(number_name,"y seis");
        break;
    case 7:
            strcat(number_name,"y siete");
        break;
    case 8:
            strcat(number_name,"y ocho");
        break;
    case 9:
            strcat(number_name,"y nueve");
        break;
    }
    strcat(number_name,".txt");
    return;
}
