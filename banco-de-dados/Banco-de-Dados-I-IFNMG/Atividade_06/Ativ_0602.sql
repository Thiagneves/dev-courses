-- 11.Mostre o nome do projeto e quantos voluntários estão alocados em cada projeto, traga primeiro os que possuem mais voluntários.

SELECT nome_projeto, COUNT(id_voluntario) AS total_voluntarios
FROM alocacoes as a
JOIN projetos as p ON a.id = p.id
GROUP BY id_projeto
ORDER BY total_voluntarios DESC;

-- 12.Calcule a média de disponibilidade semanal dos voluntários, traga o valor arredondado em duas casas decimais.

SELECT ROUND(AVG(disponibilidade_semanal_horas), 2) 
FROM voluntarios;

-- 13.Exiba o total de voluntários cadastrados no sistema

SELECT COUNT(*)
FROM voluntarios;

-- 14. Liste o nome do projeto e a quantidade de beneficiários que participaram de cada projeto, ordenados pelos que têm a maior quantidade de beneficiários.

SELECT nome_projeto, COUNT(nome_beneficiario) as total_beneficiarios
FROM projetos as p
JOIN beneficiarios as b ON p.id = b.id
GROUP BY nome_projeto
ORDER BY total_beneficiarios DESC;
-- não entendi o erro!!!

-- 15. Traga o status do projeto e a quantidade de projetos por status, ordenados do maior para o menor.

SELECT status_projeto, COUNT(nome_projeto) AS quantidade_projetos
FROM projetos
GROUP BY status_projeto
ORDER BY quantidade_projetos DESC;

-- 17. Exiba o nome da comunidade e a quantidade de beneficiários por comunidade, ordene da maior comunidade para a menor.

SELECT comunidade, COUNT(comunidade) as quantidade_comunidade
FROM beneficiarios
GROUP by comunidade
ORDER by quantidade_comunidade DESC;

-- 18. Exiba a área de atuação e a quantidade de projetos distintos por área de atuação, trazendo as maiores áreas de atuação primeiro.

SELECT area_atuacao, COUNT(nome_projeto) AS quantidade_projetos
FROM projetos
GROUP BY area_atuacao
ORDER BY quantidade_projetos DESC;

-- 21. Exiba o nome do projeto e a quantidade de projetos, apenas dos que possuem mais de dois voluntários alocados.