-- 1. Liste o nome e a habilidade dos voluntários que têm mais de 10 horas de disponibilidade semanal

SELECT * 
FROM voluntarios
WHERe disponibilidade_semanal_horas > 10
ORDER by disponibilidade_semanal_horas DESC;

-- 2. Mostre o nome e o status dos projetos que estão com status “Ativo”

SELECT nome_projeto, status_projeto
FROM projetos
WHERE status_projeto = 'Ativo';

-- 3. Quantos projetos atualmente estão com o status Ativo?

SELECT COUNT(*)
FROM projetos
WHERE status_projeto = 'Ativo';

-- 8. Liste o nome e o email dos voluntários cujo nome começa com a letra “S”

SELECT nome_voluntario, email
FROM voluntarios
WHERE email LIKE 'S%';

-- 9. Mostre o nome e a comunidade dos beneficiários em ordem alfabética.

SELECT nome_beneficiario, comunidade
FROM beneficiarios
ORDER BY nome_beneficiario;

-- 10. Liste o nome e o status dos projetos com status diferente de “Concluído”

SELECT nome_projeto, status_projeto
FROM projetos
WHERE status_projeto != 'Concluído';