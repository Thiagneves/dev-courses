#include <stdio.h>

void dobrarValor(int *p){
	
	return *p *= 2;
}

int main(){
	
	int num = 10;
	
	dobrarValor(&num);
	printf("%d", num);
	
	return 0;
}