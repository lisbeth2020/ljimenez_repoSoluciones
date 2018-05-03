/*NARRATIVA:
 *Crear un ciclo con while que termine cuando "num" sea 0
 *Utilizar mod 10 para definir el resto
 *Imprimir resto
 *Definir las operaciones para los números restantes
 *Terminar la función con "return 0;"
 *Definir variables
 *Pedir que ingrese número
 *Guardar el número ingresado en la variable "num"
 *Llamar a la función "num"
 *Terminar con "return 0;"*/

#include <stdio.h>

int result (int num){
int resto;
	while (num>0){
	resto= num%10;
	printf ("%d",resto);
	num= num-resto;
	num= num/10;
	}
	return num;
}
int main()
{
	int num;
	
	printf("Ingrese número: ");
	scanf("%d",&num);
	result (num);
	return 0;
}
