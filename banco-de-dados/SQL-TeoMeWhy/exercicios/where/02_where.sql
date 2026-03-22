<<<<<<< HEAD
-- Lista de pedidos realizados no fim de semana;

SELECT  IdTransacao, 
        DtCriacao, 
        strftime('%w', datetime(substr(DtCriacao, 1, 19))) AS DiaSemana

FROM transacoes

WHERE DiaSemana IN ('6','0')
=======
-- Lista de pedidos realizados no fim de semana;

SELECT  IdTransacao, 
        DtCriacao, 
        strftime('%w', datetime(substr(DtCriacao, 1, 19))) AS DiaSemana

FROM transacoes

WHERE DiaSemana IN ('6','0')
>>>>>>> 255d4b9500b2eea5e532ec1910e2ba1b61dd4d7e
