import java.util.ArrayList;
import java.util.List;


public class Cesta {
	
	private List<Produto> produtos;
	private int quantidade;
	
	public Cesta() {
		this.produtos = new ArrayList<>();
		this.quantidade = 0;
	}
	
	public void adicionarProduto(Produto produto) {
		if (quantidade < 12) {
			produtos.add(produto);
			quantidade++;
			System.out.println("Produto adicionado à cesta.");
		} 
		else {
			System.out.println("A cesta está cheia.");
		}
	}
	
	public double calcularTotal() {
		double total = 0;
		for(Produto produto : produtos) {
			total += produto.getPreco();
		}
		return total;
	}
	
	public void listarCesta() {
		System.out.println("Conteúdo da cesta:");
		for (Produto produto : produtos) {
			System.out.println("Tipo: " + produto.getClass().getSimpleName() + ", Preço unitario: " + produto.getPreco());
		}
		System.out.println("Valor total da cesta: " + calcularTotal());
	}

	public void limparCesta() {
		produtos.clear();
		quantidade = 0;
		System.out.println("Cesta Limpa.");
	}
}
