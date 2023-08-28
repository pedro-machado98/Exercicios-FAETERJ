package ObjUnico;

class Teste {

	   public static void main(String[] args) {

		  
	      Unico u = Unico.pegaInstancia();
	      
	      Unico v = Unico.pegaInstancia();

	      Unico x = Unico.pegaInstancia();

	      System.out.println((u == v) && (x == v)); // Deve retornar true

	   }

	}
