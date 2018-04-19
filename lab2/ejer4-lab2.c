/*Forma narrada:
 *Declarar las variables
 *Pedir que ingrese el número de goles del equipo local
 *Pedir que ingrese el número de goles del equipo rival
 *Si el número de goles local es mayor que rival, se le suman 3 puntos
 *Si el número de goles de local es igual que rival, se le suma 1 punto
 *Si el número de goles de equipo es menor a rival, no se le suman puntos
 *Se imprime el resultado de los puntos obtenidos
 *Terminar todo con "return 0;"*/

#include <stdio.h>

int main()
{
	int i,equipo,rival,puntaje=0;
	
	for (i=0; i<5; i++){
		printf ("Ingrese número de goles local:");
		scanf ("%d",&equipo);
		printf ("Ingrese número de goles rival:");
		scanf ("%d",&rival);
		
		if (equipo>rival){
			puntaje=puntaje+3;
		}
		else if (equipo==rival){
			puntaje=puntaje+1;
		}
		if (equipo<rival){
			puntaje=puntaje+0;
		}		
	
	printf ("Los puntos obtenidos son:%d\n",puntaje);
	
}	
	 return 0;
}
