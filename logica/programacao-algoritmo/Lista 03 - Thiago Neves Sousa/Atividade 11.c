#include <stdio.h>

int main(){
	
	int num1 = 10;
	int num2 = 3;
	
	float divisao = (float)num1/num2;
	
	printf("%d+%d = %d  \n", num1, num2, num1+num2);
	printf("%d-%d = %d  \n", num1, num2, num1-num2);
	printf("%d*%d = %d  \n", num1, num2, num1*num2);
	printf("%d/%d = %.4f\n", num1, num2, divisao);
	
	return 0;
}
