public class Funcionario {
    private static int contadorMatricula = 1;
    private final int matricula;
    private String nome;
    private double salario;

    public Funcionario(String nome, double salario) {
        this.matricula = contadorMatricula++;
        
        if (nome.length() > 40) {
        	throw new IllegalArgumentException("O nome não pode ter mais do que 40 caracteres.");
        }
        
        if (salario < 350.0) {
            throw new ViolacaoCltException("Salário inferior ao mínimo permitido.");
        }
        this.nome = nome;
        this.salario = salario;
        
        
    }

    public int getMatricula() {
        return matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        if (nome.length() > 40) {
            throw new IllegalArgumentException("O nome não pode ter mais do que 40 caracteres.");
        }
        this.nome = nome;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        if (salario < 350.0) {
            throw new ViolacaoCltException("Salário inferior ao mínimo permitido.");
        }

        if (salario > this.salario * 1.1) {
            throw new AumentoAbsurdoException("Aumento de salário superior a 10% do valor atual.");
        }

        this.salario = salario;
    }
}