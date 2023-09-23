package br.edu.faeterj;

public class Triangulo {

	private Ponto p1;
	private Ponto p2;
	private Ponto p3;
	
	public Triangulo(Ponto p1, Ponto p2, Ponto p3) {
		
		this.p1 = p1;
		this.p2 = p2;
		this.p3 = p3;
		
	}

	public Ponto getP1() {
		
		return p1;
		
	}

	public Ponto getP2() {
		
		return p2;

	}

	public Ponto getP3() {
		
		return p3;

	}

	public void setP3(Ponto ponto) {
		
		p3 = ponto;
		
	}

}
