package br.com.boamorte;

public class Dependente {

	private String nome;
	private int idade;
	private int qtdDependentes;
	
	public Dependente(String nome, int idade) {
		
		this.nome = nome;
		this.idade = idade;
		
	}
	
	public String getNome() {
		
		return nome;
		
	}
	
	public int getIdade() {
		
		return idade;
		
	}
	
	public int getQtdeDependentes() {
	
		return qtdDependentes;
		
	}
}
