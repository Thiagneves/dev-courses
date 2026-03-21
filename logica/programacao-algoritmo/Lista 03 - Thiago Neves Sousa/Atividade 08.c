#include <stdio.h>

int main(){
	
	printf("Tipo char: \t%zu byte \n", sizeof(char));
	
	printf("Tipo short: \t%zu bytes \n", sizeof(short));
	
	printf("Tipo int: \t%zu bytes \n", sizeof(int));
	
	printf("Tipo float: \t%zu bytes \n", sizeof(float));
	
	printf("Tipo long: \t%zu bytes \n", sizeof(long));
	
	printf("Tipo double: \t%zu bytes", sizeof(double));
	
	return 0;
}
