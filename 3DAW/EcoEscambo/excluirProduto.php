<?php
require_once("auxStatic/cabecalhoGeral.inc");
require_once("auxDB/conexaoDB.php");


$idProduto = filter_input(INPUT_GET, "id", FILTER_SANITIZE_NUMBER_INT);

$query = "SELECT * FROM produtos WHERE idproduto = :idProduto ";
$consultaID = $pdo->prepare($query);

$consultaID->bindValue("idProduto", $idProduto);
$consultaID->execute();

$dado = $consultaID->fetch();



?>


<!DOCTYPE html>

<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <title>Meus Produtos - EcoEscambo</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css">
    <link rel="stylesheet" href="style/style.css">
</head>

<body>


    <div class="container vh-100 d-flex justify-content-center align-items-center">
        <div class="card">
            <div class="card-header">
                Excluir produto
            </div>
            <div class="card-body d-flex flex-column justify-content-center align-items-center">

                <h5 class="card-title">Deseja excluir o produto <?php echo $dado["produto"]; ?>?</h5>
                
                <p class="card-text">Essa ação não pode ser desfeita.</p>
                <div class="d-flex justify-content-center">
                    <a href="meusProdutos.php" class="btn btn-success me-3">Cancelar</a>
                    <a href="auxDB/exclusaoDeProduto.php?id=<?php echo $idProduto ?>" class="btn btn-danger ms-3">Excluir</a>
                </div>
            </div>
        </div>
    </div>


    <?php
    require_once("auxStatic/rodape.inc");
    ?>
</body>

</html>