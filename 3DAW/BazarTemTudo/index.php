<?php
	date_default_timezone_set('America/Sao_Paulo');
	$hora = date('H');
	if ($hora >= 6 && $hora < 12) {
		$mensagem = "Bom dia";
	} elseif ($hora >= 12 && $hora < 18) {
		$mensagem = "Boa tarde";
	} else {
		$mensagem = "Boa noite";
	}
?>
<!DOCTYPE html>

<html lang="pt-BR">

    <head>
        <title>Bazar Tem Tudo - Página inicial</title>
    </head>

    <body>
        <?php include_once 'header.php'; ?>
        <main>
            <h2><?php echo $mensagem; ?>, bem-vindo ao Bazar Tem Tudo!</h2>
            <p>Navegue em nossa seleção de produtos para encontrar o que precisa.</p>
        </main>
        <?php include_once 'footer.php'; ?>
    </body>
    
</html>