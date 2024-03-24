public class ObjetosDePersona {
    public static void main(String[] args) throws Exception {
        //Creación de objetos
        Docente docente1 = new Docente("Santiago", 18, "67352176321", "santi@gmail.com", "19/09/2005");

        Estudiante estudiante1 = new Estudiante("Simon", 20, "76514312", "Simon@outlook.com", "15/02/2001");

        Administrativo administrativo1 = new Administrativo("Sofia", 30, "65564", "Sofia@hotmail.com", "27/02/2024", "Programadora");
 
        docente1.listarObjetos(); //Puede utilizar un método de la clase persona (herencia)
        docente1.divertir();

        estudiante1.listarObjetos();
        estudiante1.aprender();

        administrativo1.listarObjetos();
        administrativo1.trabajar();
    }
}
