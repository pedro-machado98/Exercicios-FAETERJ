<?php
namespace Mbelo\BazarOo;

use PDO;

abstract class Banco {

  /**
  * Retorne um objeto PDO conectado
  * https://stackoverflow.com/questions/20723803/pdoexception-sqlstatehy000-2002-no-such-file-or-directory
  */
  public static function obterConexao() {
    $pdo = new PDO('mysql:host=127.0.0.1;dbname=bazar;charset=utf8mb4', 'root', '');
    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    return $pdo;
  }
}
