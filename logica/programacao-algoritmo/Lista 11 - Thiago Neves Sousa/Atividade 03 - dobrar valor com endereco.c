#include <stdio.h>

int dobrar(int num){
	
	return num * 2;
}

void dobrar2(int *num){
	
	*num = *num * 2;
}

int main(){
	
	int x = 5;
	x = dobrar(x);
	printf("X = %d\n", x);
	
	//outra maneira com variavel
	
	int y = 5;
	dobrar2(&y);
	printf("Y = %d\n", y);
	return 0;
}