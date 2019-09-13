#include <stdio.h>
#include <stdlib.h>

int main() 
{
	/* 
	-Jesus Armando Espino Rodriguez 
	-13/09/2019
	-006
	-Viernes 7:00am - 9:00am
	-1844607
	*/
	
	/* Problema 1 */
	
	system("color 0B");
	int a;
	char r;
	
	do
	{
		
	printf("\n\t Introduzca un numero entero:");
	scanf("%d",&a);
	
	printf("\n\n\t ¿Desea ingresar otro (s/n)?:");
	scanf("%c",&r);
	
	}while(r='s');
	
	
	/* Problema 2 */
	
	int n;
	
	do
	{
		printf("\n\t Dame un numero \n\n\t ");
		scanf("%d",&n);
	}
	while(n<101);
	
	return 0;
}
