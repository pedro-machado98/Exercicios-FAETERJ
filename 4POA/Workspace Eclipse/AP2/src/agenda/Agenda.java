package agenda;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Agenda {
	
	public static void escrita(String nome, String telefone) {
		try {
			FileWriter fw = new FileWriter("C:\\Users\\pedro.machado\\Desktop\\Codigos\\3POA\\AP2\\agenda.txt", true);
			BufferedWriter bw = new BufferedWriter(fw);
			
			if(verificaNome(nome)) {
				bw.write(nome+";"+telefone);
				bw.newLine();
				bw.close();
				fw.close();
				System.out.println(nome + " foi adicionado a sua lista de contatos");
			} else {
				System.out.println("O contato " + nome + " ja foi inserido.");
			}
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
	public static void lerTodos() {
		try {
			FileReader fr = new FileReader("C:\\Users\\pedro.machado\\Desktop\\Codigos\\3POA\\AP2\\agenda.txt");
			BufferedReader br = new BufferedReader(fr); 
			while(br.ready()) {
				String aux = br.readLine();
				String [] dados = aux.split(";");
				System.out.println("Nome:" + dados[0] + " - Telefone:" + dados[1]);
			}
			br.close();
			fr.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public static void lerNome(String nome) {
		try {
			
			FileReader fr = new FileReader("C:\\Users\\pedro.machado\\Desktop\\Codigos\\3POA\\AP2\\agenda.txt");
			BufferedReader br = new BufferedReader(fr);
			boolean encontrado = false;
			
			while(br.ready()) {
				String aux = br.readLine();
				if (aux.contains(nome)) {
					String [] dados = aux.split(";");
					System.out.println("Nome:" + dados[0] + " - Telefone:" + dados[1]);
					encontrado = true;
				}
			}
			if (!encontrado) {
				System.out.println("Dados não encontrados!");
			}
			br.close();
			fr.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} finally {
			
		}
	}

	@SuppressWarnings("resource")
	public static boolean verificaNome(String Nome) {
		try {
			FileReader fr = new FileReader("C:\\Users\\pedro.machado\\Desktop\\Codigos\\3POA\\AP2\\agenda.txt");
			BufferedReader br = new BufferedReader(fr);
			
			while(br.ready()) {
				String aux = br.readLine();
				if(aux.contains(Nome)) {
					return false;
				}
			}
			return true;
			
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		return true;
	}
}
