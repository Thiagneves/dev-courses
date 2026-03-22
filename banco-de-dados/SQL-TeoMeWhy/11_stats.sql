SELECT round(avg(QtdePontos),2),
       1. * sum(QtdePontos) / count(IdCliente)
       -- esse 1. * faz o resultado virar floot
FROM clientes;

------------------------

SELECT min(QtdePontos),
       max(QtdePontos)
FROM clientes;

-- Quantas pessaos tem Twiter e Email:

SELECT sum(FlTwitch), sum(FlEmail)
FROM clientes;