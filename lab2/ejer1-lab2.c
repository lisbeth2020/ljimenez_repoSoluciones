/*forma narrada
 **/

#include <stdio.h>

int main()
{
	int i,n,a,cont1, cont;
	
	printf ("Ingrese el número:");
	scanf ("%d",&n);
	
	for (a=2; a<=n; a++)
	{
		cont=0;
		for (i=1; i<=a; i++)
		{
			if(a%i==0)
			{
				cont=cont+1;
			} 
		}
		if(cont==2)
		{
			//printf ("%d,",a); 
			cont1++;
				
		}
		
	}
	
	printf ("%d",cont1);
  	
	
	return 0;
}
