#include <stdio.h>

int calculo(int x, int y){
	
	return x == y*y ? 1 : 0;
}

int main(){
	
	int a = 4, b = 2;
	
	printf("%d", calculo(a, b));
	
	return 0;
}