package ex1;

/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio N°1
    06/11/2018
*/

public class Main {
    public static void main(String[] args) {
        int vecNumeros [] = {11, -22, 33, -44, 55, -66, 77, -88, 99};
        int vecPositivos [] = new int[10];
        int vecNegativos [] = new int[10];
        int totalPositivos= 0;
        int totalNegativos= 0;
        int pCont= 0;
        int nCont= 0;
        for (int i = 0; i < vecNumeros.length; i++) {
            if (vecNumeros[i] > 0) {
                vecPositivos[pCont] = vecNumeros[i];
                pCont++;
                totalPositivos += vecNumeros[i];
            } 
            else if (vecNumeros[i] < 0){
                vecNegativos[nCont] = vecNumeros[i];
                nCont++;
                totalNegativos+= vecNumeros[i];
            }
        }
        System.out.println("Contenido de vecNumeros: ");
          for (int i = 0; i <vecNumeros.length; i++) {
                System.out.println(vecNumeros[i]);
           }
        System.out.println("Contenido de vecPositivos: ");
         for (int i = 0; i < pCont; i++) {
                System.out.println(vecPositivos[i]);
           }
        System.out.println("Contenido de vecNegativos: ");
         for (int i = 0; i < nCont; i++) {
                System.out.println(vecNegativos[i]);
           }
        System.out.println("Valor de totalPositivos: "+totalPositivos);
        System.out.println("Valor de totalNegativos: "+totalNegativos);
        System.out.println("Suma entre totalPositivos y totalNegativos: "+(totalPositivos+totalNegativos));
        System.out.println("Valores pasados como argumentos del programa principal: ");
         for (int i = 0; i < args.length; i++) {
                System.out.println(args[i]);
            }
       }
}

