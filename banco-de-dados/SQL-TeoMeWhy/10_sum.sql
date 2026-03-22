--SOMA:
SELECT sum(QtdePontos)
    -- conta inclusive os pontos (numeros) negativos

FROM transacoes

WHERE DtCriacao >= '2025-07-01'
AND DtCriacao < '2025-08-01'
AND QtdePontos > 0;
-- precisa colocar esse AND

----------------------------

SELECT IdTransacao, QtdePontos,
       CASE 
            WHEN QtdePontos > 0 THEN QtdePontos
       END AS qtdePontosPos,
       CASE 
            WHEN QtdePontos < 0 THEN QtdePontos
        END AS qtdePontosNeg

FROM transacoes

WHERE DtCriacao >= '2025-07-01'
AND DtCriacao < '2025-08-01'

ORDER BY QtdePontos;

-----------------------------

SELECT sum(QtdePontos),

       sum(CASE 
            WHEN QtdePontos > 0 THEN QtdePontos
       END) AS qtdePontosPos,
       
       sum(CASE 
            WHEN QtdePontos < 0 THEN QtdePontos
        END) AS qtdePontosNeg

FROM transacoes

WHERE DtCriacao >= '2025-07-01'
AND DtCriacao < '2025-08-01'

ORDER BY QtdePontos;