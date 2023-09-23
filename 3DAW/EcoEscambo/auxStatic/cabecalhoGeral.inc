<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>

<nav class="navbar navbar-expand-md navbar-light bg-light">
  <div class="container">
    <a class="navbar-brand" href="catalogo.php">EcoEscambo</a>
    <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
      <span class="navbar-toggler-icon"></span>
    </button>
    <div class="collapse navbar-collapse" id="navbarNav">
      <ul class="navbar-nav me-auto">
        <li class="nav-item">
          <a class="nav-link" href="catalogo.php">Catalogo</a>
        </li>
        <li class="nav-item">
          <a class="nav-link" href="meusProdutos.php">Meus Produtos</a>
        </li>
        <li class="nav-item">
          <a class="nav-link" href="cadastrarProduto.php">Cadastrar Produtos</a>
        </li>
        <li class="nav-item">
          <a class="nav-link" href="analiseOferta.php">Análise de Oferta</a>
        </li>
      </ul>
      <ul class="navbar-nav justify-content-center">
        <li class="nav-item align-items-center mt-2 me-3 ms-3">
          <span class="navbar-text">Bem-vindo(a), <?php echo "Fulano"; ?>!</span>
        </li>
        <li class="nav-item dropdown">
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false"> Conta </a>
          <ul class="dropdown-menu" aria-labelledby="navbarDropdown">
            <li><a class="dropdown-item" href="/logout.php">Logout</a></li>
          </ul>
        </li>
      </ul>
    </div>
  </div>
</nav>