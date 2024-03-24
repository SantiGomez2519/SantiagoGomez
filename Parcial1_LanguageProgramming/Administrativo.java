public class Administrativo extends Persona {

    private String cargo;

    public Administrativo(String nombre, int edad, String telefono, String correo, String nacimiento, String cargo) {
        super(nombre, edad, telefono, correo, nacimiento);
        this.cargo = cargo;
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    void trabajar(){
        System.out.println("Soy un administrativo y ejerzo mi labor como: " + cargo);
    }
}
