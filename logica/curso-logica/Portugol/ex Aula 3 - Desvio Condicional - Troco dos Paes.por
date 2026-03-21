programa {
  funcao inicio() 
  {
    /* Criando as variaveis */
    real meuDinheiro
    real troco
    real precoPaoUni
    logico comprarChocolate

    /* Atribuindo os valores iniciais das variaveis, no caso temos 10 reais e por enquanto não podemos comprar o chocolate, afinal não sabemos se teremos o troco  */
    meuDinheiro = 10.0
    comprarChocolate = falso

    /* Realizando as operações  */
    escreva ("Informe o valor do pão: ")
    leia(precoPaoUni)

    troco = meuDinheiro - (10*precoPaoUni)

    se(troco > 0) {
      comprarChocolate = verdadeiro 
    }
    escreva("Devo comprar chocolate ", comprarChocolate)
  }
}
