package ViacaoTartaruga;
import java.util.Scanner;

public class MainViacaoTartaruga {

	public static void main(String[] args) {
		Veiculo[] frota = new Veiculo[4];
		
        frota[0] = new Veiculo(20, "RJ", "SP");
        frota[1] = new Veiculo(15, "MG", "RS");
        frota[2] = new Veiculo(21, "MS", "RO");
        frota[3] = new Veiculo(10, "BA", "SE");
        
        Scanner scanner = new Scanner(System.in);
        int opcao = -1;
		
        while (opcao != 0) {
        	System.out.println();
        	System.out.println("Escolha o ônibus (digite o número):");
	        
	        for (int i = 0; i < frota.length; i++) {
	            System.out.println((i+1) + ": " + frota[i].getOrigem() + "-" + frota[i].getDestino() + " (" + frota[i].getNumAssentosDisponiveis() + " assentos disponíveis de " + frota[i].getNumAssentos() + ")");
	        }
	        
	        System.out.println("Digite 0 para sair.");
	        
	        opcao = scanner.nextInt();
	        
	        if (opcao >= 1 && opcao <= frota.length) {
	        	System.out.println();
	        	if (frota[opcao-1].comprar()) {
	        		System.out.println("Assento vendido com sucesso.");
	        	} else {
	        		System.out.println("Não foi possivel vender o assento.");
	        	}
	        } else if (opcao != 0 ) {
	        	System.out.println("Opção invalida.");
	        }
        }
        System.out.println("Programa encerrado.;");
        
        scanner.close();
        
	}

}
