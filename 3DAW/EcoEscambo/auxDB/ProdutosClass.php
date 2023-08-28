<?php

class Produto
{
    public function getProdutos()
    {
        global $pdo;

        $consulta = $pdo->prepare("SELECT * FROM produtos");
        $consulta->execute();
        return $consulta;

    }

    public function getProdutosUsuario($idusuario)
    {
        global $pdo;
        $consulta = "SELECT * FROM produtos WHERE idusuario = :idusuario";
        $consulta = $pdo->prepare($consulta);
        $consulta->bindParam(":idusuario", $idusuario);
        
        $consulta->execute();
        return $consulta;

    }

    public function cadastrarProduto($idusuario, $produto, $descricao, $imgBlob, $imgName)
    {
        global $pdo;
        
        $consulta = "INSERT INTO `produtos` (`idproduto`, `produto`, `descricao`, `situacao`, `imgProduto`, `nomeDocumentoImg`, `idusuario`)
                 VALUES ('', :produto, :descricao, 1 , :imgProduto, :nomeArquivoImg , :idusuario)";

        $consulta = $pdo->prepare($consulta);
        $consulta->bindParam(":produto", $produto);
        $consulta->bindParam(":descricao", $descricao);
        $consulta->bindParam(":imgProduto", $imgBlob);
        $consulta->bindParam(":nomeArquivoImg", $imgName);
        $consulta->bindParam(":idusuario", $idusuario);

        $consulta->execute();
        return $consulta;
    }
    
    public function excluirProduto($idProduto)
    {
        global $pdo;

        $consulta = "DELETE FROM produtos WHERE idproduto = :idProduto";

        $consulta = $pdo->prepare($consulta);

        $consulta->bindValue("idProduto", $idProduto);
        $consulta->execute();
        return $consulta;
    }

    public function alterarProduto($idusuario)
    {
    }

    public function lerProduto($idusuario)
    {
    }

    public function trocarProduto($idusuario)
    {
    }

}
