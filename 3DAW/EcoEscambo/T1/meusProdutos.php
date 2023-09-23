    <?php
    require_once("auxStatic/cabecalhoGeral.inc");
    // require_once("auxStatic/sessaoTracker.php");
    require_once("auxDB/paginacaoMeusProdutos.php");
   
    ?>


    <!DOCTYPE html>
    <html lang="pt-BR">

    <head>
        <meta charset="UTF-8">
        <title>Meus Produtos - EcoEscambo</title>
        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css">
    </head>

    <body>

        <div class="container d-flex justify-content-center">
            <div class="row border border-secondary rounded p-4 m-4">
                <div class="col-md-12 d-flex justify-content-center mb-3">
                    <div class="form-check form-check-inline">
                        <input class="form-check-input" type="radio" name="filtroMeusPrdts" id="todos" checked>
                        <label class="form-check-label" for="flexRadioDefault1">Todos</label>
                    </div>
                    <div class="form-check form-check-inline">
                        <input class="form-check-input" type="radio" name="filtroMeusPrdts" id="interessados">
                        <label class="form-check-label" for="flexRadioDefault2">Há interessados</label>
                    </div>
                </div>
                <div class="col-md-12 d-flex justify-content-center align-items-center">
                    <button type="button" class="btn btn-primary" id="filtroBtn">Filtrar</button>
                </div>
            </div>
        </div>


        <header class="text-center">
            <h1 class="fw-bold">Meus Produtos</h1>
        </header>


        <!-- Este if vai até a paginação pois se não existirem produtos a paginação não será renderizada; -->
        <?php if ($totalProdutos > 0) { ?>
            <?php while ($dado = $produtosPorPagina->fetch()) { ?>
                <div class="container p-2">
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
                        <div class="col-md-3 col-sm-12 d-flex justify-content-center align-items-center">
                            <a class="btn btn-primary interesseBtn" href="ofertasRecebidas.php?id=<?php echo $dado['idproduto']; ?>"> Ver Interessados </a>
                            <a class="btn btn-danger ms-2" href="excluirProduto.php?id=<?php echo $dado['idproduto']; ?>"> Excluir </a>
                            <a class="btn btn-success ms-2" href="ofertasRecebidas.php?id=<?php echo $dado['idproduto']; ?>"> Editar </a>
                        </div>
                    </div>
                </div>
            <?php } ?>

            <div class="pagination-container d-flex justify-content-center">
                <ul class="pagination">
                    <?php for ($i = 1; $i <= $numPaginas; $i++) { ?>
                        <li class="page-item <?php if ($i == $pagina) echo 'active'; ?>">
                            <a class="page-link" href="?pagina=<?php echo $i; ?>"><?php echo $i; ?></a>
                        </li>
                    <?php } ?>
                </ul>
            </div>
        <?php } ?>



        <?php require_once("auxStatic/rodape.inc"); ?>

    </body>

    </html>