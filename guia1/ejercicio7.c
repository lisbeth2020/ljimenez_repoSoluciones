#include <stdio.h> 

int main()
{
	int dia;
	float segundos;
	
	dia= 86400;
	printf("Ingrese número de días:");
	scanf("%d",&dia);
	segundos= dia*86400;
	printf ("\nCantidad de segundos:%.1f",segundos);
	
	return 0;
}
