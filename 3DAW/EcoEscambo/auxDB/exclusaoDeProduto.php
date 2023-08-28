<?php

session_start();

require_once 'conexaoDB.php';
require_once "ProdutosClass.php";


$produto = filter_input(INPUT_GET, "id");

$produtoClass = new Produto;

$consulta = $produtoClass->excluirProduto($produto);

header('Location: ../meusProdutos.php');

exit;