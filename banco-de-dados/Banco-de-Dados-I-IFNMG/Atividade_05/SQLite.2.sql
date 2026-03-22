-- a) CRIAÇÃO DA TABELA "alunos"

CREATE TABLE alunos (
  id_aluno INTEGER PRIMARY KEY AUTOINCREMENT,
  nome VARCHAR(100),
  idade INTEGER,
  anos_matricula INTEGER,
  plano_treino VARCHAR(50)
);

-- b) DADOS

INSERT INTO alunos (nome, idade, anos_matricula, plano_treino) VALUES
('João Silva', 25, 3, 'Musculação'),
('Maria Oliveira', 30, 1, 'Pilates'),
('Lucas Souza', 22, 2, 'Crossfit'),
('Ana Pereira', 28, 4, 'Musculação'),
('Beatriz Martins', 35, 1, 'Pilates'),
('Carlos Andrade', 40, 5, 'Crossfit');

-- c) Alunos com mais de 2 anos de matrícula (ordem alfabética)

SELECT nome, anos_matricula
FROM alunos
WHERE anos_matricula > 2
ORDER BY nome ASC;

-- d) Alunos entre 30 e 40 anos (ordenados do mais velho ao mais novo)

SELECT nome, idade, plano_treino
FROM alunos
WHERE idade BETWEEN 30 AND 40
ORDER BY idade DESC;

-- e) Excluir o registro da aluna Beatriz Martins

DELETE FROM alunos
WHERE nome = 'Beatriz Martins';
