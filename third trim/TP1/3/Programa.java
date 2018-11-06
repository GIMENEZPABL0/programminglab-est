package ex3;
import java.util.Scanner;
/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio N°3
    06/11/2018
*/

public class Programa {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      Zoológico zoo = new Zoológico ();
      zoo.abrir();
      System.out.println("¿Cuánto alimento entregarle al cuidador?");
      zoo.alimentarAnimales(sc.nextInt());
      zoo.cerrar();
    }
    
}
