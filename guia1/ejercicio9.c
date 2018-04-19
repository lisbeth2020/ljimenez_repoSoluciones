#include <stdio.h>

int main()
{
	int sueldo_base, n_ventas, sueldo_total;
	float comision;
	
	printf ("Ingrese sueldo base:");
	scanf ("%d",&sueldo_base);
	printf ("Ingrese número de ventas:");
	scanf ("%d",&n_ventas);
	comision= (n_ventas*0.07);
	printf ("\nComisión:%f\n",comision);
	sueldo_total= sueldo_base+comision;
	printf ("El sueldo total es:%d",sueldo_total);
	
	return 0;
}
	 
