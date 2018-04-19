//forma narrada:
//1-declarar las variables 
//2-pedir el valor de matricula y guardarlo en la variable "matricula"
//3-pedir el valor de nota1,nota2,nota3 y guardarlo en la variable de cada uno
//4-definir la operación para obtener el valor de la variable
//5-mostrar el resultado de la operación 
//6-para terminar return 0

#include <stdio.h>

int main()
{
	//determinar las variables tipo int y float
	float nota1, nota2, nota3, promedio;
	int matricula;
	
	//pedir el valor de cada variable y guardar la información en su respectiva.
	printf ("ingresar número de matricula:");
	scanf ("%d",&matricula);
	printf ("ingrese nota:");
	scanf ("%f",&nota1);
	printf ("ingrese nota:");
	scanf ("%f",&nota2);
	printf ("ingrese nota:");
	scanf ("%f",&nota3);
	promedio= (nota1+nota2+nota3)/3;
	
	//imprimir el resultado obtenido a partir de "nota1,nota2,nota3"
	printf ("\npromedio de notas: %.1f",promedio);
	printf ("\nnúmero de matricula: %d",matricula);
	
	return 0;
}

