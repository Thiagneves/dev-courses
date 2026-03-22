<<<<<<< HEAD
/*
 * Intervalos:
 * de 0 a 500       -> Ponei
 * de 501 a 1000    -> Ponei Premium
 * de 1001 a 5000   -> Mago Aprendiz
 * de 5001 a 10000  -> Mago Mestre
 * mais de 10000    - Mago Supremo
*/

SELECT IdCliente, QtdePontos,
    CASE 
        WHEN QtdePontos <= 500 THEN 'Ponei'
        WHEN QtdePontos > 500 AND QtdePontos <= 1000 THEN 'Ponei Premium'
        WHEN QtdePontos > 1000 AND QtdePontos <= 5000 THEN 'Mago Aprendiz'
        WHEN QtdePontos > 5000 AND QtdePontos <= 10000 THEN 'Mago Mestre'
        ELSE 'Mago Supremo'
    END AS nomeGrupo

FROM clientes

ORDER BY QtdePontos DESC
=======
/*
 * Intervalos:
 * de 0 a 500       -> Ponei
 * de 501 a 1000    -> Ponei Premium
 * de 1001 a 5000   -> Mago Aprendiz
 * de 5001 a 10000  -> Mago Mestre
 * mais de 10000    - Mago Supremo
*/

SELECT IdCliente, QtdePontos,
    CASE 
        WHEN QtdePontos <= 500 THEN 'Ponei'
        WHEN QtdePontos > 500 AND QtdePontos <= 1000 THEN 'Ponei Premium'
        WHEN QtdePontos > 1000 AND QtdePontos <= 5000 THEN 'Mago Aprendiz'
        WHEN QtdePontos > 5000 AND QtdePontos <= 10000 THEN 'Mago Mestre'
        ELSE 'Mago Supremo'
    END AS nomeGrupo

FROM clientes

ORDER BY QtdePontos DESC
>>>>>>> 255d4b9500b2eea5e532ec1910e2ba1b61dd4d7e
