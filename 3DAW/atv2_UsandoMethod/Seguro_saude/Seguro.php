<?php

    //variaveis para manipular
    $valorInicial = 200;
    $valorFinal;

    // obtem dados do formulário html
    $nomeCompleto = filter_input(INPUT_POST, "nomeCompleto");
    $nomeCompleto = htmlentities($nomeCompleto);
    $idade = filter_input(INPUT_POST, "faixaEtaria", FILTER_DEFAULT, FILTER_REQUIRE_ARRAY);
    $doencaPrevia = filter_input(INPUT_POST, "doencaPrevia");

    for ($i = 0 ; $i < $idade[0] ; $i++) {

        $valorInicial = $valorInicial + ($valorInicial*0.5);

    }
    $valorFinal = $valorInicial;

    if (isset($doencaPrevia)) {
        
        $valorFinal = $valorInicial + ($valorInicial*0.3);

    }

?>


<!DOCTYPE html>

<html lang="pt-BR">

  <head>

        <meta charset="utf-8">

        <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
        <meta name="viewport" content="width=device-width, initial-scale=1">
    
        <title>Valor do Seguro de Saude</title>
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.5/css/bootstrap.min.css">

    </head>


    <body>

        <div class="container">

            <h2>Segue abaixo o valor do seguro.</h2>

            <table class="table table-bordered" style="width: 50%">

                <tr>
                    <td>Nome completo</td>
                    <td><?= $nomeCompleto; ?></td>
                </tr>

                <tr>
                    <td>Tem doença previa?</td>
                    <td><?php if ($doencaPrevia) {echo "Sim";} else {echo "Não"; } ?></td>
                </tr>

                <tr>
                    <td>Valor do seguro</td>
                    <td><?php echo "R$ " . $valorFinal  ?></td>
                </tr>

            </table>

        </div>

    </body>

</html>