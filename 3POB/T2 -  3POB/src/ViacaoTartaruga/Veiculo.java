package ViacaoTartaruga;

import java.util.Arrays;
import java.util.List;

public class Veiculo {
	
	private int capacidade;
	private String estadoOrig;
	private String destino;
	private int numAssentosDisponiveis;
	
	public Veiculo(int capacidade, String estadoOrig, String destino) {
		
		List<String> estados = Arrays.asList("AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO");
		
		if (estados.contains(estadoOrig)) {
		   this.estadoOrig = estadoOrig; 
		} else {
            throw new IllegalArgumentException("Estado de origem invalido.");
        }
		if (estados.contains(destino)) {
			this.destino = destino;
		} else {
            throw new IllegalArgumentException("Estado de destino invalido.");
        }
		
		//irei simular uma capacidade maxima pensando em um onibus
		if (capacidade < 50) {
			this.capacidade = capacidade;
			this.numAssentosDisponiveis = capacidade;
		} else {
            throw new IllegalArgumentException("Onibus ultrapaça capacidade maxima.");
        }

	}
	
	public int getNumAssentosDisponiveis( ) {
		return this.numAssentosDisponiveis;
	}
	
	public int getNumAssentos( ) {
		return this.capacidade;
	}
	
	public String getOrigem( ) {
		return this.estadoOrig;
	}
	
	public String getDestino( ) {
		return this.destino;
	}
	
	public boolean comprar() {
		
		if (numAssentosDisponiveis > 0) {
            numAssentosDisponiveis--;
            return true;
        } else {
            return false;
        }
		
	}

}
