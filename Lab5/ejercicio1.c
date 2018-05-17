#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void apuesta(){
	int a,b, cont_ganadas=0,cont_perdidas=0, final=0;
	char i, numero;

	while(final !=1){

		printf ("\n Elija la opción");
		printf ("\n1. Para votar por a");
		printf ("\n2. Para votar por b");
		printf ("\n\n");
		scanf (" %c", &numero);
		a=(rand()%1000001);
		b=(rand()%1000001);
		printf ("A=%d\n", a);
		printf ("B=%d\n", b);
		
		switch(numero){
			case '1': 
				
				if (a>b){
					printf("Ha ganado por a");
					cont_ganadas= cont_ganadas+1;
				}
				if (a<b){
					printf ("Ha perdido por a");
					cont_perdidas= cont_perdidas+1;
				}
				break;
			case '2':
				if (b>a)
				{
					printf("Ha ganado por b");
					cont_ganadas= cont_ganadas+1;
				}
				if (b<a)
				{
					printf ("Ha perdido por b");
					cont_perdidas= cont_perdidas+1;
				}
			break;
			default: 
			printf("Hubo un error");
		}
		
		printf ("\nContador de perdidas por A: %d, contador ganadas: %d", cont_perdidas, cont_ganadas);
		printf ("\nDesea continuar S/N: ");
		scanf (" %c", &i); 
		
		if(i =='s' || i == 'S'){
			final=0;
		}
		if(i== 'n'||i=='N'){
			final=1;
		}
		system("clear");


	}
}

int main(){
	srand(time(0));

	apuesta();
	return 0;
}

