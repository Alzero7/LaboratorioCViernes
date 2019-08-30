#include <stdio.h>
#include <stdlib.h>

// Actividad 1 //

int main() 
{
	system("color 0B");
	int a;
	int b;
	
	printf("\n\n\t Ingrese un numero \n\n\t ");
	scanf("%d",&a);
	printf("\n\t Ingrese otro numero \n\n\t ");
	scanf("%d",&b);
	
	if (a==b)
		printf("\n\n\t Los numeros %d y %d son iguales",a,b);
	else
		if (a<b)
			printf("\n\n\t El numero mayor es: %d",b);
		else
			printf("\n\n\t El numero mayor es: %d",a);
			 
			 

	// Actividad 2 //
	
	
	
	return 0;
}



