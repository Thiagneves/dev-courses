#include <stdio.h>

void imprimirLinha(char caracter){
	
	for(int i = 0; i < 20; i++){
		printf("%c", caracter);
	}
	printf("\n");
	
	return 0;
}

int main(){
	
	imprimirLinha('*');
	imprimirLinha('*');
	imprimirLinha('*');
}