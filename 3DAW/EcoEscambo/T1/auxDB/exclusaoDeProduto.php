<?php

session_start();

require_once 'conexaoDB.php';


$produto = filter_input(INPUT_GET, "id");

$query = "DELETE FROM produtos WHERE idproduto = :idProduto";

$apaga = $pdo->prepare($query);

$apaga->bindValue("idProduto", $produto);
$apaga->execute();

header('Location: ../meusProdutos.php');

exit;