
public class Funcionario {

	private int matricula;
	private String nome;
	private double salario;
	
	public Funcionario(int matricula, String nome, double salario) {
		this.matricula = matricula;
		this.nome = nome;
		this.salario = salario;
	}
	
	public int getMatricula() {
        return matricula;
    }
    
    public String getNome() {
        return nome;
    }
    
    public double getSalario() {
        return salario;
    }
    
    public void setSalario(double salario) {
        this.salario = salario;
    }
    
    public double calcularInss() {
        double inss = 0.0;
        if (salario <= 720.0) {
            inss = salario * 0.0765;
        } else if (salario <= 1200.0) {
            inss = salario * 0.09;
        } else if (salario <= 2400.0) {
            inss = salario * 0.11;
        } else {
            inss = 2400.0 * 0.11;
        }
        return inss;
    }
}
