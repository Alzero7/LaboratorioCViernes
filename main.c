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
		char text[20];
		char ntext[20];
		int i,k=0;
		char spa=' ';
		int cspa=0;
		int t;
		int nt=0;
		
		printf("\n\t Ingrese el texto, por favor: \n\n\t ");
		gets(text);
		t=strlen(text);
		
		for(i=0;i<=t;i++)
		{
			if(text[i]==spa)
			{
				cspa++;
				i++;
			}
			ntext[k]=text[i];
			k++;
		}
		
		i=0;
		k=0;
		t=strlen(ntext);
		for(i=t-1;i>=0;i--)
		{
			if(ntext[i]==ntext[k])
			{
				nt++;
			}
			k++;
		}
		
		 if (nt==t)
      	{
		  	printf("\n\t La palabra es palindrome  \n\n\t ");
		}
		else
		{
      		printf ("\n\t La palabra no es palindrome \n\n\t ");
    	}
		system("pause");
		system("cls");
		
 
 	
 		//  Actividad 2  //
 	
 		/*  Escribir un programa que, dado un array de 10 caracteres (introducidos a mano en el
  		código), calcule cuántas letras aparecen y cuantas hay de cada una
  
		Ejemplo.
  
 		 AABBAA BBAA AAABBBV
 		 ? A:9
 		 ? B:7
 		 ? V:1
		*/ 	
 	
 		char word[10]="hola teo";
 		int cl=0;
 		int nl=0;
 		cl=strlen(word); 
 		int b=strchr("h",word);
 		
 		for(i=0;i<cl;i++)
 		{
 			if(b==-1)
 			nl++;
		}
 		printf("\n\t h= %d",nl);
 		
 		nl=0;
 		b=strchr("o",word);

 		for(i=0;i<cl;i++)
 		{
 			if(b==-1)
 			nl++;
		}
 		printf("\n\t o= %d",nl);
 		
 		nl=0;
 		b=strchr("l",word);
 	
 		for(i=0;i<cl;i++)
 		{
 			if(b==-1)
 			nl++;
		}
 		printf("\n\t l= %d",nl);
 		
 		nl=0;
 		b=strchr("a",word);
 	
 		for(i=0;i<cl;i++)
 		{
 			if(b!=0)
 			nl++;
		}
 		printf("\n\t a= %d",nl);
 		
 		nl=0;
 		b=strchr("t",word);
 		
 		for(i=0;i<cl;i++)
 		{
 			if(b==-1)
 			nl++;
		}
 		printf("\n\t t= %d",nl);
 		
 		nl=0;
 		b=strchr("e",word);
 		
 		for(i=0;i<cl;i++)
 		{
 			if(b==-1)
 			nl++;
		}
 		printf("\n\t e= %d",nl);
 	
 	
 	
	return 0;
}
