#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	Jesus Armando Espino Rodriguez
	11/10/2019
	006
	Viernes 7:00am - 9:00am
	1844607
*/

//  Actividad 1  //

/*	Se prentende crear una aplicación que pida una cadena de texto por teclado y verifique si
 dicha cadena es palindromo. */

int main()
{	
		system("color 0B");
		char Text[20];
		char Ntext[20];
		int i;
		int x;
		char y=' ';
		int s=0;
		int cy=0;
		int n=1;
		
		printf("\n\t Introduzca un texto, por favor: \n\n\t ");
		gets(Text);
		x=strlen(Text);
		
		for(i=0;i<=x;i++)
		{
				if(Text[i]==y)
				{
					cy++;
					i++;
				}
					Ntext[s]=Text[i];
					s++;
		}
		
		i=0;
		s=0;
		for(i=x-cy;i>=0;i--)
		{
			if(Ntext[i]==Ntext[s])
			{
				n++;
			}
			s++;
		}
		
		if(n==x)
		{
			printf("\n\t El texto es palindromo");
		}
		else
		{
			printf("\n\t El texto no es palindromo");
 	}
 
 	
 	//  Actividad 2  //
 	
 	/*  Escribir un programa que, dado un array de 10 caracteres (introducidos a mano en el
  código), calcule cuántas letras aparecen y cuantas hay de cada una
  
		Ejemplo.
  
  AABBAA BBAA AAABBBV
  ? A:9
  ? B:7
  ? V:1
		*/ 	
 	
 	int word[10];
 	
 	
		return 0;
}
