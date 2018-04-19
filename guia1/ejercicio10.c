#include <stdio.h>

int main()
{
	int v_boleto, v_kilometro;
	float kilometros;
	
	printf ("Cantidad de kilometros por recorrer:");
	scanf ("%f",&kilometros);
	printf ("Ingrese el valor por kilometro:");
	scanf ("%d",&v_kilometro);
	v_boleto= kilometros*v_kilometro;
	printf ("\nEl costo del boleto es:%d",v_boleto);
	
	return 0;
} 
