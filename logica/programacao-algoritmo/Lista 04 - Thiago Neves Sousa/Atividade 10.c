#include <stdio.h>

#define text1 "Seu peso e:"
#define text2 "Sua altura e:"
#define text3 "Seu IMC e:"

#define text4 "Voce esta abaixo do peso"
#define text5 "Seu peso esta normal"
#define text6 "Voce esta sobrepeso, tenha cuidado"
#define text7 "Voce esta com obesidade, tenha muito cuidado"

int main(){
	
	float peso, altura, IMC;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	IMC = peso/(altura*altura);
	
	printf("\n%s %.2f", text1, peso);
	printf("\n%s %.2f", text2, altura);
	printf("\n%s %.2f\n", text3, IMC);
	
	if (IMC < 18.5){
		
		printf("\n%s", text4);
		
	}
	
	else if (IMC <= 24.9){
		
		printf("\n%s", text5);
		
	}
	
	else if (IMC <= 29.9){
		
		printf("\n%s", text6);
		
	}
	
	else if (IMC >= 30){
		
		printf("\n%s", text7);
		
	}
	
	return 0;
}
