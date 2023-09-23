<?php
	session_start();

	$msgErro = null;
	if( isset( $_SESSION["flash"])) {
		
		$msgErro = $_SESSION["flash"];
		unset( $_SESSION["flash"]);
	}
	$logado = isset( $_SESSION["usuario"] );

	date_default_timezone_set('America/Sao_Paulo');
	$d = date("H");
	if( $d < 12 ) $saudacao = "Bom dia";
	elseif ($d < 17) $saudacao = "Boa tarde";
	else  $saudacao = "Boa noite";
?>
<html>
<head>
	<meta charset="UTF-8" />
	<title>Bazar Tem Tudo</title>
</head>
<body>

	<div id="corpo">

		<?php require_once("cabecalho.inc"); ?>

		<?php if( $logado ) { ?>
		<span><?= $saudacao . ',' . $_SESSION["usuario"] ?></span>
		<?php } else {
				if( $msgErro != null ) {
		?>
		<p style="color: red;"><?= $msgErro ?></p>
		<?php	} ?>
		<form method="post" action="abrir_sessao.php">
			Login: <input type="text" name="login" /><br/>
			Senha: <input type="password" name="senha" /><br/>
			<button type="submit">Entrar</button>
		</form>
		<?php } ?>
	</div>

	<?php require_once("rodape.inc"); ?>

</body>
</html>
