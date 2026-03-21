#include <stdio.h>

float taxa(float x){
	
	float calculo = 0;
	
	if(x <= 3.0){
		
		printf("Taxa R$ 2.00\n");
	}else{
		
		calculo = (x - 3) * 0.5 + 2;
		
		if(calculo > 10){
			
			printf("Taxa R$ 10.00\n");
		}else{
			
			printf("Taxa R$ %.2f\n", calculo);
		}
	}
}

int main(){
	
	float carro1 = 1.5;
	float carro2 = 4.0;
	float carro3 = 24.0;
	
	taxa(carro1);
	taxa(carro2);
	taxa(carro3);
	
	return 0;
}