<<<<<<< HEAD
-- Selecione produtos que contêm ‘churn’ no nome

SELECT * FROM produtos

-- WHERE DescProduto = 'Churn_10pp' 
-- OR DescProduto = 'Churn_2pp' 
-- OR DescProduto = 'Churn_5pp' 

-- WHERE DescProduto IN ('Churn_10pp', 'Churn_2pp', 'Churn_5pp')

-- O melhor modo de buscar NESTA queare é buscar pela categoria
-- WHERE DescCateogriaProduto = 'churn_model'

WHERE DescProduto LIKE 'churn%'
=======
-- Selecione produtos que contêm ‘churn’ no nome

SELECT * FROM produtos

-- WHERE DescProduto = 'Churn_10pp' 
-- OR DescProduto = 'Churn_2pp' 
-- OR DescProduto = 'Churn_5pp' 

-- WHERE DescProduto IN ('Churn_10pp', 'Churn_2pp', 'Churn_5pp')

-- O melhor modo de buscar NESTA queare é buscar pela categoria
-- WHERE DescCateogriaProduto = 'churn_model'

WHERE DescProduto LIKE 'churn%'
>>>>>>> 255d4b9500b2eea5e532ec1910e2ba1b61dd4d7e
