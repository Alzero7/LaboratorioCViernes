#include <stdio.h>
#include <stdlib.h>

int main() 
{
	// Jesus Armando Espino Rodriguez //
	// 06/09/2019 //
	// 006 //
	// Viernes 7:00 am - 9:00 am //
	// 1844607 //
	
	
	// Actividad 1. //
	// 1)Pida por teclado la nota (real) de una materia...//
	
	system("color 0B");
	int a;
	printf("\n\t Ingrese la nota del estudiante \n\n\t ");
	scanf("%d",&a);
	
	if (a>10 || a<0)
	printf("\n\n\t Calificacion no valida \n\n\t ");
	else
		if (a>=5)
		printf("\n\n\t APTO \n\n\t ");
		else
		printf("\n\n\t NO APTO \n\n\t ");
	


	// Actividad 2. //
	
	printf("\n\n\n\t Comienza la Actividad 2 \n\n\t ");
	
	int d;
	printf("\n\t Ingrese un numero del uno al siete por favor \n\n\t ");
	scanf("%d",&d);
	
	if(d>7 || d<1)
	printf("\n\n\t Error");
	else
		switch (d) {
		case 1:	printf("\n\n\t El dia de la semana es lunes");
		break;	

		case 2:	printf("\n\n\t El dia de la semana es martes");
		break;

		case 3:	printf("\n\n\t El dia de la semana es miercoles");
		break;

		case 4:	printf("\n\n\t El dia de la semana es jueves");
		break;

		case 5:	printf("\n\n\t El dia de la semana es viernes");
		break;

		case 6:	printf("\n\n\t El dia de la semana es sabado");
		break;

		case 7:	printf("\n\n\t El dia de la semana es domingo");
		break;
		
		default: ("\n\n\t Error");
	}


	// Actividad Extra //
	
	printf("\n\n\n\n\n\n\t Comienza la Actividad Extra \n\n\t ");
	
	int y;
	printf("Seleccione una de nuestras opciones: \n\t 1. Tacos \n\t 2. Enchiladas \n\t 3. Quesadillas \n\t 4. Burritos \n\t 5. Un Elote \n\n\t ");
	scanf("%d",&y);
	
	if (y<1 || y>5)
	printf("Error");
	else
		switch (y)
		{
			case 1: printf("\n\n\t Ha seleccionado Tacos ");
			break;
			
			case 2: printf("\n\n\t Ha seleccionado Enchiladas");
			break;
			
			case 3: printf("\n\n\t Ha seleccionado Quesadillas ");
			break;
			
			case 4: printf("\n\n\t Ha seleccionado Burritos ");
			break;
			
			case 5: printf("\n\n\t Ha seleccionado Un Elote ");
			break;
			
			default: printf("\n\n\t Error");
			
		}
			
	return 0;
}
