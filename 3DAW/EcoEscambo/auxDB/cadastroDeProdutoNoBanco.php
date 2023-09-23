<?php
session_start();

require_once 'conexaoDB.php';
require_once "ProdutosClass.php";

$produto = filter_input(INPUT_POST, "produto");
$descricao = filter_input(INPUT_POST, "descricao");

//Logica para a imagem
$imgEnviada = filter_input_array(INPUT_POST, FILTER_DEFAULT);

if (!empty($imgEnviada["imgEnviar"])) {

    //Recebe o arquivo de img
    $imagem = $_FILES["imagem"];

    $imgBlob = file_get_contents($imagem['tmp_name']);

    $imgName = $imagem['name'];

    $cadastrar = new Produto;

    $consulta = $cadastrar->cadastrarProduto($_SESSION['idUser'], $produto, $descricao, $imgBlob, $imgName);

    $_SESSION['feedback'] = 'Produto cadastrado com sucesso!';
    $_SESSION['sucesso'] = true;

} else {
    
    $_SESSION['feedback'] = 'Erro ao cadastrar o produto. Tente novamente mais tarde.';
}

header('Location: ../cadastrarProduto.php');

exit;