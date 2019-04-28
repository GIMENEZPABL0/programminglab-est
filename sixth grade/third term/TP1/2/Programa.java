package ex2;
import java.util.Scanner;
import ex2.Persona;
import ex2.Vehiculo;

/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio N°2
    06/11/2018
*/

public class Programa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("VEHÍCULO");
        Vehiculo auto = new Vehiculo();
        System.out.println("Ingrese el alto del vehículo: ");
        auto.setAlto(sc.nextInt());
        System.out.println("Ingrese el ancho del vehículo: ");
        auto.setAncho(sc.nextInt());
        System.out.println("Ingrese el largo del vehículo: ");
        auto.setLargo(sc.nextInt());
        
        System.out.println("PERSONA");
        Persona yo = new Persona ();
        System.out.println("Ingrese el nombre de la pesona: ");
        yo.setNombre(sc.nextLine());
        System.out.println("Ingrese el apellido de la persona: ");
        yo.setApellido(sc.nextLine());
        System.out.println("Ingrese el número de documento de la persona: ");
        yo.setNumeroDocumento(sc.nextLine());
        
        System.out.println(yo.getNombre());
         System.out.println(yo.getApellido());
          System.out.println(yo.getNumeroDocumento());
    }
    
}
