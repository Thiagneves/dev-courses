#include <stdio.h>

void preencher(int num[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Digite um numero: ");
        scanf(" %d", &num[i]);
    }
}

void media(int num[], int tamanho){
    int media = 0;

    for(int i = 0; i < tamanho; i++){
        media += num[i];
    }

    int resultado = media / tamanho;
    printf("Media eh: %d\n", resultado);
    
    int j = 0;
    
    for(int i = 0; i < tamanho; i++){
    	
    	if(num[i] > resultado){
    		j++;
		}
	}
	
	printf("Tivemos %d notas acima da media geral", j);
} 

int main(){
	
    int num[3];
    
    preencher(num, 3);
    media(num, 3);
    
    return 0;
}
