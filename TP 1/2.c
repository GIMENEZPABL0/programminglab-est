/*
    Gimenez Pablo 6°T
    T.P. N°1 - Ejercicio N°2
    08/05/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 41 // TAMAÑO MÁXIMO DEL STRING (40 CARÁCTERES)

// VARIABLES GLOBABLES //

int cantidad_alumnos = -1;
char** alumnos;
int i,j;

// PROTOTIPOS //

void ingresarAlumno();
void editarAlumno();
void eliminarAlumno();
void listarAlumnos(char** v,int c);
void listarAlumnosOrdenados();
void eliminarListado();

// --------- //

int main(void){
    // VARIABLES LOCALES //

    char opcion;

    // PUNTERO DINÁMICO //

    alumnos = calloc(1,sizeof(char*));

    // MENÚ //

    do{
        do{
            printf("\n--------------------------------------MEN%c--------------------------------------\nA. INGRESAR ALUMNO.\nB. EDITAR ALUMNO.\nC. ELIMINAR ALUMNO.\nD. LISTAR ALUMNOS.\nE. LISTAR ALUMNOS. (ORDENADO ALFAB%cTICAMENTE)\nF. ELIMINAR EL LISTADO. \nZ. FINALIZAR.\n\n--------------------------------------------------------------------------------\n\n",233,144);
            fflush(stdin);
            scanf(" %c",&opcion);
        }   while( (opcion < 'a' || opcion > 'f') && (opcion < 'A' || opcion > 'F') && (opcion != 'z'));
        switch(opcion){
            case 'a':
            case 'A':
                ingresarAlumno();
                break;
            case 'b':
            case 'B':
                editarAlumno();
                break;
            case 'c':
            case 'C':
                eliminarAlumno();
                break;
            case 'd':
            case 'D':
                listarAlumnos(alumnos,cantidad_alumnos);
                break;
            case 'e':
            case 'E':
                listarAlumnosOrdenados();
                break;
            case 'f':
            case 'F':
                eliminarListado();
                break;
        }
    }   while (opcion != 'z' && opcion != 'Z');
    eliminarListado();
    return 0;
}

void ingresarAlumno(){
    char **aux;
    system("cls");
    cantidad_alumnos++;
    aux = realloc(alumnos,(cantidad_alumnos+1)*sizeof(char *));
    if (aux == NULL){
        printf("ERROR DE MEMORIA");
    }
    else {
        alumnos = aux;
    }
    alumnos[cantidad_alumnos] = (char *)calloc(length,sizeof(char));
    printf("INGRESAR EL NOMBRE COMPLETO DEL ALUMNO(CANTIDAD DE ALUMNOS ACTUALMENTE: %d)\n\n",cantidad_alumnos,160,160);
    fflush(stdin);
    gets (alumnos[cantidad_alumnos]);
    system("cls");
    return;
}

void editarAlumno(){
    char aux[length];
    system("cls");
    printf("INGRESE EL NOMBRE DEL ALUMNO QUE DESEA EDITAR: ");
    fflush(stdin);
    gets (aux);
    for(i=0;i<cantidad_alumnos+1;i++){
        if(strcmp(aux,alumnos[i]) == 0){
            printf("INGRESE EL NOMBRE CON EL QUE DESEA SOBREESCRIBIRLO: ");
            fflush(stdin);
            gets(alumnos[i]);
            printf("EL ALUMNO HA SIDO EDITADO CON EXITO.\n");
            break;
        }
        else{
            if(i==cantidad_alumnos){
                printf("ERROR: EL NOMBRE INGRESADO NO COINCIDE CON NINGUN ALUMNO ANTERIORMENTE LISTADO.\n");
            }
        }
    }
    return;
}
void eliminarAlumno(){
    char aux[length];
    system("cls");
    printf("INGRESE EL NOMBRE DEL ALUMNO QUE DESEA ELIMINAR: ");
    fflush(stdin);
    gets (aux);
    for(i=0;i<cantidad_alumnos+1;i++){
        if(strcmp(aux,alumnos[i]) == 0){
            for(j=i;j<cantidad_alumnos+1;j++){
                alumnos[j] = alumnos[j+1];
            }
                free(alumnos[cantidad_alumnos]);
                cantidad_alumnos--;
                break;
            printf("EL ALUMNO HA SIDO ELIMINADO CON EXITO.\n");
        }
        if(i==cantidad_alumnos){
            printf("EL ALUMNO -%s- NO EXISTE",aux);
        }
    }
    return;
}

void listarAlumnos(char** v,int c){
    system("cls");(char *)calloc(length,sizeof(char));
    printf("--------------------------------LISTA DE ALUMNOS--------------------------------");
    for(i=0;i<c+1;i++){
        printf("ALUMNO N%c%d: ",248,i+1);
        puts(v[i]);
    }
    return;
}

void listarAlumnosOrdenados(){
    // COPIO EL VECTOR //
    char** alumnos_ordenados;
    alumnos_ordenados = (char **)calloc(cantidad_alumnos+1,sizeof(char*));
    for(i=0;i<cantidad_alumnos+1;i++){
        alumnos_ordenados[i] = (char *)calloc(length,sizeof(char));
        strcpy(alumnos_ordenados[i],alumnos[i]);
    }
    // -------------- //
    char aux[length];
    for(i=0;i<cantidad_alumnos;i++){
            for(j=i+1;j<cantidad_alumnos+1;j++){
                if(strcmp(alumnos_ordenados[i],alumnos_ordenados[j])>0){
                strcpy(aux,alumnos_ordenados[i]);
                strcpy(alumnos_ordenados[i],alumnos_ordenados[j]);
                strcpy(alumnos_ordenados[j],aux);
                }
            }
    }
    listarAlumnos(alumnos_ordenados,cantidad_alumnos);
    return;
}

void eliminarListado(){
    for(i=0;i<cantidad_alumnos+1;i++){
        free(alumnos[cantidad_alumnos]);
    }
    cantidad_alumnos = -1;
    alumnos = (char **) realloc(alumnos,0);
    system("cls");
    return;
}
