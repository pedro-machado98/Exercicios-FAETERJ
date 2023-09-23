import java.util.Scanner;


public class Hortifruti {

	public static void main(String[] args) {
        Cesta cesta = new Cesta();
        Scanner scanner = new Scanner(System.in);
        int opcao = 0;

        while (opcao != 4) {
            System.out.println("Menu de opções:");
            System.out.println("1. Colocar produto na cesta");
            System.out.println("2. Mostrar conteúdo da cesta e valor total");
            System.out.println("3. Limpar a cesta");
            System.out.println("4. Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    System.out.println("Escolha o tipo de produto:");
                    System.out.println("1. Banana");
                    System.out.println("2. Maçã");
                    System.out.println("3. Pera");
                    System.out.println("4. Uva");
                    System.out.println("5. Morango");
                    System.out.println("6. Limao");
                    System.out.println("7. Mamão");
                    int tipoProduto = scanner.nextInt();

                    Produto produto;
                    if (tipoProduto == 1) {
                        produto = new Banana();
                    } else if (tipoProduto == 2) {
                        produto = new Maca();
                    } else if (tipoProduto == 3) {
                        produto = new Pera();
                    } else if (tipoProduto == 4) {
                        produto = new Uva();
                    } else if (tipoProduto == 5) {
                        produto = new Morango();
                    } else if (tipoProduto == 6) {
                        produto = new Limao();
                    } else if (tipoProduto == 7) {
                        produto = new Mamao();
                    } else {
                        System.out.println("Opção inválida. Produto não adicionado à cesta.");
                        break;
                    }

                    System.out.print("Digite a quantidade: ");
                    int quantidade = scanner.nextInt();

                    for (int i = 0; i < quantidade; i++) {
                        cesta.adicionarProduto(produto);
                    }
                    break;
                case 2:
                    cesta.listarCesta();
                    break;
                case 3:
                    cesta.limparCesta();
                    break;
                case 4:
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida. Tente novamente.");
                    break;
            }
            System.out.println();
        }
        scanner.close();
    }

}
