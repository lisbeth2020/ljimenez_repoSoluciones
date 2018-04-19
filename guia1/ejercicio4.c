/*Forma narrada:
 *1-definir las variables (int base,altura,superficie,perimetro)
 *2-pedir que ingrese el valor de base y altura, al ingresarlos se guardan automaticamente en su respectiva variable
 *3-Definir la operación que se debe hacer para obtener el valor de las variables superficie y altura, las cuales son:
 *   superficie= base*altura
 *   perimetro= 2*(base*altura)
 *4-imprimir el resultado de cada variable
 *5-para finalizar return 0*/

#include <stdio.h> 

int main()
{
	int base,altura,superficie,perimetro;
	
	printf ("ingrese la base:");
	scanf ("%d",&base);
	printf ("ingrese la altura:");
	scanf ("%d",&altura);
	superficie= base*altura;
	printf ("\nsuperficie del rectángulo:%d\n",superficie);
	perimetro= 2*(base+altura);
	printf ("perimetro del rectángulo:%d\n",perimetro);
	
	return 0;
}
