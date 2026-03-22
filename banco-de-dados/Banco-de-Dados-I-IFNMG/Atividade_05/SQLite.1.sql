-- CRIAÇÃO DAS TABELAS

CREATE TABLE jogos (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  nome_jogo VARCHAR(100),
  genero VARCHAR(100)
);

CREATE TABLE avaliacoes (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  jogo_id INTEGER,
  nota FLOAT,
  comentario VARCHAR(255),
  FOREIGN KEY (jogo_id) REFERENCES jogos(id)
);

-- DADOS

INSERT INTO jogos (nome_jogo, genero) VALUES
('The Legend of Zelda', 'Aventura'),
('Super Mario Odyssey', 'Plataforma'),
('FIFA 2024', 'Esportes');

INSERT INTO avaliacoes (jogo_id, nota, comentario) VALUES
(1, 9.5, 'Excelente jogo de aventura!'),
(1, 9.0, 'Mundos vastos e desafiantes.'),
(2, 8.5, 'Ótima jogabilidade.'),
(2, 8.0, 'Divertido, mas um pouco curto.'),
(3, 7.5, 'Boa simulação de futebol.'),
(3, 7.0, 'Precisa de mais melhorias.');

-- CONSULTAS

-- a) Quais jogos têm avaliações com notas acima de 8?
SELECT j.nome_jogo, a.nota
FROM jogos j
JOIN avaliacoes a ON j.id = a.jogo_id
WHERE a.nota > 8;

-- b) Quantos comentários o gênero Aventura recebeu?
SELECT COUNT(a.id) AS qtd_comentarios
FROM jogos j
JOIN avaliacoes a ON j.id = a.jogo_id
WHERE j.genero = 'Aventura';

-- c) Exiba os nomes dos jogos, nota e comentário por ordem decrescente de nota
SELECT j.nome_jogo, a.nota, a.comentario
FROM jogos j
JOIN avaliacoes a ON j.id = a.jogo_id
ORDER BY a.nota DESC;
