<?php
require_once("./comum.php");

use Mbelo\BazarOo\Categoria;

$id = $_POST["idCategoria"];

$categoria = Categoria::findById( $id);

$categoria->excluir();

Header("Location: categoria.php");
