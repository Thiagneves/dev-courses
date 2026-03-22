-- 1.Liste o nome e o CPF de todos os clientes que possuem mais de uma conta cadastrada.

SELECT nome_cliente, cpf_cliente
FROM cliente 
JOIN conta on conta.id_conta = cliente.id_cliente
GROUP by cliente.id_cliente, cliente.nome_cliente, cliente.cpf_cliente
HAVING COUNT(*) > 1;

-- 2. Mostre o total de empréstimos realizados por tipo (Pessoal, Empresarial, Imobiliário, etc).

SELECT tipo AS tipo_emprestimo, COUNT(*) AS total_emprestimos
FROM cedula_credito
GROUP BY tipo
ORDER BY total_emprestimos DESC;

-- 5. Mostre todos os clientes que possuem pelo menos um empréstimo com status “Atrasado”.

SELECT cliente.nome_cliente, cliente.cpf_cliente
FROM cliente
JOIN cedula_credito ON cliente.id_cliente = cedula_credito.id_cliente
WHERE cedula_credito.status_cedula = 'Atrasado';

-- 6. Liste o nome do funcionário e a quantidade total de empréstimos sob sua responsabilidade.

SELECT assessor.nome, COUNT(cedula_credito.id_cedula) AS total_emprestimos
FROM assessor
LEFT JOIN cedula_credito ON assessor.id_assessor = cedula_credito.id_assessor -- LEFT até os que não tem cliente aparece
GROUP BY assessor.id_assessor;

-- 9. Liste o nome do cliente, o tipo de conta e a data de abertura das contas abertas antes de 2024.

SELECT cliente.nome_cliente, conta.tipo_conta, conta.data_abertura
FROM cliente 
JOIN conta ON cliente.id_cliente = conta.id_cliente
WHERE conta.data_abertura < '2024-01-01';

