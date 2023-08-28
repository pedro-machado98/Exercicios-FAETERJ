<?php
    require_once("auxStatic/cabecalhoGeral.inc");
    require_once("auxDB/paginacaoMeusProdutos.php");
    // require_once("auxStatic/sessaoTracker.php");
    $dado = $produtosPorPagina->fetch();
    $dado2 = $produtosPorPagina->fetch();
?>

<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <title>Análise de Oferta - EcoEscambo</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap/5.0.2/css/bootstrap.min.css">
</head>

<body>


    <div class="container">
        <div class="row justify-content-center">
            <div class="col-md-12">
                <h1 class="text-center">Meu Produto</h1>
            </div>
            <div class="col-md-2 col-sm-12 border" style="width: 200px; height: 200px; display: flex; justify-content: center; align-items: center;">
                        <?php echo '<img src="data:image/jpeg;base64,' . base64_encode($dado['imgProduto']) . '" style="max-width: 100%; max-height: 100%; object-fit: cover; text-align: center;" />'; ?>
                    </div>
            <div class="col-md-7">
                <div class="card-body">
                    <?php echo "<h5 class='card-title'>" . $dado['produto'] . "</h5>"; ?>
                    <?php echo "<p class='card-text'>" . $dado['descricao'] . "</p></p>"; ?>
                </div>
            </div>
        </div>

        <!-- Produtos do interessado selecionado -->
        <div class="row justify-content-center">
            <div class="col-md-12">
                <h1 class="text-center">Produto de Fulano</h1>
            </div>
            <div class="col-md-2 col-sm-12 border" style="width: 200px; height: 200px; display: flex; justify-content: center; align-items: center;">
                        <?php echo '<img src="data:image/jpeg;base64,' . base64_encode($dado2['imgProduto']) . '" style="max-width: 100%; max-height: 100%; object-fit: cover; text-align: center;" />'; ?>
                    </div>
            <div class="col-md-7">
                <div class="card-body">
                    <?php echo "<h5 class='card-title'>" . $dado2['produto'] . "</h5>"; ?>
                    <?php echo "<p class='card-text'>" . $dado2['descricao'] . "</p></p>"; ?>
                </div>
            </div>
        </div>

        <div class="row justify-content-center">
            <div class="col-md-4 col-lg-4">
                <form>
                    <div class="d-grid gap-2 d-md-flex justify-content-md-between">
                        <button type="submit" class="btn btn-success flex-fill me-md-2" value="1">Aceitar</button>
                        <button type="submit" class="btn btn-danger flex-fill mt-2 mt-md-0" value="1">Recusar</button>
                    </div>
                </form>
            </div>
        </div>
    </div>


    <?php require_once("auxStatic/rodape.inc"); ?>
</body>

</html>