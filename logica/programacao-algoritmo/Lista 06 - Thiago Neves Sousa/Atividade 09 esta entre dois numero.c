#include <stdio.h>

long int teste(int x, int y, int z){
	
	return x > y && x < z ? 1 : 0; // ternario
}

int main(){
	
	int a = 5, b = 7, c = 14;
	
	printf("%d", teste(a, b, c));
}