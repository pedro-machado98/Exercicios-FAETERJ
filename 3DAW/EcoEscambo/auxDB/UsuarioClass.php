<?php

session_start();
class Usuario
{
    
    public function login($usuario, $senha)
    {
        
        global $pdo;

        $sql = "SELECT * FROM usuarios WHERE usuario = :usuario AND senha = :senha";
        $sql =  $pdo->prepare($sql);
        $sql->bindValue("usuario", $usuario);
        $sql->bindValue("senha", $senha);
        $sql->execute();

        if ($sql->rowCount() > 0) {

            $dado = $sql->fetch();

            $_SESSION['idUser'] = $dado['idusuario'];

            return true;
        } else {

            return false;
        }
    }
}
