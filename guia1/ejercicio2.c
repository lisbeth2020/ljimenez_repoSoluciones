/*Forma narrada:
 * 1-Declarar las variables (int)
 * 2-Pedir el número, al ingresarlo se guarda en la variable "numero"
 * 3-Definir la operación que se debe hacer para obtener el valor de la variable cuadrado y cubo, para cada una será: 
 *   cuadrado= (numero*numero)
 *   cubo= (numero*numero*numero)
 * 4-Mostrar el valor de cada variable (cuadrado,cubo) 
 * 5-para terminar utilizar return 0;}*/



#include <stdio.h>

int main()
{
	int numero,cuadrado,cubo;
	
	printf ("número:");
	scanf ("%d",&numero);
	cuadrado= numero*numero;
	printf ("\ncuadrado del número:%d\n",cuadrado);
	cubo= numero*numero*numero;
	printf ("cubo del número:%d\n",cubo);
	
	return 0;
}
