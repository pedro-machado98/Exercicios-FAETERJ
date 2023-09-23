<?php

require_once("auxStatic/cabecalhoGeral.inc");
require_once("auxDB/paginacaoMeusProdutos.php");
require_once("auxDB/conexaoDB.php");

$dado2 = $produtosPorPagina->fetch();

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
    <title>Interessados no Produto - EcoEscambo</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap/5.0.2/css/bootstrap.min.css">
</head>

<body>



    <div class="container p-2">
        <header class="text-center">
            <h1 class="fw-bold">Seu Produto</h1>
        </header>
        <div class="row">
            <div class="col-md-2 col-sm-12 border" style="width: 200px; height: 200px; display: flex; justify-content: center; align-items: center;">
                <?php echo '<img src="data:image/jpeg;base64,' . base64_encode($dado['imgProduto']) . '" style="max-width: 100%; max-height: 100%; object-fit: cover; text-align: center;" />'; ?>
            </div>
            <div class="col-md-7 col-sm-12">
                <div class="card-body">
                    <h5 class="card-title"><?php echo $dado["produto"]; ?></h5>
                    <p class="card-text"><?php echo $dado["descricao"]; ?></p>
                </div>
            </div>
        </div>
    </div>



    <!-- Dropdown para selecionar interessado -->
    <div class="d-flex justify-content-center align-items-center">
        <form class="d-flex align-items-center" method="get">
            <label for="interessado" class="me-2 mb-0">Interessados:</label>
            <select class="form-select me-2" id="interessado" name="interessado">
                <option value="joao">João</option>
                <option value="pedro">Pedro</option>
                <option value="maria">Maria</option>
            </select>
            <button type="submit" class="btn btn-primary">Enviar</button>
        </form>
    </div>


    <!-- Produtos do interessado selecionado -->
    <div id="produtosInteressado">
        <header class="text-center">
            <h1 class="fw-bold">Produto(s) Oferecido</h1>
        </header>
        <?php

        $consultaInteressados = $pdo->prepare("SELECT * FROM produtos LIMIT 2, 5");
        $consultaInteressados->execute();

        foreach ($consultaInteressados as $row) {
        ?>
            <div class="container p-2">
                <div class="row">
                    <div class="col-md-2 col-sm-12 border" style="width: 200px; height: 200px; display: flex; justify-content: center; align-items: center;">
                        <?php echo '<img src="data:image/jpeg;base64,' . base64_encode($row['imgProduto']) . '" style="max-width: 100%; max-height: 100%; object-fit: cover; text-align: center;" />'; ?>
                    </div>
                    <div class="col-md-7 col-sm-12">
                        <div class="card-body">
                            <h5 class="card-title"><?php echo $row["produto"]; ?></h5>
                            <p class="card-text"><?php echo $row["descricao"]; ?></p>
                        </div>
                    </div>
                    <div class="col-md-3 col-sm-12 d-flex justify-content-center align-items-center">
                        <button type="button" class="btn btn-success interesseBtn green">Aceitar</button>
                    </div>
                </div>
            </div>
        <?php
        }
        ?>
    </div>


    <?php require_once("auxStatic/rodape.inc"); ?>
</body>

</html>