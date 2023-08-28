    
    <?php
    require_once("auxStatic/cabecalhoGeral.inc");
    // require_once("auxStatic/sessaoTracker.php");

    session_start();
    
    ?>

    <?php
        if (isset($_SESSION['feedback'])) {
            echo '<div class="alert alert-' . ($_SESSION['sucesso'] ? 'success' : 'danger') . '">' . $_SESSION['feedback'] . '</div>';
            unset($_SESSION['feedback']);
        }
    ?>


<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <title>Cadastro de Produto - EcoEscambo</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css">
</head>

<body>



    <div class="container my-5">

        <div class="container">
            <div class="row">
                <div class="col-md-4 col-lg-4 mx-auto">
                    <h1>Cadastro de Produto</h1>

                    <form method="post" action="auxDB/cadastroDeProdutoNoBanco.php" enctype="multipart/form-data">
                        <div class="mb-3">
                            <label for="titulo" class="form-label">Nome do produto:</label>
                            <input type="text" class="form-control" id="titulo" name="produto" required>
                        </div>
                        <div class="mb-3">
                            <label for="descricao" class="form-label">Descrição do Produto:</label>
                            <textarea class="form-control" id="descricao" name="descricao" rows="3" required></textarea>
                        </div>
                        <div class="mb-3">
                            <label for="imagem" class="form-label">Foto do Produto:</label>
                            <input type="file" class="form-control" name="imagem" accept="image/*">
                            <br>
                            <input type="submit" class="btn btn-primary" name="imgEnviar">
                        </div>
                    </form>

                </div>
            </div>
        </div>
    </div>


    <?php
        require_once("auxStatic/rodape.inc");
    ?>

</body>

</html>