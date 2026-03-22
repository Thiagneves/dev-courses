<<<<<<< HEAD
-- Metodo para criar uma coluna e podemos alterar algo dela, no exemplo estamos adicionando 10 pontos na coluna QtdePontos

SELECT *,
        QtdePontos + 10

FROM clientes

-------------------------------------

SELECT IdCliente, 
        QtdePontos,
        QtdePontos + 10,
        QtdePontos * 2

FROM clientes

-- Como renomear uma coluna:

SELECT IdCliente, 
        QtdePontos,
        QtdePontos + 10 AS ComMais10,
        QtdePontos * 2

FROM clientes

/*
Mesmo o AS não sendo obrigatorio é recomendado colocarmos
*/

SELECT IdCliente, 
        DtCriacao,
        datetime(DtCriacao),
        substr(DtCriacao, 1, 10),
        datetime( substr(DtCriacao, 1, 10) ) AS DataCriacao,
        strftime('%w', datetime( substr(DtCriacao, 1, 19) ) ) AS diaSemana
        -- 0 = Domingo, 1 = Segunda, ...

FROM clientes

=======
-- Metodo para criar uma coluna e podemos alterar algo dela, no exemplo estamos adicionando 10 pontos na coluna QtdePontos

SELECT *,
        QtdePontos + 10

FROM clientes

-------------------------------------

SELECT IdCliente, 
        QtdePontos,
        QtdePontos + 10,
        QtdePontos * 2

FROM clientes

-- Como renomear uma coluna:

SELECT IdCliente, 
        QtdePontos,
        QtdePontos + 10 AS ComMais10,
        QtdePontos * 2

FROM clientes

/*
Mesmo o AS não sendo obrigatorio é recomendado colocarmos
*/

SELECT IdCliente, 
        DtCriacao,
        datetime(DtCriacao),
        substr(DtCriacao, 1, 10),
        datetime( substr(DtCriacao, 1, 10) ) AS DataCriacao,
        strftime('%w', datetime( substr(DtCriacao, 1, 19) ) ) AS diaSemana
        -- 0 = Domingo, 1 = Segunda, ...

FROM clientes

>>>>>>> 255d4b9500b2eea5e532ec1910e2ba1b61dd4d7e
