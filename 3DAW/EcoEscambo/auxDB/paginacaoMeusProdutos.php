<?php

require_once "conexaoDB.php";
require_once "ProdutosClass.php";

session_start();
// require_once "auxStatic/sessaoTracker.php";

// global $pdo;
// $consulta = "SELECT * FROM produtos WHERE idusuario = :idusuario";
// $consulta = $pdo->prepare($consulta);
// $consulta->bindParam(":idusuario", $_SESSION['idUser']);

// $consulta->execute();

$produto = new Produto;

$consulta = $produto->getProdutosUsuario($_SESSION['idUser']);


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
$produtosPorPagina = $pdo->prepare("SELECT * FROM produtos WHERE idusuario = :idusuario LIMIT $inicio, $qtdProdutosPagina");
$produtosPorPagina->bindParam(":idusuario", $_SESSION['idUser']);
$produtosPorPagina->execute();


$totalProdutos = $produtosPorPagina->rowCount();
