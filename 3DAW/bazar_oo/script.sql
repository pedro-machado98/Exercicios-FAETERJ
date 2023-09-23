drop database if exists bazar;
create database bazar;
use bazar;
create table Categoria
(
 idCategoria  integer primary key,
 descricao  varchar(40) not null,
 taxa   numeric(5,2) not null
);

insert into Categoria values (1,'Ferragens',18.0);
insert into Categoria values (2,'Elétrica',12.0);

create table Produto
(
 idProduto  integer  primary key,
 idCategoria integer  not null,
 descricao varchar(40)  not null,
 preco  numeric(12,2) not null,
 dt_cadastro timestamp default CURRENT_TIMESTAMP,
 disponivel boolean  not null default true
);
alter table Produto
 add foreign key fk_categoria (idCategoria)
references Categoria (idCategoria);

insert into Produto (idProduto, idCategoria, descricao, preco)
 values (1, 1, 'Janela 40cm x 40cm', 80.52);
insert into Produto (idProduto, idCategoria, descricao, preco)
        values (2, 1, 'Porta com grade padrão', 205.40);
insert into Produto (idProduto, idCategoria, descricao, preco)
        values (3, 2, 'Fio bitola 5 por metro', 5.11);
insert into Produto (idProduto, idCategoria, descricao, preco)
        values (4, 2, 'Tomada 2P 4x4', 13.31);