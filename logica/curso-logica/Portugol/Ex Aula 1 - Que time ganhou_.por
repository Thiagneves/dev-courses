programa {
  funcao inicio() {
    logico venceuTime1, venceuTime2, empate
    inteiro golsTime1 = 1, golsTime2 = 2

    venceuTime1 = golsTime1 > golsTime2
    escreva("Venceu o Time 1", venceuTime1, "\n")

    venceuTime2 = golsTime1 < golsTime2
    escreva("Venceu o Time 2?", venceuTime2, "\n")

    empate = golsTime1 == golsTime2
    escreva("Os Times empataram", empate)
  }
}
