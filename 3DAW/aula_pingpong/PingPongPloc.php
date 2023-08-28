<!DOCTYPE html>

<html>

    <head>

    </head>

    <body>
	    <ol>
        <?php
		
		for ($i = 1 ; $i <= 100 ; $i++){
		    
		    
		    
            if ( $i % 3 == 0 && $i % 5 == 0){
                
                $palavra = "<i>" . "ploc" . "</i>";
                
            } else {
                
                if ( $i % 3 == 0){
                    
                    $palavra = "<b>" . "ping" . "</b>";
                    
                } else {
                    
                    if ( $i % 5 == 0){
                        
                        $palavra = "<u>" . "pong" . "</u>";
                        
                    } else {
                        $palavra = "ok";
                    }
                }
            }
            
            echo "<li>" . $palavra . "</li>";
		}

        ?>
		</ol>
    </body>
    
</html>