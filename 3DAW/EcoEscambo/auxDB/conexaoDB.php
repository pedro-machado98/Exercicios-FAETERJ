<?php

// session_start();

$localhost = "localhost";
$user = "root";
$passw = "";
$banco = "ecoescambo";

global $pdo;


try {

    $passw = htmlspecialchars($passw, ENT_QUOTES); // protege a variável $passw usando htmlspecialchars
    $pdo = new PDO("mysql:dbname=" . $banco . "; host=" . $localhost, $user, $passw);
    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {

    echo "ERRO" . $e->getMessage();
    exit;
}
