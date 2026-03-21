#include <stdio.h>

#define cabecario "------- Gestao de Produtos -------"
#define text1 "-> Cadastar novo produto"
#define text2 "-> Listar produtos"
#define text3 "-> Sair"

int main(){
	
	printf("%s\n", cabecario);
	printf("\n1 \t%s\n", text1);
	printf("2 \t%s\n", text2);
	printf("\n0 \t%s\n", text3);
	
	return 0;
}
