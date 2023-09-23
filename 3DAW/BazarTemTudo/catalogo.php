<!DOCTYPE html>

<html lang="pt-BR">

<head>
	<title>Bazar Tem Tudo - Catálogo de produtos</title>
</head>

<body>
	<?php include_once 'header.php'; ?>
	<main>
		<h2>Conheça nossos produtos</h2>
		<ul>
			<?php
				// Array com informações dos produtos
				$produtos = array(
					array(
						"nome" => "Cadeira",
						"descricao" => "Cadeira de madeira com estofado",
						"preco" => 199.99
					),
					array(
						"nome" => "Mesa",
						"descricao" => "Mesa de jantar com tampo de vidro",
						"preco" => 599.99
					),
					array(
						"nome" => "Sofá",
						"descricao" => "Sofá retrátil de 3 lugares",
						"preco" => 1499.99
					)
				);
				// Loop para exibir cada produto
				foreach ($produtos as $produto) {
					echo '<li>';
					echo '<h3>' . $produto['nome'] . '</h3>';
					echo '<p>' . $produto['descricao'] . '</p>';
					echo '<p>Preço: R$ ' . number_format($produto['preco'], 2, ',', '.') . '</p>';
					echo '</li>';
				}
			?>
		</ul>
	</main>
	<?php include_once 'footer.php'; ?>
</body>

</html>