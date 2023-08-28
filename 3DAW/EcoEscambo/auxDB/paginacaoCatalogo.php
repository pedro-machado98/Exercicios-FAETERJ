<?php

require_once "conexaoDB.php";
require_once "ProdutosClass.php";

// global $pdo;
// $consulta = $pdo->prepare("SELECT * FROM produtos");
// $consulta->execute();

$produto = new Produto;

$consulta = $produto->getProdutos();


if (isset($_GET['pagina'])) {

    $pagina = $_GET['pagina'];
} else {

    $pagina = 1;
}

// quantidade máxima de produtos por página
$qtdProdutosPagina = 5;

// número total de produtos após a consulta
$totalProdutos = $consulta->rowCount();

// número total de páginas necessárias para exibir todos os produtos
$numPaginas = ceil($totalProdutos / $qtdProdutosPagina);

// calcular o início da visualização
$inicio = ($qtdProdutosPagina * ($pagina - 1));

// query para selecionar os produtos da página atual
$produtosPorPagina = $pdo->prepare("SELECT * FROM produtos LIMIT $inicio, $qtdProdutosPagina");
$produtosPorPagina->execute();

$totalProdutos = $produtosPorPagina->rowCount();
