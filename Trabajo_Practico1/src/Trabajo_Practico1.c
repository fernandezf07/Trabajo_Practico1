#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main(void) {

	int num1;
	int num2;
	int operador;
	int suma;
	int resta;
	int multiplicacion;
    float division;
	int factorial;
	int factorial2;
	int flag = 0;
	int flagSwitch1 = 0;
	int flagSwitch2 = 0;


   while (flag ==0){
	   printf("-------Bienvenidos a la calculadora en C------\n");
	   	printf("----1_ Para ingresar 1er operando (A) 2_ Para el 2do operando (B) ----\n");
	   	printf("----3_Calcular  las operaciones ----\n");
	   	printf("----Calcular la suma (A+B)----\n");
	   	printf("----Calcular la resta (A-B)----\n");
	   	printf("----Calcular la multiplicacion (A*B)----\n");
	   	printf("----Calcular la division (A/B)----\n");
	   	printf("----Calcular el factorial (A!) y factorial (B!)----\n");
	   	printf("---- 4_ Para mostrar los resultados----\n");
	   	printf("------------------ 5_ Salir ---------------------- \n\n");

	   	scanf("%d",&operador);

	   	switch (operador)
	   	{
	   	    case 1: scanf("%d",&num1);
	   	    printf("ingresaste : %d ingrese 2 para el siguiente numero\n\n",num1);
	   	    flagSwitch1 =1;
	   	    break;


	   	    case 2:
	   	    	if (flagSwitch1 ==1)
	   	    	{

					scanf("%d",&num2);
					printf("ingresaste : %d ingrese 3 para calcular\n\n",num2);
					flagSwitch2 =1;


	   	    	} else
	   	    	{
	   	    		printf("ingrese la opcion 1 primero\n\n");
	   	    	}
	   	        break;


	   	    if (flagSwitch1 ==1 && flagSwitch2 ==1)
	   	    {

	   	         case 3:
	   	        	 suma = sumaC(num1,num2);
	   	        	 resta = restaC(num1,num2);
	   	        	 multiplicacion = multiplicacionC(num1,num2);
	   	        	 division = divisionC(num1,num2);
	   	        	 factorial = factorialC(num1);
	   	        	 factorial2 = factorialC(num2);

	   	        	 printf("calculos terminados ingrese 4 para mostrar\n\n");
                 break;


				case 4:
					printf("----El resultado de (%d + %d) = %d ----\n",num1,num2,suma);
					printf("----El resultado de (%d - %d) = %d ----\n",num1,num2,resta);
					printf("----El resultado de (%d * %d) = %d ----\n",num1,num2,multiplicacion);
					printf("----El resultado de (%d / %d) = %0.2f ----\n",num1,num2,division);
					printf("----El resultado de (A= %d !) = %d y el resultado de (B = %d !) = %d  ----\n\n",num1, factorial,num2,factorial2);
			  } else
			  {
				  printf("Ingrese los numeros de la opcion 1 y 2 antes de mostrar los resultados\n");
			  }
				 break;



	   	    case 5 :
	   	    	flag =1;
	   	    	break;
	   	    default :
	   	    	printf("Opcion incorrecta, ingrese bien las opciones\n");
	   	}
       fflush(stdin);
   }





    system("pause");

	return 0;
}
