#include <stdio.h>

int main(){
	
	int num1 = 15;
	int num2 = 2;
	
	float divisao = (float)num1/num2;
	
	printf("%d+%d = %d  \n", num1, num2, num1+num2);
	printf("%d-%d = %d  \n", num1, num2, num1-num2);
	printf("%d*%d = %d  \n", num1, num2, num1*num2);
	printf("%d/%d = %.1f\n", num1, num2, divisao);
	
	return 0;
}
