//Abstracción

public class Persona {

    //Encapsulamiento
    //Atributos de la clase persona
    private String nombre;
    private int edad;
    private String telefono;
    private String correo;
    private String nacimiento;
    
    // Constructor
    public Persona(String nombre, int edad, String telefono, String correo, String nacimiento) {
        this.nombre = nombre;
        this.edad = edad;
        this.telefono = telefono;
        this.correo = correo;
        this.nacimiento = nacimiento;
    }

    //Método caminar
    void caminar() {
        System.out.println("Soy una persona y puedo caminar");
    }

    //Método divertir
    void divertir(){
        System.out.println("Soy una persona y me gusta divertirme");
    }

    //Método imprimir instancias
    void listarObjetos(){

        System.out.println("\nLos datos de la persona son: \n");
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad);
        System.out.println("Teléfono: " + telefono);
        System.out.println("Correo: " + correo);
        System.out.println("Fecha de nacimiento: " + nacimiento);
    }

    //Getters and Setters
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getEdad() {
        return edad;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    public String getTelefono() {
        return telefono;
    }

    public void setTelefono(String telefono) {
        this.telefono = telefono;
    }

    public String getCorreo() {
        return correo;
    }

    public void setCorreo(String correo) {
        this.correo = correo;
    }

    public String getNacimiento() {
        return nacimiento;
    }

    public void setNacimiento(String nacimiento) {
        this.nacimiento = nacimiento;
    }

    
}
