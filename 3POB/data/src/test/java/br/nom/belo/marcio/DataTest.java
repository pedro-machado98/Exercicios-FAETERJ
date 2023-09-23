package br.nom.belo.marcio;

import static org.junit.Assert.*;
import org.junit.Test;

public class DataTest 
{

	@Test
	public void testDataValida()
	{
		Data d1 = new Data( 2016, 9, 26);
		assertEquals( 26, d1.getDia());
		assertEquals( 9, d1.getMes());
		assertEquals( 2016, d1.getAno());
	}
	
	@Test
	public void testDataInvalida()
	{
		Data di = new Data( 2016, 9, 31);
		assertEquals( 1, di.getDia());
		assertEquals( 1, di.getMes());
		assertEquals( 1900, di.getAno());
	}
	
	@Test
	public void testAdicionarDias1()
	{
		Data da = new Data( 2005, 5, 17);
		Data dn = da.adicionarDias( 20);
		assertEquals( 6, dn.getDia());
		assertEquals( 6, dn.getMes());
		assertEquals( 2005, dn.getAno());
		assertNotEquals( da.getDia(), dn.getDia());
		assertNotEquals( da.getMes(), dn.getMes());
	}
	
	@Test
	public void testAdicionarDias2()
	{
		Data da = new Data( 2005, 2, 20);
		Data dn = da.adicionarDias( 10);
		assertEquals( 2, dn.getDia());
		assertEquals( 3, dn.getMes());
		assertEquals( 2005, dn.getAno());
		assertNotEquals( da.getDia(), dn.getDia());
		assertNotEquals( da.getMes(), dn.getMes());
	}	
}
