package br.edu.faeterj;

import static org.junit.Assert.*;

import org.junit.Test;

public class PontoTest {

	@Test
	public void test() {
		Ponto p1 = new Ponto( 0,0);
		Ponto p2 = new Ponto( 1,1);
		assertEquals(1.414, p1.distanciaAte( p2), 0.001 );
		assertEquals(1.414, p2.distanciaAte( p1), 0.001 );
	}

}
