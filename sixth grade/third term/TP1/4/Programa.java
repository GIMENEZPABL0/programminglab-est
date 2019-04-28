package ex4;
import java.util.Random;
import java.util.Scanner;
/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio N°1
    06/11/2018
*/

public class Programa {
       public static int ganadas = 0;
       public static  int perdidas = 0;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b;
        char c,x;
        Random random = new Random ();
        do{
            do{
                a = random.nextInt(11);
                b = random.nextInt(11);
            } while (a==b);
            System.out.println("¿Apuestas por A o por B? : ");
            c = sc.nextLine().charAt(0);
            calcularResultado(a,b,c);
            System.out.println("Llevas "+ ganadas + " partidas ganadas y " + perdidas + " partidas perdidas");
            System.out.println("¿Deseas seguir jugando (S/N)? : ");
            x = sc.nextLine().charAt(0);
             } while ((x == 's' ) || (x == 'S'));
        }
    public static void calcularResultado(int a,int b,char x){
        System.out.print("A saca un " + a + " y B saca un " + b);
        if((x == 'a') || (x == 'A') && a>b){
            ganadas ++;
            System.out.println("      HAS GANADO!!!");
        }
        else{
            perdidas++;
            System.out.println("      HAS PERDIDO!!!");
        }
    }
}
