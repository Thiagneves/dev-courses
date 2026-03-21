#include <stdio.h>

float volumeEsfera(float raio) {
	
    float pi = 3.14159;
    float volume = (4.0 / 3.0) * pi * (raio * raio * raio);
    return volume;
}

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float volume = volumeEsfera(raio);

    printf("Volume: %.2f\n", volume);

    return 0;
}
