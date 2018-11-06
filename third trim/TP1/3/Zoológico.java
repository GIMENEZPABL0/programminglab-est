package ex3;

/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio 3
    06/11/2018
*/
public class Zoológico {
    public final int cantidad_animales = 25;
    public final int raciones_por_animal = 5;
    private boolean estado;
    public void abrir(){
        estado = true;
    }
    public void cerrar(){
        estado = false;
    }
    public void alimentarAnimales(int cantidadDeRaciones){
       Cuidador alguien = new Cuidador();
       alguien.setCantidadDeRaciones(cantidadDeRaciones);
       alguien.alimentarAnimales();
    }
}
