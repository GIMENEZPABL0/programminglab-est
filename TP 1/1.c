/*
    Gimenez Pablo 6°T
    T.P. N°1 - Ejercicio N°1
    08/05/2018
*/
#include <stdio.h>
#include <stdlib.h>

    // PROTOTIPOS //

void ingresarNotas(int v[],int i);
void promedio(int v[],int i);
void ordenAscendente(int v[],int i,int j);
void ordenDescendente(int v[],int i,int j);
void mostrarVector(int v[],int i);
void editarNota(int v[]);

int main(void){
        // VARIABLES //

    int alumnos[20];
    int i,j;
    char opcion;

        // PROGRAMA //

    ingresarNotas(alumnos,i);

            // MENÚ //

    do{
        do{
            printf("--------------------------------------MEN%c-------------------------------------\n\n1. PROMEDIO DE LAS NOTAS.\n2. ORDEN DESCENDENTE.\n3. ORDEN ASCENDENTE.\n4. VOLVER A CARGAR LAS NOTAS.\n5. EDITAR UNA NOTA.\n0. FINALIZAR.\n\n-------------------------------------------------------------------------------\n\n",233 );
            fflush(stdin);
            scanf(" %c",&opcion);
        }   while ((opcion - '0') < 0 || (opcion - '0') >5);
        switch(opcion){
            case '1':
                promedio(alumnos,i);
                break;
            case '2':
                ordenDescendente(alumnos,i,j);
                mostrarVector(alumnos,i);
                break;
            case '3':
                ordenAscendente(alumnos,i,j);
                mostrarVector(alumnos,i);
                break;
            case '4':
                ingresarNotas(alumnos,i);
                break;
            case '5':
                editarNota(alumnos);
                break;
            }
    }   while((opcion - '0') != 0);
    return 0;
}

void ingresarNotas(int v[],int i){
    for (i=0;i<20;i++){
        printf("Ingresar la nota del alumno N%c%d: ",248,i+1 );
        fflush(stdin);
        scanf(" %d",&v[i]);
    }
    system("cls");
    return;
}

void mostrarVector(int v[],int i){
    system("cls");
    for(i=0;i<20;i++){
        printf("%d\n",v[i]);
    }
    return;
}


void promedio(int v[],int i){
    system("cls");
    float subtotal = 0;
    for(int i=0;i<20;i++){
        subtotal += v[i];
    }
    printf("EL PROMEDIO DE LAS NOTAS ES DE %f\n",subtotal/20);
    return;
}

void ordenDescendente(int v[],int i,int j){
    system("cls");
    int aux;
    for(i=0;i<19;i++){
        for(j=i+1;j<20;j++){
            if(v[i]<v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    return;
}

void ordenAscendente(int v[],int i,int j){
    system("cls");
    int aux;
    for(i=0;i<19;i++){
        for(j=i+1;j<20;j++){
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    return;
}

void editarNota(int v[]){
    int nota;
    while(nota>20 || nota<1){
        printf("\nINGRESE LA POSICI%cN DE LA NOTA QUE DESEA CAMBIAR (1-20)\n",224);
        fflush(stdin);
        scanf(" %d",&nota);
    }
    printf("INGRESE LA NOTA QUE DESEA INGRESAR (NOTA ANTERIOR: %d)\n",v[nota-1]);
    fflush(stdin);
    scanf(" %d",&v[nota-1]);
    system("cls");
    return;
}
