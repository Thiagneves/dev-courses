#include <stdio.h>

float celsius(float fahrenheit){
	
	return(fahrenheit - 32) * 5 / 9;
}

float fahrenheit(float celsius){
	
	return(celsius * 9 / 5) + 32;
}

int main(){
	
	int c, f;
	
	printf("Tabela de conversao: \n");
	printf("================================================\n");
    printf("Celsius  | Fahrenheit    || Fahrenheit | Celsius\n");
    printf("------------------------------------------------\n");
    
    for (int i = 0; i <= 10; i++) {
        c = i * 10;           
	    f = 32 + i * 20;
	    	
		printf("%7d  | %10.2f    || %9d  | %7.2f\n", c, fahrenheit(c), f, celsius(f)); //pedi ao chat para me axuliar com as linhas
    }

	return 0;
	
}