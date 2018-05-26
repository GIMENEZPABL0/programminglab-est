/*
    Gimenez Pablo 6°T
    T.P. N°1 - Ejercicio N°3
    08/05/2018
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 41
#define n_phone 14

    // VARIABLES GLOBABLES //

typedef struct alumno{
    char nombre[length];
    char edad[3];
    char email[length];
    char telefono[n_phone];
}a;
    int cantidad_alumnos = -1;
    int i = 0;
    int j = 0;


    // PROTOTIPOS //

void ingresarAlumno(a *alumnos);
void editarAlumno(a *alumnos);
void eliminarAlumno(a *alumnos);
void listarAlumnos(a *alumnos);
void listarAlumnosOrdenados(a *alumnos);
void eliminarListado(a *alumnos);

    // ---------- //

int main(void){

        // VARIABLES LOCALES //

    char opcion;
    a *alumnos;
    alumnos = calloc(1,sizeof(a));

        // MENÚ //

    do{
        do{
            printf("--------------------------------------MEN%c--------------------------------------\nA. INGRESAR DATOS DEL ALUMNO.\nB. EDITAR ALUMNO.\nC. ELIMINAR ALUMNO.\nD. LISTAR ALUMNOS.(PAGINADO)\nE. LISTAR ALUMNOS. (ORDENADO ALFAB%cTICAMENTE)\nF. ELIMINAR EL LISTADO. \nZ. FINALIZAR.\n\n--------------------------------------------------------------------------------\n\n",233,144);
            fflush(stdin);
            scanf(" %c",&opcion);
        }   while( (opcion < 'a' || opcion > 'f') && (opcion < 'A' || opcion > 'F') && (opcion != 'z' && opcion!= 'Z'));
        switch(opcion){
            case 'a':
            case 'A':
                ingresarAlumno(alumnos);
                break;
            case 'b':
            case 'B':
                editarAlumno(alumnos);
                break;
            case 'c':
            case 'C':
                eliminarAlumno(alumnos);
                break;
            case 'd':
            case 'D':
                listarAlumnos(alumnos);
                break;
            case 'e':
            case 'E':
                listarAlumnosOrdenados(alumnos);
                break;
            case 'f':
            case 'F':
                eliminarListado(alumnos);
                break;
        }
    }   while(opcion != 'z' && opcion != 'Z');
    return 0;
}

void ingresarAlumno(a *alumnos){
    system("cls");
    cantidad_alumnos++;
    alumnos = realloc(alumnos,(cantidad_alumnos+1)*sizeof(a));
    printf("INGRESE EL NOMBRE COMPLETO DEL ALUMNO: ");
    fflush(stdin);
    fgets(alumnos[cantidad_alumnos].nombre,length,stdin);
    strtok(alumnos[cantidad_alumnos].nombre,"\n");
    printf("INGRESE LA EDAD DEL ALUMNO: ");
    fflush(stdin);
    fgets(alumnos[cantidad_alumnos].edad,3,stdin);
    strtok(alumnos[cantidad_alumnos].edad,"\n");
    printf("INGRESE LA DIRECCI%cN DE E-MAIL DEL ALUMNO: ",224);
    fflush(stdin);
    fgets(alumnos[cantidad_alumnos].email,length,stdin);
    strtok(alumnos[cantidad_alumnos].email,"\n");
    printf("INGRESE EL N%cMERO DE TEL%cFONO DEL ALUMNO: ",233,144);
    fflush(stdin);
    fgets(alumnos[cantidad_alumnos].telefono,n_phone,stdin);
    strtok(alumnos[cantidad_alumnos].telefono,"\n");
    system("cls");
    return;
}

void editarAlumno(a *alumnos){
    char aux [length];
    char aux2;
    system("cls");
    printf("INGRESE EL NOMBRE DEL ALUMNO AL QUE DESEA EDITAR: ");
    fflush(stdin);
    fgets (aux,length,stdin);
    strtok(aux,"\n");
    for(i=0;i<cantidad_alumnos+1;i++){
        if(strcmp(aux,alumnos[i].nombre) == 0){
            system("cls");
            printf("------------------------INGRESE EL DATO QUE DESEA EDITAR------------------------\nA.NOMBRE.\nB.EDAD.\nC.E-MAIL.\nD.TEL%cFONO.\nE.EDITAR TODOS LOS DATOS.\nZ.VOLVER AL MEN%c\n\n--------------------------------------------------------------------------------\n",224,233);
            fflush(stdin);
            scanf(" %c",&aux2);
            switch(aux2){
                case 'a':
                case 'A':
                    printf("INGRESE EL NOMBRE COMPLETO DEL ALUMNO. ANTERIOR:");
                    puts(alumnos[i].nombre);
                    fflush(stdin);
                    gets(alumnos[i].nombre);
                    break;
                case 'b':
                case 'B':
                    printf("INGRESE LA EDAD DEL ALUMNO. ANTERIOR:");
                    puts(alumnos[i].edad);
                    fflush(stdin);
                    gets(alumnos[i].edad);
                    break;
                case 'c':
                case 'C':
                    printf("INGRESE EL E-MAIL DEL ALUMNO. ANTERIOR:");
                    puts(alumnos[i].email);
                    fflush(stdin);
                    gets(alumnos[i].email);
                    break;
                case 'd':
                case 'D':
                    printf("INGRESE EL N%cMERO DE TEL%cFONO DEL ALUMNO. ANTERIOR:",233,144);
                    puts(alumnos[i].telefono);
                    fflush(stdin);
                    gets(alumnos[i].telefono);
                    break;
                case 'e':
                case 'E':
                    printf("INGRESE EL NOMBRE COMPLETO DEL ALUMNO. ANTERIOR:");
                    puts(alumnos[i].nombre);
                    fflush(stdin);
                    gets(alumnos[i].nombre);
                    printf("INGRESE LA EDAD DEL ALUMNO. ANTERIOR:");
                    puts(alumnos[i].edad);
                    fflush(stdin);
                    gets(alumnos[i].edad);
                    printf("INGRESE LA DIRECCI%cN DE E-MAIL DEL ALUMNO. ANTERIOR:",224);
                    puts(alumnos[i].email);
                    fflush(stdin);
                    gets(alumnos[i].email);
                    printf("INGRESE EL N%cMERO DE TEL%cFONO DEL ALUMNO. ANTERIOR:",233,144);
                    puts(alumnos[i].telefono);
                    fflush(stdin);
                    gets(alumnos[i].telefono);
            }
            system("cls");
            printf("EL ALUMNO HA SIDO EDITADO CON EXITO.\n");
            break;
            }
        else{
            if(i==cantidad_alumnos){
                system("cls");
                printf("ERROR: EL NOMBRE INGRESADO NO COINCIDE CON NINGUN ALUMNO ANTERIORMENTE LISTADO.\n");
                }
            }
        }
    return;
}

void eliminarAlumno(a *alumnos){
    char aux[length];
    system("cls");
    printf("INGRESE EL NOMBRE DEL ALUMNO QUE DESEA ELIMINAR: ");
    fflush(stdin);
    fgets(aux,length,stdin);
    strtok(aux,"\n");
    for(i=0;i<cantidad_alumnos+1;i++){
        if(strcmp(aux,alumnos[i].nombre) == 0){
            for(j=i;j<cantidad_alumnos+1;j++){
                alumnos[j] = alumnos[j+1];
            }
                free(&alumnos[cantidad_alumnos]);
                cantidad_alumnos--;
                break;
            printf("EL ALUMNO HA SIDO ELIMINADO CON EXITO.\n");
        }
    }
    return;
}

void listarAlumnos(a *alumnos){
    system("cls");
    printf("--------------------------------LISTA DE ALUMNOS--------------------------------");
    for(i=0;i<cantidad_alumnos+1;i++){
        printf("-----------------------------------ALUMNO N%c%d-----------------------------------",248,i+1);
        printf("NOMBRE: ");
        puts(alumnos[i].nombre);
        printf("EDAD: ");
        puts(alumnos[i].edad);
        printf("E-MAIL: ");
        puts(alumnos[i].email);
        printf("TEL%cFONO: ",224);
        puts(alumnos[i].telefono);
            }
    return;
}

void listarAlumnosOrdenados(a *alumnos){
    a aux;
    a alumnos_ordenados[cantidad_alumnos+1];
    for(i=0;i<cantidad_alumnos+1;i++){
        memcpy(&alumnos_ordenados[i],&alumnos[i],sizeof(a));
    }
    for(i=0;i<cantidad_alumnos;i++){
            for(j=i+1;j<cantidad_alumnos+1;j++){
                if(strcmp(alumnos_ordenados[i].nombre,alumnos_ordenados[j].nombre)>0){
                        memcpy(&aux,&alumnos_ordenados[i],sizeof(a));
                        memcpy(&alumnos_ordenados[i],&alumnos_ordenados[j],sizeof(a));
                        memcpy(&alumnos_ordenados[j],&aux,sizeof(a));
                }
            }
    }
    listarAlumnos(alumnos_ordenados);
    return;
}

void eliminarListado(a *alumnos){
    for(i=0;i<cantidad_alumnos+1;i++){
        free(&alumnos[i]);
    }
    cantidad_alumnos = -1;
    alumnos = realloc(alumnos,0);
    system("cls");
    return;
}
*/
