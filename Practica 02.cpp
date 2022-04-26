/*import java.util.Scanner;
import javax.swing.DefaultBoundedRangeModel;
import javax.swing.plaf.basic.DefaultMenuLayout;*/

class equipos {
    public String nombre;
    public String pais;
    public String Ciudad;
}
class estadios{
    public String Nombre;
    public String Pais;
    public int capacidad;
}
class jugadores{
    public String Nombre;
    public String Equipo;
    public int  Pais;
}

public class Main { 
    static Scanner scanner = new Scanner(System.in);
    public static void main(String args[])
	 {
        // Declaramos el input
        Scanner input = new Scanner(System.in);
        
        boolean salir = false;
        int option = 0;

        while (!salir) 
		{
        	
        	System.out.println("1. Equipos");
            System.out.println("2. Estadios");
            System.out.println("3. jugadores");
            System.out.println("4. Salir");
        	
            opcion = input.nextInt();

            try {
 
                System.out.println("Seleccione una opcion: ");
                option = sn.nextInt();

                switch (option)
				 {
                    case 1 {
                        public static void main(String[]) 
						{
                        equipos equi = new equipos (System.in);
                        a1.nombre = CapturaEntrada.capturarCadena("\nNombre del equipo: ");
                        a1.cuidad = CapturaEntrada.capturarCadena("\n Cuidad donde juegan: ");
                        a1.pais = CapturaEntrada.capturarCadena("\Pais donde juegan: ");
                        System.out.println(A1);
                        }
				        break; 
                    }
                    case 2
                        public static void Main (String[]args) 
                        {
                            estadio dio = new estadio(System.in);
                            b1.Nombre = CapturaEntrada.capturarCadena("\Nombre: ");
                            b1.Pais = CapturaEntrada.capturarCadena("\Pais: ");
                            b1.capacidad = CapturaEntrada.capturarCadena("\Capacidad: ");
                            System.out.println(b1);
                        }
                        break;

                    case 3
                        public static void Main (String[]args) 
                        {
                            jugadores jug = new jugadores(System.in);
                            c1.Nombre = CapturaEntrada.capturarCadena("\Nombre: ");
                            c1.Equipo = CapturaEntrada.capturarCadena("\Equipo: ");
                            c1.Pais = CapturaEntrada.capturarCadena("\Pais: ");
                            System.out.println(c1);
                        }
                        break;
                        
					case 4
					
				    System.out.println("FINAL");
				    break;
 
                    protected void finalize() throws Throwable 
					{
                        super.finalize();
                    }
				    default:
					System.out.println("Opcion invalida, vuelve a intentar.");
					System.out.println();
                        salir = true;
                        break;
                    default;
                        break;
                    }
                }
			}
        }
    }
