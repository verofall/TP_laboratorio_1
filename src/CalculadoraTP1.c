/*
 ============================================================================
 Name        : EjercicioSabadoDos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <ctype.h>
#include "Validacion.h"


int main(void)
{
	setbuf(stdout, NULL);
	float numeroA;
	float numeroB;
	int opcion;
	int contadorA;
	int contadorB;
	float sumarNumeros;
	float restarNumeros;
	float dividirNumeros;
	float multiplicarNumeros;
	int factorialNumeroA;
	int factorialNumeroB;
	int casoTres;
	float divisionValidada;
	int numeroFactorialA;
	int numeroFactorialB;


	numeroA=0;
	numeroB=0;
	contadorA=0;
	contadorB=0;
	casoTres=0;

		do
		{
			if(contadorA == 0 && contadorB == 0)
			{
				printf("\t> MENÚ CALCULADORA <\n1. Ingresar el primer operando %.2f\n2. Ingresar el segundo operando %.2f\n3. Calcular todas las operaciones\n\ta) Sumar (A+B)\n\tb) Restar (A-B)\n\tc) Dividir (A/B)\n\td) Multiplicar (A*B)\n\te) Factorial (A!) (B!)\n4. Informar resultados\n5. Salir\n", numeroA, numeroB);

				opcion = PedirEntero("Ingrese una de las opciones entre 1 y 5: ", "Error, ingrese una de las opciones entre 1 y 5: ", 1, 5);
			}
			else
			{
				if(contadorA != 0 && contadorB == 0)
				{
					printf("\t>>> MENU CALCULADORA <<<\n");
					printf("1. Primer operando %.2f. Eliga esta opción para cambiarlo\n", numeroA);
					printf("2. Ingresar el segundo operando %.2f\n", numeroB);
					printf("3. Calcular todas las operaciones\n");
					printf("\ta) Calcular la suma (%.2f+%.2f)\n", numeroA, numeroB);
					printf("\tb) Calcular la resta (%.2f-%.2f)\n", numeroA, numeroB);
					printf("\tc) Calcular la division (%.2f/%.2f)\n", numeroA, numeroB);
					printf("\td) Calcular la multiplicacion (%.2f*%.2f)\n", numeroA, numeroB);
					printf("\te) Calcular el factorial (%.2f! %.2f!)\n", numeroA, numeroB);
					printf("4. Informar resultados\n");
					printf("5. Salir\n");
					opcion = PedirEntero("Ingrese una de las opciones entre 1 y 5: ", "Error, ingrese una de las opciones entre 1 y 5: ", 1, 5);

				}

				if(contadorA == 0 && contadorB != 0)
				{
					printf("\t>>> MENU CALCULADORA <<<\n");
					printf("1. Ingresar el primer operando %.2f\n", numeroA);
					printf("2. Segundo operando %.2f. Eliga esta opción para cambiarlo\n", numeroB);
					printf("3. Calcular todas las operaciones\n");
					printf("\ta) Calcular la suma (%.2f+%.2f)\n", numeroA, numeroB);
					printf("\tb) Calcular la resta (%.2f-%.2f)\n", numeroA, numeroB);
					printf("\tc) Calcular la division (%.2f/%.2f)\n", numeroA, numeroB);
					printf("\td) Calcular la multiplicacion (%.2f*%.2f)\n", numeroA, numeroB);
					printf("\te) Calcular el factorial (%.2f! %.2f!)\n", numeroA, numeroB);
					printf("4. Informar resultados\n");
					printf("5. Salir\n");
					opcion = PedirEntero("Ingrese una de las opciones entre 1 y 5: ", "Error, ingrese una de las opciones entre 1 y 5: ", 1, 5);

				}

				if(contadorA != 0 && contadorB != 0)
				{
					printf("\t>>> MENU CALCULADORA <<<\n");
					printf("1. Primer operando %.2f. Eliga esta opción para cambiarlo\n", numeroA);
					printf("2. Segundo operando %.2f. Eliga esta opción para cambiarlo\n", numeroB);
					printf("3. Calcular todas las operaciones\n");
					printf("\ta) Calcular la suma (%.2f+%.2f)\n", numeroA, numeroB);
					printf("\tb) Calcular la resta (%.2f-%.2f)\n", numeroA, numeroB);
					printf("\tc) Calcular la division (%.2f/%.2f)\n", numeroA, numeroB);
					printf("\td) Calcular la multiplicacion (%.2f*%.2f)\n", numeroA, numeroB);
					printf("\te) Calcular el factorial (%.2f! %.2f!)\n", numeroA, numeroB);
					printf("4. Informar resultados\n");
					printf("5. Salir\n");
					opcion = PedirEntero("Ingrese una de las opciones entre 1 y 5: ", "Error, ingrese una de las opciones entre 1 y 5: ", 1, 5);
				}
			}

			switch(opcion)
			{
				case 1:
					printf("Ingresó opción 1. Para operar ingresar el primer operando A=X: ");
					scanf("%f", &numeroA);
					printf("Ingresó A=%.2f\n", numeroA);
					contadorA++;
					system ("PAUSE");
					break;
				case 2:
					printf("Ingresó opción 2. Para operar ingresar el segundo operando B=Y: ");
					scanf("%f", &numeroB);
					printf("Ingreso B=%.2f\n", numeroB);
					contadorB++;
					system ("PAUSE");
					break;
				case 3:
					if(contadorA == 0 || contadorB == 0)
					{
						printf("Ingrese los operandos antes de calcular las operaciones\n");
					}
					else
					{
						printf("Se están calculando las operaciones para A=%.2f y B=%.2f\n", numeroA, numeroB);
						sumarNumeros = CalculoSuma(numeroA, numeroB);
						restarNumeros = CalculoResta(numeroA, numeroB);
						divisionValidada = ValidarDivision(numeroB);
						if(divisionValidada == 1)
						{
							dividirNumeros = CalculoDivision(numeroA, numeroB);
						}
						multiplicarNumeros = CalculoProducto(numeroA, numeroB);

						numeroFactorialA = ValidarFactorial(numeroA);
						numeroFactorialB = ValidarFactorial(numeroB);


						if(numeroFactorialA == 1)
						{
							factorialNumeroA = CalculoFactorial(numeroA);
						}


						if(numeroFactorialB == 1)
						{
							factorialNumeroB = CalculoFactorial(numeroB);
						}


						casoTres++;
					}

					system ("PAUSE");
					break;

				case 4:
					if(contadorA == 0 || contadorB == 0 || casoTres == 0)
					{
						printf("Ingrese los operandos y calcule las operaciones antes de mostrarlos resultados\n");
					}
					else
					{
						printf("Los resultados de las operaciones para A=%.2f y B=%.2f son:\n", numeroA, numeroB);
						printf("El calculo de la suma (%.2f+%.2f) es %.2f\n", numeroA, numeroB, sumarNumeros);
						printf("El calculo de la resta (%.2f-%.2f) es %.2f\n", numeroA, numeroB, restarNumeros);
						printf("El calculo de la división (%.2f/%.2f) es %.2f\n", numeroA, numeroB, dividirNumeros);
						printf("El calculo de la multiplicación (%.2f*%.2f) es %.2f\n", numeroA, numeroB, multiplicarNumeros);
						if(numeroFactorialA == 1 )
						{
							printf("El calculo del factorial (%.2f!) es %d\n", numeroA, factorialNumeroA);
						}
						else
						{
							printf("Error math! No se puede calcular el factorial de (%.2f!)\n", numeroA);
						}

						if(numeroFactorialB == 1 )
						{
							printf("El calculo del factorial (%.2f!) es %d\n", numeroB, factorialNumeroB);
						}
						else
						{
							printf("Error math! No se puede calcular el factorial de (%.2f!)\n", numeroB);
						}

					}
					system ("PAUSE");
					break;
			}

		}while(opcion != 5);

		printf("Ha finalizado el proceso");

	return EXIT_SUCCESS;
}
