package ex3;

/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio 3
    06/11/2018
*/
public abstract class Persona {
    private java.lang.String nombre;
    private java.util.Date fechaDeNacimiento;
    
    public java.lang.String getNombre() {
        return nombre;
    }
    public void setNombre(java.lang.String nombre) {
        this.nombre = nombre;
    }
    public java.util.Date getFechaDeNacimiento() {
        return fechaDeNacimiento;
    }
    public void setFechaDeNacimiento(java.util.Date fechaDeNacimiento) {
        this.fechaDeNacimiento = fechaDeNacimiento;
    }
}
