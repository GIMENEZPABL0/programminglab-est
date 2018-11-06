package ex2;

/*
    Gimenez Pablo 6°T
    T.P.  - Ejercicio 2
    06/11/2018
*/

class Persona {
    public String nombre,apellido,numeroDocumento;
    
    // SETTERS & GETTERS
    
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getApellido() {
        return apellido;
    }
    public void setApellido(String apellido) {
        this.apellido = apellido;
    }
    public String getNumeroDocumento() {
        return numeroDocumento;
    }
    public void setNumeroDocumento(String numeroDocumento) {
        this.numeroDocumento = numeroDocumento;
    }
    
    public void construirPersona(String nombre, String apellido, String numeroDocumento){
        setNombre(this.nombre);
        setApellido(this.apellido);
        setNumeroDocumento(this.numeroDocumento);
    }
    
}
