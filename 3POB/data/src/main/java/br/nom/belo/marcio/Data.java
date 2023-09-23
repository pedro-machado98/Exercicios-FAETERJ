package br.nom.belo.marcio;

import java.util.Calendar;

public class Data 
{

	private int dia;
	private int mes;
	private int ano;
	
	public Data(int i, int j, int k) 
	{
		this.dia = k;
		this.mes = j;
		this.ano = i;
	}

	public int getDia() 
	{
		return dia;
	}

	public int getMes() 
	{
		return mes;
	}

	public int getAno() 
	{
		return ano;
	}

	public Data adicionarDias(int i) 
	{
		Calendar calendario = Calendar.getInstance();
		calendario.set(ano, mes-1, dia);
		calendario.add(Calendar.DAY_OF_MONTH, i);
	    int dia = calendario.get(Calendar.DAY_OF_MONTH);
	    int mes = calendario.get(Calendar.MONTH)+ 1;
	    int ano = calendario.get(Calendar.YEAR);
		
		return new Data(ano, mes, dia);
	}
}