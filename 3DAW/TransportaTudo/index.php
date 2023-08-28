<?php

require_once "conexaoDB.php";

$idCaminhao = filter_input(INPUT_GET, "idCaminhao", FILTER_SANITIZE_NUMBER_INT);

global $pdo;

$consulta = "SELECT * FROM caminhao WHERE idCaminhao = :idCaminhao";
$consulta = $pdo->prepare($consulta);
$consulta->bindParam(":idCaminhao", $idCaminhao);

$consulta->execute();

$dado = $consulta->fetch();

?>

<!DOCTYPE html>
<html lang="pt-BR">

    <head>
        <title>Transporta Tudo</title>
    </head>

    <body>

    <h1>Caminhão</h1>
    <p> Placa: <?php echo $dado["placa"]; ?> Capacidade: <?php echo $dado["capacidade"]; ?> </p>


        
    </body>

</html>