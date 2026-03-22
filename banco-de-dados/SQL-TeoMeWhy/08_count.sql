<<<<<<< HEAD
SELECT count(*), 
       count(1), 
       count(IdCliente),
       count(DtCriacao)

FROM clientes;
=======

SELECT count(*), 
       count(1), 
       count(IdCliente),
       count(DtCriacao)

FROM clientes;

--------------

SELECT DISTINCT FlTwitch, FlEmail
FROM clientes;

---------------

SELECT count(DISTINCT IdCliente)
FROM clientes;

---------------

SELECT count(*),
       count(DISTINCT IdCliente) --Quantidade de clientes q transacionaram

FROM transacoes

WHERE DtCriacao >= '2025-07-01'
  AND DtCriacao <  '2025-08-01'

ORDER BY DtCriacao DESC
>>>>>>> 255d4b9500b2eea5e532ec1910e2ba1b61dd4d7e
