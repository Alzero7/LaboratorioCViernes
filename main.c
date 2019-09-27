#include <stdio.h>
#include <stdlib.h>


int main() 
{
	/*Jesus Armando Espino Rodriguez
			27/09/2019
			006
			Viernes 7:00am.- 9:00am.
			1844607
	*/
	
	/*   Actividad 1   */
	
	system("color 0B");
	
	int numeroDeCoches[24]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	int R;
	int n;
	
	printf("\n\t Que desea hacer joven amo?");
	do
	{
	R=2;
	numeroDeCoches[R]=57;
	printf("\n\n\t La posicion %d retomara el valor: %d \n\n\t ",R,numeroDeCoches[R]);
	
	R=21;
	numeroDeCoches[R]=57;
	printf("La posicion %d retomara el valor: %d \n\n\t ",R,numeroDeCoches[R]);
	
	printf("Desea algo mas:(1=si,2=no)");
	scanf("%d",&n);
	}while(n==1);
	
	
	/*   Actividad 2   */
	
	int A=8;
	int B=4;
	
	printf("\n\t Que desea hacer joven amo?");
	do
	{
	R=2;
	numeroDeCoches[R]=57;
	printf("\n\n\t La posicion %d retomara el valor: %d \n\n\t ",R,numeroDeCoches[R]);
	
	R=21;
	numeroDeCoches[R]=57;
	printf("La posicion %d retomara el valor: %d \n\n\t ",R,numeroDeCoches[R]);
	
	R=A/B;
	numeroDeCoches[R]=57;
	printf("La posicion %d entre %d retomara el valor: %d \n\n\t ",A,B,numeroDeCoches[R]);
	
	fflush(stdin);
	printf("Desea algo mas:(1=si,2=no)");
	scanf("%d",&n);
	}while(n==1);
	
	
	return 0;
}
