#include <stdio.h>

int seg(int hora){
	int segundos = hora*3600;
}

int main(){
	
	int hora;
	
	printf("Digite a quantidade de horas? ");
	scanf(" %d", &hora);
	
	printf("%d horas eh %d segundos", hora, seg(hora));
	
}