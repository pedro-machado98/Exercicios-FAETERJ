<?php
require_once("./comum.php");
use Mbelo\BazarOo\Categoria;

session_start();

$id = $_SESSION["idCategoria"];
$descricao = $_POST["descricao"];
$taxa = $_POST["taxa"];

$categoria = Categoria::findById($id);

$categoria->alterar($descricao, $taxa, $id);

Header("Location: categoria.php");
