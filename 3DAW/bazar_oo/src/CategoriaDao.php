<?php
namespace Mbelo\BazarOo;

use \Mbelo\BazarOo\Banco;

use PDO;

trait CategoriaDao {
  
  public static function rowMapper($idCategoria, $descricao, $taxa) {

    return new Categoria( $idCategoria, $descricao, $taxa);
  }

  public static function findAll() {

      $pdo = Banco::obterConexao();
      $statement = $pdo->prepare("SELECT idCategoria,descricao,taxa FROM Categoria");
      $statement->execute();
      return $statement->fetchAll( PDO::FETCH_FUNC, "Mbelo\\BazarOo\\CategoriaDao::rowMapper" );
  }

  public static function findById( $id) {

    $pdo = Banco::obterConexao();
    $statement = $pdo->prepare("SELECT idCategoria,descricao,taxa FROM Categoria where idCategoria=:id");
    $statement->bindParam(":id", $id, PDO::PARAM_INT);
    $statement->execute();

    $reg = $statement->fetch();
    return CategoriaDao::rowMapper( $reg["idCategoria"], $reg["descricao"], $reg["taxa"]);
  }

  public static function add( Categoria $categoria) {

    $pdo = Banco::obterConexao();
    $statement = $pdo->query("SELECT max(idCategoria) as maior_id FROM Categoria");

    $registro = $statement->fetch();

    $maior_id = $registro["maior_id"];

    if( $maior_id == null ) $novo_id = 1;
    else $novo_id = $maior_id + 1;

    $insere = $pdo->prepare("insert into Categoria (idCategoria, descricao, taxa) values (:id, :descricao, :taxa)");
    $insere->bindParam( ":id", $novo_id, PDO::PARAM_INT);
    $insere->bindParam( ":descricao", $categoria->getDescricao(), PDO::PARAM_STR);
    $insere->bindParam( ":taxa", str_replace( ',','.', $categoria->getTaxa() ), PDO::PARAM_STR);
    return $insere->execute();
  }

  public function excluir() {

    $id = $this->getIdCategoria();
    $pdo = Banco::obterConexao();
    $excluir = $pdo->prepare("delete from Categoria where idCategoria=:id");
    $excluir->bindParam(":id", $id, PDO::PARAM_INT);
    $excluir->execute();
  }

  public function alterar($descricao, $taxa, $id) {
    $pdo = Banco::obterConexao();
    $alterar = $pdo->prepare("UPDATE `categoria` SET `descricao` = :descricao, `taxa` = :taxa WHERE `categoria`.`idCategoria` = :id");
    $alterar->bindParam(":descricao", $descricao, PDO::PARAM_STR);
    $alterar->bindParam(":taxa", $taxa, PDO::PARAM_STR);
    $alterar->bindParam(":id", $id, PDO::PARAM_INT);
    $alterar->execute();
  }
}