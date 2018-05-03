/*Forma Narrada:
 *declarar función y variables
 *
 *	 */
#include <stdio.h>

int pago_dia (int horas, int s_hora){
	int d_dia;
	d_dia = horas*s_hora;
	return d_dia;
	
}
int main(void)
{
	int i,h_dia,s_hora,s_dia,pago=0;
	
	printf ("Ingrese el sueldo por hora:");
	scanf ("%d",&s_hora);
	for (i=0; i<6; i++){
		printf ("ingrese horas trabajadas al día %d:", i+1);
		scanf ("%d",&h_dia);
		s_dia = pago_dia (h_dia, s_hora);
		printf ("sueldo por día:%d\n",s_dia);
		pago = pago + s_dia;
}
	printf ("Sueldo por pagar:%d",pago);
	
	return 0;
}
	
	
	
	
	
