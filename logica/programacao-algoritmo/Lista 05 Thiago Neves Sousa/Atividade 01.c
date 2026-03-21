#include <stdio.h>

int main(){
	
	int num;
	
	printf("De 0 a 100 com While: \n\n");
	
	while(num >= 0 && num <= 100){
		printf("%d\n", num);
		num = num + 1;
	}
	
	printf("\nDe 0 a 100 com FOR: \n\n");
	
	for(num = 0; num <= 100; num++){
		printf("%d\n", num);
	}
	
	return 0;
}
