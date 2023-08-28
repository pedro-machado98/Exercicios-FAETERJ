import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class FuncionarioTeste {
    @Test
    public void testCriarFuncionario() {
        Funcionario funcionario = new Funcionario("João", 1000.0);

        assertEquals("João", funcionario.getNome());
        assertEquals(1000.0, funcionario.getSalario());
    }

    @Test
    public void testAlterarNome() {
        Funcionario funcionario = new Funcionario("João", 1000.0);

        funcionario.setNome("José");

        assertEquals("José", funcionario.getNome());
    }

    @Test
    public void testAlterarNomeComMaisDe40Caracteres() {
        Funcionario funcionario = new Funcionario("João", 1000.0);

        assertThrows(IllegalArgumentException.class, () -> funcionario.setNome("José da Silva Santos Pereira de Souza e Oliveira"), "teste");
    }

    @Test
    public void testAlterarSalario() {
        Funcionario funcionario = new Funcionario("João", 1000.0);

        funcionario.setSalario(1099.0);

        assertEquals(1099.0, funcionario.getSalario());
    }

    @Test
    public void testAumentoAbsurdoException() {
        Funcionario funcionario = new Funcionario("João", 1000.0);

        assertThrows(AumentoAbsurdoException.class, () -> {
            funcionario.setSalario(2000.0);
        });
    }

    @Test
    public void testSalarioInferiorAoMinimoException() {
        assertThrows(ViolacaoCltException.class, () -> {
            new Funcionario("João", 100.0);
        });
    }
}