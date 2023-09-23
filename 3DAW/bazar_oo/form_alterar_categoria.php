<?php
session_start();

$_SESSION["idCategoria"] = $_GET["idCategoria"];

var_dump($_SESSION["idCategoria"]);

if( !isset( $_SESSION["usuario"] ) ) {
	
	Header("location: inicio.php");
}
?>
<html>
<head>
	<meta charset="UTF-8" />
	<title>Bazar Tem Tudo</title>
</head>
<body>
	<script>
	function validar()
	{
		var descricao = document.querySelector("#descricao").value;

		if( !/[A-Z].....[.]*/.test( descricao))
		{
			alert("Descrição deve começar em maiúscula e ter ao menos 6 caracteres");
			return false;
		}
		return true;
	}
	</script>

	<?php require_once("cabecalho.inc"); ?>

	<div id="corpo">
		

		<form action="alterar_categoria.php" method="post" onsubmit="return validar()">
			<span>Descrição:</span><input type="text" name="descricao" id="descricao" maxlength="40">
			<br/>
			<span>Taxa:</span><input type="text" name="taxa" maxlength="6">

			<button type="submit">Enviar</button>


		</form>

	</div>

	<?php require_once("rodape.inc"); ?>

</body>
</html>
