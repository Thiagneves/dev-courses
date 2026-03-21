#include <stdio.h>

int main(){
	
	int n[2] = {2, 5};
	
	int *p = n;
	
	printf("Valor: %d -> Endereco: %p\n", n[1], p+1);
	printf("Valor: %d -> Endereco: %p\n\n", n[0], p);
	
	printf("Valor: %d -> Endereco: %p\n", p[1], n+1);
	printf("Valor: %d -> Endereco: %p\n\n", p[0], n);
	
	printf("Valor: %d -> Endereco: %p\n", *(n+1), &n[1]);
	printf("Valor: %d -> Endereco: %p\n\n", *(n), &n);
	
	printf("Valor: %d -> Endereco: %p\n", *(p+1), &p[1]);
	printf("Valor: %d -> Endereco: %p\n", *(p), &p);
}