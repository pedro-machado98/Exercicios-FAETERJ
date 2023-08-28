<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Esqueceu a senha - EcoEscambo</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0/dist/css/bootstrap.min.css">
</head>

<body>
    <?php require_once("auxStatic/cabecalhoLogin.inc"); ?>
    <div class="container">
        <div class="row justify-content-center mt-5">
            <div class="col-lg-6 col-md-8 col-sm-10">
                <div class="card">
                    <div class="card-body">
                        <h3 class="card-title mb-4">Esqueceu a senha?</h3>
                        <p class="card-text mb-4">Insira o seu endereço de e-mail abaixo para recuperar o acesso à sua conta</p>
                        <form>
                            <div class="mb-3">
                                <label for="email" class="form-label">Endereço de e-mail</label>
                                <input type="email" class="form-control" id="email" name="email" required>
                            </div>
                            <button type="submit" class="btn btn-primary">Recuperar acesso</button>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <?php require_once("auxStatic/rodape.inc"); ?>
</body>

</html>