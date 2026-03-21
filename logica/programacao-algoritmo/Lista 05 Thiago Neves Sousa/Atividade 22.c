#include <stdio.h>

int main(){
	
	int num, i;
	long long int primeiro = 0, segundo = 1, proximo;
	
	printf("Escrava um numero: ");
	scanf(" %d", &num);
	
	for(i = 1; i <= num; i++){
		printf("%lld ", primeiro);
		
		proximo = primeiro + segundo;
		primeiro = segundo;
		segundo = proximo;
	}
	
	return 0;
}
