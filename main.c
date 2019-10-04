#include <stdio.h>
#include <stdlib.h>

	/*	Jesus Armando Espino Rodriguez
				04/10/19
				006
				Viernes 7:00am - 9:00am
				1844607
	*/
	
	/* Actividad 1  */

int main() 
{
	system("color 0B");
	
	int ventasEmpleadoOficinaEdificio[6][10][2];
	int i,j,k;   
	/* i sera el numero de empleado
	   j sera el numero de oficina
	   k sera el numero de edificio
	*/        
	for(i=0;i<6;i++)
	{
			for(j=0;j<10;j++)
			{
					for(k=0;k<2;k++)
					{
						if(i==3 && j==7 && k==1)
						{
						ventasEmpleadoOficinaEdificio[i][j][k]=4234;
						printf("\nEl empleado numero %d de la oficina numero %d del edificio numero %d ha vendido %d unidades",i,j,k,ventasEmpleadoOficinaEdificio[i][j][k]);
					 }
					}
			}
	}
	
	
	/* Preguntas.
				
				a)¿Cuantos elementos componen el array multidimensional?
				
				-Apartir de los tres elementos hacia arriba.
				
				b)¿Que ocurre si intentamos mostrar en pantalla un 
							valor con un indice que no esta definido por
							ese array multidimensional?
				
				-El programa lo saltara ya que no existe una casilla para otorgarle ese valor
	*/
				
		for(i=0;i<6;i++)
	{
			for(j=0;j<10;j++)
			{
					for(k=0;k<2;k++)
					{
						if(i==3 && j==7 && k==1)
						{
						ventasEmpleadoOficinaEdificio[i][j][k]=4234+10;
						printf("\nEl empleado numero %d de la oficina numero %d del edificio numero %d ha vendido %d unidades",i,j,k,ventasEmpleadoOficinaEdificio[i][j][k]);
					 }
					}
			}
	}
	
	
	return 0;
}
