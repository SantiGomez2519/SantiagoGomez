public class Docente extends Persona{

    public Docente(String nombre, int edad, String telefono, String correo, String nacimiento) {
        super(nombre, edad, telefono, correo, nacimiento);
    }

    @Override
    void divertir(){
        System.out.println("Soy un docente y me gusta divertirme");
    }

    void ensenyar(){
        System.out.println("Soy un docente y enseño");
    }
}
