#include <stdio.h>

int main(){
	
	int quantnum, i,
	num, menor;
	
	printf("Quantos numeros serao? ");
	scanf("%d", &quantnum);
	
	for (i = 1; i <= quantnum; i++) {
		
		printf("\nDigite o numero %d da sequencia: ", i);
		scanf("%d", &num);
		
		if(i == 1){
			menor = num;
		} 
		
		else {
			if(num < menor){
				menor = num;
			}
		}
		
	}
	
	printf("\nO menor dos numeros e: %d", menor);
		
	return 0;
}
