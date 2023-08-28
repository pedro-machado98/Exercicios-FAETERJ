<?php
session_start();

$logado = isset( $_SESSION["usuario"] );

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
				if( isset( $msgErro ) ) {
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
