#include <stdio.h>
int main ()
{
	char nombre_del_dinosaurio[80];
	float peso,longitud,libras,pies;

	printf("Nombre del dinosaurio:");
	scanf("%s", nombre_del_dinosaurio);
	printf ("Libras:");
	scanf ("%f",&libras);
	printf ("Pies:");
	scanf ("%f",&pies);
	peso= (libras * 0.45);
	printf("\nResultado del peso en kg:%.2f\n",peso);
	longitud= (pies * 0.3048);
	printf("Resultado de la longitud en metros:%.2f \n",longitud);
	printf("Nombre del dinosaurio: %s", nombre_del_dinosaurio);
	
	return 0;
}
	
