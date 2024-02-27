public class Estudiante extends Persona{

    public Estudiante(String nombre, int edad, String telefono, String correo, String nacimiento) {
        super(nombre, edad, telefono, correo, nacimiento);
    }
    
    @Override
    void caminar(){
        System.out.println("Soy un estudiante y me gusta caminar");
    }

    void aprender(){
        System.out.println("Soy un estudiante que quiere aprender");
    }
}
