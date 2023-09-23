<!DOCTYPE html>
<html lang="pt-BR">

<head>
  <meta charset="UTF-8">
  <title>Login - EcoEscambo</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css">
</head>

<body>
  <?php require_once("auxStatic/cabecalhoLogin.inc"); ?>
  <div class="container">
    <div class="row mt-5">
      <div class="col-md-4 col-lg-4 mx-auto">
        <h2 class="text-center mb-3">Login</h2>

        <form class="form-signin" action="auxDB/logar.php" method="POST">
          <div class="mb-3">
            <label for="username" class="form-label">Usuário:</label>
            <input type="text" class="form-control" id="username" name="usuario">
          </div>
          <div class="mb-3">
            <label for="password" class="form-label">Senha:</label>
            <input type="password" class="form-control" id="senha" name="senha">
          </div>
          <div class="d-grid gap-2">
            <button type="submit" class="btn btn-primary mb-3">Entrar</button>
          </div>
          <div class="d-flex justify-content-between">
            <a href="recuperarSenha.php" class="text-decoration-none">Esqueceu sua senha?</a>
            <a href="cadastro.php" class="text-decoration-none">Cadastro</a>
          </div>
        </form>

      </div>
    </div>
  </div>
  <?php require_once("auxStatic/rodape.inc"); ?>
</body>

</html>