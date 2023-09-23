package br.com.boamorte;

public class Cliente {

	private String nome;
	private int idade;
	private int matricula;
	private Dependente[] vDependente;
	private int qtdDependentes;
	
	public Cliente(String nome, int idade) {
		
		this.nome = nome;
		this.idade = idade;
		this.matricula = 1;
		this.qtdDependentes = 0;
		this.vDependente = new Dependente[3];
		
	}
	
	public String getNome() {
		
		return nome;
		
	}
	
	public int getIdade() {
		
		return idade;
		
	}
	
	public int getMatricula () {
		
		return matricula;
		
	}
	
	public int getQtdeDependentes() {
		
		return qtdDependentes;
		
	}
	
	public boolean adicionarDependente (Dependente pessoa) {
		
		if (qtdDependentes == 3) {
			
			return false;
			
		}
		
		if (this.vDependente == null) {
			
			vDependente[qtdDependentes] = pessoa;
			qtdDependentes++;
			return true;
			
		}
		
		for(int i  = 0 ; i < vDependente.length ; i++) {
			
			if (pessoa == vDependente[i]) {
				
				return false;
				
			}
			
		}
		
		vDependente[qtdDependentes] = pessoa;
		qtdDependentes++;
		return true;
		
	}
	
}
