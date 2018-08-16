#include<stdio.h>

int main (){	
	printf("Programa para Calcular el Area de un Circulo. \n");
	printf("Introduce el Valor del Radio: ");
	float radio = 0;
	scanf("%f", &radio);
    #define pi 3.14159265359
	float area = radio*radio*pi;
	printf("El Area de un Circulo con Radio %.2f es = %.2f", radio,area);
	return 0;
}
