programa {
  funcao inicio() {
    inteiro valor1, valor2, valor3

      escreva("Informe o valor 1: ")
      leia(valor1)

      escreva("Informe o valor 2: ")
      leia(valor2)

      escreva("Informe o valor 3: ")
      leia(valor3)

      se(valor1 > valor2 e valor1 > valor3){
        escreva(valor1, " É o maior valor")
      }

      senao se(valor2 > valor1 e valor2 > valor3){
        escreva(valor2, " É o maior valor")
      }

      senao{
        escreva(valor3, " É o maior valor")
    }
  }
}
