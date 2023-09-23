<?php
	session_start();
	if( !isset( $_SESSION["usuario"] ) )
	{
		Header("location: inicio.php");
	}
?>
<html>
<head>
	<meta charset="UTF-8" />
	<title>Bazar Tem Tudo</title>
</head>
<body>

	<?php require_once("cabecalho.inc"); ?>

	<div id="corpo">
		<table>
			<tbody>
				<tr>
					<td><img src="imgs/martelo.jpeg"/></td>
					<td>Martelo resistente. Ideal para serviços pesados.<br/>R$ 12,00</td>
				</tr>
				<tr>
					<td><img src="imgs/alicate.jpeg"/></td>
					<td>Alicate, para obras, e para corajosos, para unha.<br/>R$ 5,50</td>
				</tr>
				<tr>
					<td><img src="imgs/serrote.jpeg"/></td>
					<td>Arco de serrote com serra para serviços pesados.<br/>R$ 7,35</td>
				</tr>
			</tbody>
		</table>
	</div>

	<?php require_once("rodape.inc"); ?>

</body>
</html>
