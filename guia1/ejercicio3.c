/*Forma narrada:
 * 1-declarar las variables (int a,b,hipotenusa)
 * 2-pedir que ingrese el valor de a y b, guardar su valor en la respectiva variable de cada una de ellas
 * 3-Definir la operación que se debe hacer para obtener el valor de las variables, la cual es:
 *   hipotenusa= a*a+b*b
 * 4-imprimir el resultado de hipotenusa
 * 5-para finalizar return 0;} */

#include <stdio.h>

int main()
{
	int a,b,hipotenusa;
	
	printf ("ingrese el valor de a:");
	scanf ("%d",&a);
	printf ("ingrese el valor de b:");
	scanf ("%d",&b);
	hipotenusa= a*a+b*b;
	printf ("\nhipotenusa:%d",hipotenusa);
	
	return 0;
}
