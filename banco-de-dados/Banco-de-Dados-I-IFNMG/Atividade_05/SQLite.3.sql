-- CRIAÇÃO DA TABELA FAMILIA

CREATE TABLE familia (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  nome VARCHAR(100) NOT NULL,
  idade INTEGER NOT NULL,
  parentesco VARCHAR(50) NOT NULL,
  genero CHAR(1) NOT NULL,
  cidade_residencia VARCHAR(100) NOT NULL,
  cidade_nascimento VARCHAR(100) NOT NULL,
  profissao VARCHAR(100)
);

-- INSERÇÃO DE 10 MEMBROS DA FAMÍLIA

INSERT INTO familia (nome, idade, parentesco, genero, cidade_residencia, cidade_nascimento, profissao) VALUES
('Carlos Neves', 65, 'Pai', 'M', 'Montes Claros', 'Montes Claros', 'Engenheiro'),
('Maria Neves', 62, 'Mãe', 'F', 'Montes Claros', 'Bocaiuva', 'Professora'),
('Thiago Neves', 27, 'Eu', 'M', 'Montes Claros', 'Montes Claros', 'Programador'),
('Camila Souza', 26, 'Namorada', 'F', 'Montes Claros', 'Pirapora', 'Designer'),
('Lucas Neves', 30, 'Irmão', 'M', 'Belo Horizonte', 'Montes Claros', 'Médico'),
('Ana Neves', 34, 'Irmã', 'F', 'Montes Claros', 'Montes Claros', 'Arquiteta'),
('Pedro Neves', 12, 'Sobrinho', 'M', 'Montes Claros', 'Montes Claros', 'Estudante'),
('Beatriz Neves', 8, 'Sobrinha', 'F', 'Montes Claros', 'Montes Claros', 'Estudante'),
('João Neves', 55, 'Tio', 'M', 'Montes Claros', 'Januária', 'Advogado'),
('Clara Neves', 50, 'Tia', 'F', 'Pirapora', 'Pirapora', 'Enfermeira');

-- Dados criados pelo ChatGPTalunos

-- CRIANDO TABELA CONTATO 

CREATE TABLE contato (
  id_contato INTEGER PRIMARY KEY AUTOINCREMENT,
  id_membro INTEGER,
  telefone VARCHAR(20),
  email VARCHAR(100),
  FOREIGN KEY (id_membro) REFERENCES familia(id)
);

INSERT INTO contato (id_membro, telefone, email) VALUES
(1, '(38)99999-1111', 'carlos.neves@gmail.com'),
(2, '(38)99999-2222', 'maria.neves@gmail.com'),
(3, '(38)99999-3333', 'thiago.neves@outlook.com'),
(4, '(38)99999-4444', 'camila.souza@gmail.com'),
(5, '(31)99999-5555', 'lucas.neves@gmail.com'),
(6, '(38)99999-6666', 'ana.neves@hotmail.com'),
(7, '(38)99999-7777', 'pedro.neves@gmail.com'),
(8, '(38)99999-8888', 'beatriz.neves@gmail.com'),
(9, '(38)99999-9999', 'joao.neves@yahoo.com'),
(10, '(38)98888-0000', 'clara.neves@gmail.com');

-- Dados criados pelo ChatGPT

-- CRIANDO TABELA FORMAÇÃO 

CREATE TABLE formacao_academica (
  id_formacao INTEGER PRIMARY KEY AUTOINCREMENT,
  id_membro_familia INTEGER,
  ano_que_se_formou INTEGER,
  nivel_formacao VARCHAR(50),
  anos_estudo INTEGER,
  FOREIGN KEY (id_membro_familia) REFERENCES familia(id)
);

INSERT INTO formacao_academica (id_membro_familia, ano_que_se_formou, nivel_formacao, anos_estudo) VALUES
(1, 1980, 'Graduacao', 16),
(2, 1985, 'Graduacao', 15),
(3, 2021, 'Graduacao', 16),
(4, 2020, 'Graduacao', 15),
(5, 2018, 'Pos-graduacao', 18),
(6, 2015, 'Mestrado', 19),
(7, NULL, 'Fundamental', 6),
(8, NULL, 'Fundamental', 4),
(9, 1990, 'Graduacao', 16),
(10, 1995, 'Graduacao', 15);

-- Dados Criados pelo ChatGPT

-- Apos analizar os dados informados pelo ChatGPT vi que ele disse que eu rezido na cidade de Montes Claros, portanto:
-- C) Liste o nome, telefone, parentesco e nivel de formacao de todos os membros da família que moram na mesma cidade de residência que você

SELECT f.nome, c.telefone, f.parentesco, fa.nivel_formacao
FROM familia f
JOIN contato c ON f.id = c.id_membro
JOIN formacao_academica fa ON f.id = fa.id_membro_familia
WHERE f.cidade_residencia = 'Montes Claros'
ORDER BY f.nome ASC;

-- D) Liste todos os nomes e emails terminados em @gmail.com

SELECT f.nome, c.email
FROM familia f
JOIN contato c ON f.id = c.id_membro
WHERE c.email LIKE '%@gmail.com';

-- E) Exibe o nome e anos de estudo, mostrando os familiares que estudaram por mais anos primeiro

SELECT f.nome, fa.anos_estudo
FROM familia f
JOIN formacao_academica fa ON f.id = fa.id_membro_familia
ORDER BY fa.anos_estudo DESC;

-- F) Altere o nível de formação da pessoa mais velha da familia, para doutorado








