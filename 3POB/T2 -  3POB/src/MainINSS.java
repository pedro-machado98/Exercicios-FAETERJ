import java.util.Scanner;

public class MainINSS {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		// PARA TESTAR ALTERE O TAMANHO DE VETOR DE FUNCIONARIOS ABAIXO;
        Funcionario[] funcionarios = new Funcionario[2];
        
        for (int i = 0; i < funcionarios.length; i++) {
            System.out.println("Digite os dados do funcionário " + (i+1) + ":");
            System.out.print("Matrícula: ");
            int matricula = sc.nextInt();
            System.out.print("Nome: ");
            String nome = sc.next();
            System.out.print("Salário: ");
            double salario = sc.nextDouble();
            
            funcionarios[i] = new Funcionario(matricula, nome, salario);
        }
        sc.close();
       
        for (int i = 0; i < funcionarios.length; i++) {
            System.out.println("Funcionário " + funcionarios[i].getMatricula() + ": " + funcionarios[i].getNome());
            System.out.println("Salário: " + funcionarios[i].getSalario());
            System.out.println("Valor de INSS a ser pago: " + funcionarios[i].calcularInss());
        }

	}

}
