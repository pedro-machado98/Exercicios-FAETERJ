<?php
	$login = filter_input( INPUT_POST, "login", FILTER_SANITIZE_STRING);
	$senha = filter_input( INPUT_POST, "senha", FILTER_SANITIZE_STRING);

	session_start();
	if( $senha === "patasdegalinha")
	{
		
		$_SESSION["usuario"] = $login;
	}
	else
	{
		$_SESSION["flash"] = "Login incorreto!";
	}
	Header("location: inicio.php");
