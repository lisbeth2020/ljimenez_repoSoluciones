#include <stdio.h>
int main ()
{
	float x,ejercicio;
	
	printf ("Valor de x:");
	scanf ("%f", &x);
	ejercicio = (x*x*x) + 2*(x*x) + 3*(x) +5;
	printf ("\nResultado:%.1f",ejercicio);
	
	return 0;
}		
