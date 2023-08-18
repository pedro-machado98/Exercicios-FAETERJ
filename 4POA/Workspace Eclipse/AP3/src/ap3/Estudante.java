package ap3;

import java.io.Serializable;

@SuppressWarnings("serial")
public class Estudante implements Serializable {
	public String nome;
	@Override
	public String toString() {
		return "Estudante [nome=" + nome + ", idade=" + idade + ", matricula=" + matricula + "]";
	}

	public int idade;
	public int matricula;
	

	public Estudante (String nome, int idade, int matricula ) {
		super();
		this.nome = nome;
		this.idade = idade;
		this.matricula = matricula;
	}
	
	public String getNome() {
		return nome;
	}
	
	public int getIdade() {
		return idade;
	}
	
	public int gerMatricula() {
		return matricula;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public void setIdade(int idade ) {
		this.idade = idade;
	}
	
	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
}
	
