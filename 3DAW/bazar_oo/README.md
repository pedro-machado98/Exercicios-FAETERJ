# BAZAR_OO

## Instalando o Composer

- Instalar o composer.phar na raiz do projeto (https://getcomposer.org/download/)

## MySQL docker container

```sh
docker run --rm --name bazar-oo -p 3306:3306 -e MYSQL_ROOT_PASSWORD=vertrigo -d mariadb:10.4.13
mysql --protocol=tcp -u root -p
```

## Preparar banco

- `scripts.sql` dispnível na raiz do projeto

## Rodar servidor local

`php -S localhost:8080`
