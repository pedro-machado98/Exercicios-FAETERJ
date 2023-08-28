<?php
namespace Mbelo\BazarOo;

use Mbelo\BazarOo\CategoriaDao;

class Categoria {
  
  use CategoriaDao;

  private $idCategoria;
  private $descricao;
  private $taxa;

  public function __construct( $idCategoria, $descricao, $taxa)
  {
    $this->idCategoria = $idCategoria;
    $this->descricao = $descricao;
    $this->taxa = $taxa;
  }

  public function getIdCategoria()
  {
    return $this->idCategoria;
  }

  public function getDescricao()
  {
    return $this->descricao;
  }

  public function getTaxa()
  {
    return $this->taxa;
  }
}
