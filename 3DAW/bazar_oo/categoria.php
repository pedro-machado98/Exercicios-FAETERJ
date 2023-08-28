<?php
require_once("./comum.php");

use Mbelo\BazarOo\Categoria;

session_start();
if( !isset( $_SESSION["usuario"] ) )
{
	Header("location: inicio.php");
}

$categorias = Categoria::findAll();
?>
<html>
<head>
	<meta charset="UTF-8" />
	<link rel="stylesheet" href="https://code.jquery.com/ui/1.11.4/themes/black-tie/jquery-ui.css" />
	<script src="https://code.jquery.com/jquery-1.12.3.js"></script>
	<script src="https://code.jquery.com/ui/1.11.4/jquery-ui.js"></script>

	<title>Bazar Tem Tudo</title>

		<script>
		$( function()
		{
			$( "#dialog-confirm" ).dialog({
				resizable: false,
				height:220,
				width:400,
				modal: true,
				autoOpen: false,
				buttons: {
					"Sim": function() {
						$( "#excluir").submit();
					},
					Cancel: function() {
						$( this ).dialog( "close" );
					}
				}
			});
		}	);

		function excluir( idCategoria )
		{
			$("#idCategoria").val( idCategoria);
			$("#dialog-confirm").dialog("open");
		}

		// function confirmaExclusao()
		// {
		// 	return window.confirm("Deseja realmente excluir?");
		// }
		</script>


</head>
<body>

	<?php require_once("cabecalho.inc"); ?>

	<div id="corpo">
		<table border="1">
			<thead>
				<tr>
					<th>Código</th>
					<th>Descrição</th>
					<th>Taxa</th>
				</tr>
			</thead>
			<tbody>
				<?php
				foreach( $categorias as $categoria) {
				?>
				<tr>
					<td><?= $categoria->getIdCategoria() ?></td>
					<td><?= $categoria->getDescricao() ?></td>
					<td><?= $categoria->getTaxa() ?></td>
					<td>
						<button onclick="excluir(<?= $categoria->getIdCategoria() ?>);">Excluir</button>
						<form action="form_alterar_categoria.php" method="get">
							<button type="submit" name="idCategoria" value="<?= $categoria->getIdCategoria() ?>">Alterar</button>
						</form>
					</td>
				</tr>
				<?php
				}
				?>
			</tbody>
		</table>

		<a href="form_categoria.php">Nova Categoria</a>
	</div>
	<form method="post" id="excluir" action="excluir_categoria.php">
		<input type="hidden" name="idCategoria" id="idCategoria"/>
	</form>


	<?php require_once("rodape.inc"); ?>

	<div id="dialog-confirm" style="display: none;" title="Deseja realmente excluir esse item?">
	  <p><span class="ui-icon ui-icon-alert" style="float:left; margin:0 7px 20px 0;"></span>O item será excluído permanentemente. Tem certeza?</p>
	</div>

</body>
</html>
