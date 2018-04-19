#include <stdio.h>

int main()
{
	float galon,precio,litro;
	
	galon= 3.785;
	
	printf ("Ingrese número de galones:");
	scanf ("%f",&galon);
	litro= galon*3.785;
	printf ("cantidad de litros:%.2f\n",litro);
	precio= litro*820;
	printf("\nprecio:%.0f",precio);
	 
	return 0;
}
