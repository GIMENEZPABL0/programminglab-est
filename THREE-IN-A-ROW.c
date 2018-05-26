/*
    Gimenez Pablo 6°T
    Ejercicio N°1
    03/04/2018
*/

#include <stdio.h>
#include <stdlib.h>

char tablero[9]={'1','2','3','4','5','6','7','8','9'};
char jugadaUno='0';
int go=1,i=0;
int hola=1;
void main(){
    do{
     system("cls");
     imprimirTablero();
     if(hola==1){
        jugada();
     }else{
        jugada();
     }
     vericar();
    }while(go==1);
}
void imprimirTablero(){
    printf("%c | %c | %c \n" ,tablero[0] ,tablero[1], tablero[2]);
    printf("--+---+---\n");
    printf("%c | %c | %c \n" ,tablero[3] ,tablero[4], tablero[5]);
    printf("--+---+---\n");
    printf("%c | %c | %c \n" ,tablero[6] ,tablero[7], tablero[8]);
}
void jugada(){
 if(hola==1){
    printf("Jugador 1 \n");
    printf("Ingrese la jugada\n");
    fflush(stdin);
    scanf("%c" ,&jugadaUno);
    for(i=0; i<9;i++){
        if(tablero[i]== jugadaUno){
            tablero[i]='X';
        }
    }
    hola=2;
 }else{
    printf("Jugador 2 \n");
    printf("Ingrese la jugada\n");
    fflush(stdin);
    scanf("%c" ,&jugadaUno);
    for(i=0; i<9;i++){
        if(tablero[i]== jugadaUno){
            tablero[i]='O';
        }
    }
    hola=1;
 }
}
void vericar(){
    if(tablero[0]== tablero[1] && tablero[1]==tablero[2] || tablero[3]==tablero[4] && tablero[4]== tablero[5]){
        go=2;
        system("cls");
        printf("Gano el jugador %d\n",hola);
    }else if(tablero[6]==tablero[7]&&tablero[7]==tablero[8]){
        go=2;
        system("cls");
        printf("Gano el jugador %d\n",hola);
    }
    if(tablero[0]==tablero[3]&& tablero[3]== tablero[6]){
        go=2;
        system("cls");
        printf("Gano el jugador %d\n",hola);
    }else if(tablero[1]==tablero[4]&& tablero[4]== tablero[7]){
        go=2;
        system("cls");
        printf("Gano el jugador %d\n",hola);
    }else if(tablero[2]==tablero[5]&& tablero[5]== tablero[8]){
        go=2;
        system("cls");
        printf("Gano el jugador %d\n",hola);
    }
    if(tablero[0]== tablero[4]&& tablero[4]==tablero[8]){
        go=2;
        system("cls");
        printf("Gano el jugador %d\n",hola);
    }else if(tablero[2]== tablero[4]&& tablero[4]==tablero[6]){
        go=2;
        system("cls");
        printf("Gano el jugador %d\n",hola);
    }
}
