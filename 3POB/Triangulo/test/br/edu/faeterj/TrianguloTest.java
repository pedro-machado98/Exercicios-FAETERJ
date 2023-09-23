package br.edu.faeterj;

import static org.junit.Assert.*;

import org.junit.Test;

public class TrianguloTest {

	@Test
	public void testTrianguloValido() {
		
		Ponto p1 = new Ponto( 0,0 );
		Ponto p2 = new Ponto( 0,1 );
		Ponto p3 = new Ponto( 1,0 );
		Triangulo t1 = new Triangulo( p1, p2, p3);
		assertEquals(0.0, t1.getP1().getX(), 0.1 );
		assertEquals(0.0, t1.getP1().getY(), 0.1 );
		assertEquals(0.0, t1.getP2().getX(), 0.1 );
		assertEquals(1.0, t1.getP2().getY(), 0.1 );
		assertEquals(1.0, t1.getP3().getX(), 0.1 );
		assertEquals(0.0, t1.getP3().getY(), 0.1 );
	}
	
	@Test
	public void testTrianguloInvalido() {
		
		Ponto p1 = new Ponto( 0,0 );
		Ponto p2 = new Ponto( 0,1 );
		Ponto p3 = new Ponto( 1,0 );
		Triangulo t1 = new Triangulo( p1, p2, p3);
		assertEquals(0.0, t1.getP1().getX(), 0.1 );
		assertEquals(0.0, t1.getP1().getY(), 0.1 );
		assertEquals(0.0, t1.getP2().getX(), 0.1 );
		assertEquals(1.0, t1.getP2().getY(), 0.1 );
		assertEquals(0.0, t1.getP3().getX(), 0.1 );
		assertEquals(0.0, t1.getP3().getY(), 0.1 );
	}	

	@Test
	public void testTrianguloInvalido2() {
		
		Ponto p1 = new Ponto( 0,0 );
		Ponto p2 = new Ponto( 0,1 );
		Ponto p3 = new Ponto( 1,0 );
		Triangulo t1 = new Triangulo( p1, p2, p3);
		t1.setP3( new Ponto(0 ,0) );
		assertEquals(0.0, t1.getP1().getX(), 0.1 );
		assertEquals(0.0, t1.getP1().getY(), 0.1 );
		assertEquals(0.0, t1.getP2().getX(), 0.1 );
		assertEquals(1.0, t1.getP2().getY(), 0.1 );
		assertEquals(1.0, t1.getP3().getX(), 0.1 );
		assertEquals(0.0, t1.getP3().getY(), 0.1 );
	}	
	
}
