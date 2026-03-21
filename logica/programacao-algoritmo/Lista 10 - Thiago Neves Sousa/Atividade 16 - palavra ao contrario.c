#include <stdio.h>
#include <stdio.h>

int main(){
	
	char palavra[50];
	
	printf("Escreva uma palavra: ");
	scanf("%50[^\n]", palavra);
	
	int j = strlen(palavra);
	
	palavra[strcspn(palavra, "\n")] = '\0';
		
		for(int i = 0; i <= j; j--){
			
			printf("%c", palavra[j]);
		}
		
	return 0;
}