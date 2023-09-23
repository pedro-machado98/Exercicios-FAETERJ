<?php

define('REDIRECIONA_LOGIN', 'Location: ../index.php');

$usuario = filter_input(INPUT_POST, "usuario");
$usuario = htmlentities($usuario);
$senha = filter_input(INPUT_POST, "senha");
$senha = htmlentities($senha);


if (isset($usuario) && isset($senha)) {

    if (!empty($usuario) && !empty($senha)) {

        // Usuário e senha foram preenchidos
        require_once 'conexaoDB.php';
        require_once 'UsuarioClass.php';

        $u = new Usuario();

        if ($u->login($usuario, $senha) == true) {

            if (isset($_SESSION['idUser'])) {

                header("Location: ../catalogo.php");
            } else {

                header(REDIRECIONA_LOGIN);
            }
        } else {

            header(REDIRECIONA_LOGIN);
        }

        $u->login($usuario, $senha);
    } else {

        header(REDIRECIONA_LOGIN);
    }
} else {

    header(REDIRECIONA_LOGIN);
}
