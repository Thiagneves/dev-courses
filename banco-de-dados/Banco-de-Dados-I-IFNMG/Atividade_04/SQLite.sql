-- criando a tabela
CREATE TABLE familia (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    nome VARCHAR(50) NOT NULL,
    idade INTEGER not NULL,
    parentesco VARCHAR(50) NOT NULL,
    genero VARCHAR(10) NOT NULL,
    cidade_onde_vive VARCHAR(50) NOT NULL,
    naturalidade VARCHAR(50) NOT NULL,
    profissao VARCHAR(50) 
);

--inserir dados 
INSERT INTO familia (nome, idade, parentesco, genero, cidade_onde_vive, naturalidade, profissao) VALUES
    ('Thiago', '21', 'irmão do meio', 'M', 'Almenara', 'Almenara', 'Estuda e trabalha'),
    ('Kamila', '19', 'irmã mais nova', 'F', 'Belo Horizonte', 'Rio de Janeiro', 'estudante'),
    ('Paulo', '17', 'irmão mais novo', 'M', 'Belo Horizonte', 'Almenara', 'estudante'),
    ('Gabriel Silva', '26', 'irmão mais velho', 'M', 'São Paulo', 'Almenara', 'Trabalha'),
    ('Pedro Luiz', '38', 'Filho de outra mãe', 'M', 'Belo Horizonte', 'Francisco Badaro', ' '),
    ('Luiz', '57', 'Pai', 'M', 'Almenara', 'Almenara', 'Professor'),
    ('Fernanda', '38', 'Mãe', 'F', 'Almenara', 'Almenara', ' ');

SELECT * FROM familia

--1. Quem é o membro mais novo e quem é o mais velho da sua família?
SELECT nome, idade
FROM familia
WHERE idade = (SELECT MIN(idade) FROM familia);

Select nome, idade
FROM familia
WHERE idade = (SELECT MAX(idade) FROM familia);

--2. Qual é a idade média dos membros da família?
SELECT idade, ROUND(AVG(idade),2) from familia

--3. Liste o nome e profissão das pessoas maiores de 18 anos?
SELECT nome, idade
FROM familia
WHERE idade >= 18;

--4. Quantos homens e quantas mulheres há na sua família?
select nome, genero
FROM familia
WHERE genero = 'F';

--5. Quais as diferentes profissões aparecem entre os membros da família?
SELECT nome, profissao
FROM familia
WHERE profissao != NULL OR profissao != ' ';

--6. Quantas pessoas têm mais de 60 anos?
SELECT idade
FROM familia
WHERE idade >= 60;

--7. Liste os nomes e idade dos membros menores de 18 anos.
SELECT nome, idade
FROM familia
WHERE idade < 18;

--8. Liste os nomes dos membros cuja cidade de residência contém a palavra “Belo”
SELECT nome, cidade_atual_residente
FROM familia
WHERE cidade_atual_residente LIKE '%Belo%';

--9. Quantos membros da família moram na mesma cidade em que nasceram?
SELECT nome, cidade_atual_residente, naturalidade
FROM familia
WHERE cidade_atual_residente = naturalidade;

--10. Quantos membros possuem profissão cadastrada (não nula)?
SELECT *
FROM familia
WHERE profissao IS NOT NULL;