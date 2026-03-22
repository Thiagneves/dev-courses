<<<<<<< HEAD
-- Listar todas as transações adicionando uma coluna nova sinalizando “alto”, “médio” e “baixo” para o valor dos pontos [<10 ; <500; >=500]

SELECT  IdCliente, 
        QtdePontos < 10 AS baixo,
        QtdePontos >= 10 AND QtdePontos <500 AS medio,
        QtdePontos >=500 AS alto

FROM transacoes

=======
-- Listar todas as transações adicionando uma coluna nova sinalizando “alto”, “médio” e “baixo” para o valor dos pontos [<10 ; <500; >=500]

SELECT  IdCliente, 
        QtdePontos < 10 AS baixo,
        QtdePontos >= 10 AND QtdePontos <500 AS medio,
        QtdePontos >=500 AS alto

FROM transacoes

>>>>>>> 255d4b9500b2eea5e532ec1910e2ba1b61dd4d7e
