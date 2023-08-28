<!DOCTYPE html>

<html>

    <head>

    </head>

    <body>
	
        <?php
		
		for ($i = 1 ; $i <= 100 ; $i++){
            if ( $i % 5 == 0 || $i == 1){
                echo "$i" ."<br>";
            }
		}

        ?>
		
    </body>
    
</html>