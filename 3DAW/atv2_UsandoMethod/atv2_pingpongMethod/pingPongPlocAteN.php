<!DOCTYPE html>

<html lang="pt-BR">

    <head>
        <link rel='stylesheet' type='text/css' href='style.css'>

        <title>Ping Pong Ploc</title>

    </head>

    <body>
            <?php

                function numeroParaTexto($n)
                {
                    
                    for ($i = 1; $i <= $n; $i++) {
                        
                        echo "$i.";
                        
                        if ($i % 3 == 0 && $i % 5 == 0) {
                            
                            echo "<span class='sublinhado'>ploc</span><br/>";

                        } else {
                            
                            if ($i % 3 == 0) {
                                echo "<span class='negrito'>ping</span><br/>";
                                
                            } else {
                                
                                if ($i % 5 == 0) {
                                    
                                    echo "<span class='italico'>pong</span><br/>";
                                    
                                } else {
                                    
                                    echo "ok<br/>";
                                    
                                }
                                
                            }
                        }
                    }
                    
                }

                $n = filter_input(INPUT_GET, "numeroDeLinhas", FILTER_SANITIZE_NUMBER_INT);

                if (isset($n) && is_numeric($n)) {

                    numeroParaTexto($n);

                } else {

                    echo "Entrada errada amigo.";
                    
                }

            ?>

    </body>

</html>