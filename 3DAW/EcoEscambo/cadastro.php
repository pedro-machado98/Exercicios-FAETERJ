<!DOCTYPE html>
<html lang="pt-br">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Cadastro - EcoEscambo</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0/dist/css/bootstrap.min.css">
</head>

<body>
  <?php require_once("auxStatic/cabecalhoLogin.inc");
      require_once("auxStatic/sessaoTracker.php"); ?>
  <div class="container">
    <div class="row justify-content-center mt-5">
      <div class="col-lg-6 col-md-8 col-sm-10">
        <div class="card">
          <div class="card-body">
            <h3 class="card-title mb-4">Cadastro</h3>
            <form>
              <div class="mb-3">
                <label for="email" class="form-label">Endereço de e-mail</label>
                <input type="email" class="form-control" id="email" name="email" required>
              </div>
              <div class="mb-3">
                <label for="name" class="form-label">Nome completo</label>
                <input type="text" class="form-control" id="name" name="name" required>
              </div>
              <div class="mb-3">
                <label for="password" class="form-label">Senha</label>
                <input type="password" class="form-control" id="password" name="password" required>
              </div>
              <div class="mb-3">
                <label for="password2" class="form-label">Repita a senha</label>
                <input type="password" class="form-control" id="password2" name="password2" required>
              </div>
              <button type="submit" class="btn btn-primary">Cadastrar</button>
            </form>
          </div>
        </div>
      </div>
    </div>
  </div>
  <?php require_once("auxStatic/rodape.inc"); ?>
</body>

</html>