//Faça um programa contendo uma função que retorne 1 se o número digitado for positivo ou 0 se for negativo.

programa
{
	
	funcao inicio()
	{
		inteiro n1, n2
		
		escreva("informe um numero: ")
		leia(n1)

		escreva("informe outro numero: ")
		leia(n2)

		se(n1 < 0){
			escreva("negativo")
		}
		senao{
			escreva("positivo")
		}

		se(n2 < 0){
			escreva(" negativo")
		}
		senao{
			escreva(" positivo")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 324; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */