/*
 * operaciones.c
 *
 *  Created on: 13 abr. 2020
 *      Author: ferna
 */
#include <stdlib.h>
#include <stdio.h>

int sumaC(int operador1, int operador2)
{
	  int resultado;
	  resultado = operador1 + operador2;
	  return resultado;
}

int restaC( int operador1, int operador2)
{
		int resultado;
		resultado = operador1 - operador2;
		return resultado;

}

int multiplicacionC (int operador1, int operador2)
{
	int resultado;
	resultado = operador1 * operador2;
	return resultado;
}

float divisionC (int operador1, int operador2)
{
	 float resultado;

	 if (operador2 ==0)
	 {
		 printf("no se puede dividir por cero");
	 } else
	 {
		 resultado = (float) operador1 / operador2;
	 }
	 return resultado;
}

int factorialC(int factorial)
{
    int fact = 1 ;

   if (factorial ==0)
   {
	   fact =1;
   }
   else
   {
	   for (int i = factorial ; i>= 1; i-- )
	      {
	   	   fact = fact * i;
	      }
   }


	return fact;
}

