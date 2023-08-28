package CavalinhoDoBozo;

public class CavalinhoDoBozo {

	public static void main(String[] args) {
		Cavalo branquinho = new Cavalo("branquinho");
		Cavalo pretinho = new Cavalo("pretinho");
		Cavalo malhadinho = new Cavalo("malhadinho");
		
		int preto = 0;
		int branco = 0;
		int malhado = 0;

		
		while(preto < 60 && branco < 60 && malhado < 60) {
			
			preto = (int) pretinho.correr();
			branco = (int) branquinho.correr();
			malhado = (int) malhadinho.correr();
			
            for (int i = 0; i < 25; i++) {
                System.out.println();
            }
			
		}
		
		if (preto >= 60) {
            System.out.println("PRETINHO GANHOU !!!");
        } else if (branco >= 60) {
            System.out.println("BRANQUINHO GANHOU !!!");
        } else {
            System.out.println("MALHADINHO GANHOU !!!");
        }
			
	}
}
