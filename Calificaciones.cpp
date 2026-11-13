#include<stdio.h>

int main()
{
	int calificacion;
	printf_s("calificacion:");
	scanf_s("%d", &calificacion);

	if (calificacion >= 5)
	printf("Aprovado");
	
	if (calificacion <= 5)
		printf("Reprovado");

	else (calificacion >=11);
	printf("Error");

	//PROGRAMA ERRONEO TODAVIA NO ESTA TERMINADO
}