<?php
require_once("./comum.php");

use Mbelo\BazarOo\Categoria;

$descricao = $_POST["descricao"];
$taxa = $_POST["taxa"];

$categoria = new Categoria( null, $descricao, $taxa);

$resultado = Categoria::add( $categoria);

if( $resultado ) {

	header("Location: categoria.php?sucesso=Categoria " . urlencode($descricao) . " criada com sucesso." );
}
else {

	echo "erro terrivel";
}


