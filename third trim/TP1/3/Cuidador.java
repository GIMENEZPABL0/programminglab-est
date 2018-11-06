package ex3;
/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio 3
    06/11/2018
*/
public class Cuidador extends Persona {
    private int cantidadDeRaciones;
    public void alimentarAnimales(){
        if(cantidadDeRaciones >= 5 * 25){
            System.out.println("El alimento fue suficiente para alimentar a todos los animales :)");
        }
        else{System.out.println("El alimento fue insuficiente para alimentar a todos los animales :(");}
    }
    public int getCantidadDeRaciones() {
        return cantidadDeRaciones;
    }
    public void setCantidadDeRaciones(int cantidadDeRaciones) {
        this.cantidadDeRaciones = cantidadDeRaciones;
    }
}
