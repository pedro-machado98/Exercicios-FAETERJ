<?php
session_start();

require_once 'conexaoDB.php';


$produto = filter_input(INPUT_POST, "produto");
$descricao = filter_input(INPUT_POST, "descricao");


//Logica para a imagem
$imgEnviada = filter_input_array(INPUT_POST, FILTER_DEFAULT);

if (!empty($imgEnviada["imgEnviar"])) {

    //Recebe o arquivo de img
    $imagem = $_FILES["imagem"];

    $imgBlob = file_get_contents($imagem['tmp_name']);

    $imgName = $imagem['name'];

    $consulta = "INSERT INTO `produtos` (`idproduto`, `produto`, `descricao`, `situacao`, `imgProduto`, `nomeDocumentoImg`, `idusuario`)
                 VALUES ('', :produto, :descricao, 1 , :imgProduto, :nomeArquivoImg , :idusuario)";

    $consulta = $pdo->prepare($consulta);
    $consulta->bindParam(":produto", $produto);
    $consulta->bindParam(":descricao", $descricao);
    $consulta->bindParam(":imgProduto", $imgBlob);
    $consulta->bindParam(":nomeArquivoImg", $imgName);
    $consulta->bindParam(":idusuario", $_SESSION['idUser']);

    $consulta->execute();


    $_SESSION['feedback'] = 'Produto cadastrado com sucesso!';
    $_SESSION['sucesso'] = true;

} else {
    
    $_SESSION['feedback'] = 'Erro ao cadastrar o produto. Tente novamente mais tarde.';
}

header('Location: ../cadastrarProduto.php');

exit;