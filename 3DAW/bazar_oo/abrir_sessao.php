<?php
$login = $_POST["login"];
$senha = $_POST["senha"];

if( $senha == "patasdegalinha") {

	session_start();
	$_SESSION["usuario"] = $login;
	Header("location: inicio.php");
}
else {
	
	$msgErro = "Login incorreto!";
	require_once("inicio.php");
}
