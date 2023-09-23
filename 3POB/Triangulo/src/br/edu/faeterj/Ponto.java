package br.edu.faeterj;

public class Ponto {
	
	private int x, y;

	public Ponto(int x, int y) {
		this.x = x;
		this.y = y;
	}

	public double getX() {
		return x;
	}

	public double getY() {
		return y;
	}

	public double distanciaAte(Ponto p2) {
		
	    double xDif = p2.getX() - getX();
	    double yDif = p2.getY() - getY();
	    return Math.sqrt(xDif * xDif + yDif * yDif);
	    
	}

}
