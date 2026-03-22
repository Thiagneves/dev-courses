<<<<<<< HEAD
SELECT *
FROM clientes
ORDER BY QtdePontos
-- do menor para o maior

SELECT *
FROM clientes
ORDER BY QtdePontos DESC
-- do maior para o menor

SELECT *

FROM clientes

ORDER BY QtdePontos DESC
-- Primeiro ordenamos

LIMIT 10
-- Depois determinamos a quantidade
-- LIMIT sempre pega os n primeiros

-- Eu quero saber quem sao os clientes mais antigos e que tem mais pontos

SELECT * 
FROM clientes
ORDER BY DtCriacao ASC, QtdePontos DESC

/*
 * quando nao ha nada na frente da tabela no ORDER BY 
 * seria o mesmo que dizer que tem um ASC na frente, 
 * nao faz diferenca colocar 
*/

-- eu quero saber quem foram os primeiros clientes (os mais antigos), 
-- os que tem maior quantidade de pontos e que tem twitch

SELECT * 

FROM clientes

WHERE FlTwitch = 1
-- notamos que o WHERE vem antes do ORDER BY

=======
SELECT *
FROM clientes
ORDER BY QtdePontos
-- do menor para o maior

SELECT *
FROM clientes
ORDER BY QtdePontos DESC
-- do maior para o menor

SELECT *

FROM clientes

ORDER BY QtdePontos DESC
-- Primeiro ordenamos

LIMIT 10
-- Depois determinamos a quantidade
-- LIMIT sempre pega os n primeiros

-- Eu quero saber quem sao os clientes mais antigos e que tem mais pontos

SELECT * 
FROM clientes
ORDER BY DtCriacao ASC, QtdePontos DESC

/*
 * quando nao ha nada na frente da tabela no ORDER BY 
 * seria o mesmo que dizer que tem um ASC na frente, 
 * nao faz diferenca colocar 
*/

-- eu quero saber quem foram os primeiros clientes (os mais antigos), 
-- os que tem maior quantidade de pontos e que tem twitch

SELECT * 

FROM clientes

WHERE FlTwitch = 1
-- notamos que o WHERE vem antes do ORDER BY

>>>>>>> 255d4b9500b2eea5e532ec1910e2ba1b61dd4d7e
ORDER BY DtCriacao ASC, QtdePontos DESC