package CavalinhoDoBozo;
import java.util.Random;

public class Cavalo {
	private String nome;
	private String avatar;
	private double distanciaPercorrida;
	
	public Cavalo(String nome) {
		
        if (nome.equals("pretinho") || nome.equals("branquinho") || nome.equals("malhadinho")) {
            this.nome = nome;
            if (nome.equals("pretinho")) {
                this.avatar = "P>";
            } else if (nome.equals("branquinho")) {
                this.avatar = "B>";
            } else {
                this.avatar = "M>";
            }
            this.distanciaPercorrida = 0.0;
        } else {
            throw new IllegalArgumentException("Nome Invalido");
        }
			
	}
	
	public double correr () {
		
		Random correu = new Random();
		double numeroAleatorio = correu.nextDouble();
		this.distanciaPercorrida += numeroAleatorio;
		mostrar();
		return this.distanciaPercorrida;
		
	}
	
	private void mostrar() {
		
		System.out.print(nome);
		for (int i = 0 ; i < (int)this.distanciaPercorrida ; i++) {
			System.out.print(" ");
		}
		System.out.println(avatar);
	}

}
