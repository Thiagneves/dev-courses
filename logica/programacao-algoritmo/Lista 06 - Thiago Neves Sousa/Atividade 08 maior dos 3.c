#include <stdio.h>

float max(float x, float y, float w){
	
	float aux = 0;
	
	if(x > y){
		
		aux = x;
	}else{
		
		aux = y;
	}
	
	if(aux > w){
		
		printf(" %.2f", aux);
	}else{
		
		printf(" %.2f", w);
	}
}

int main(){
	
	int a = 11, b = 10, c = 4;
	
	max(a, b, c);
	
	return 0;
}