package agenda;

public class Main {

	public static void main(String[] args) {
		
		
		Agenda.escrita("Pedro", "2523");
		Agenda.escrita("Matheus", "2267");
		Agenda.escrita("Pedro", "2523");
		
		Agenda.lerTodos();
		Agenda.lerNome("Matheus");

	}

}
