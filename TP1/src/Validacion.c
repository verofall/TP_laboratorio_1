/*
 * Validacion.c
 *
 *  Created on: 29 mar. 2021
 *      Author: adprof
 */


#include "Validacion.h"
#include "String.h"

int PedirEntero(char mensaje[], char mensajeError[], int minimo, int maximo)
{
	printf(mensaje);
	int numeroIngresado;
	scanf("%d", &numeroIngresado);

	while(numeroIngresado < minimo || numeroIngresado > maximo)
	{
		printf(mensajeError);
		scanf("%d", &numeroIngresado);

	}
	return numeroIngresado;
}

float CalculoSuma(float numero1, float numero2)
{
	float suma;
	suma=(numero1 + numero2);

	return suma;
}


float CalculoResta(float numero1, float numero2)
{
	float resta;
	resta = (numero1 - numero2);

	return resta;
}


float CalculoDivision(float numero1, float numero2)
{
	float cociente;
	if(numero2!=0)
	{
		cociente=(numero1 / numero2);
	}

	return cociente;
}


float CalculoProducto(float numero1, float numero2)
{
	float producto;
	producto=(numero1 * numero2);

	return producto;
}


int CalculoFactorial(int numero)
{
	int factorial;
	if(numero==0)
	{
		factorial=1;
	}
	else
	{
		factorial = numero*CalculoFactorial(numero-1);
	}
	return factorial;
}


int ValidarDivision(float numero1)
{
	int validador;

	if(numero1 != 0)
	{
		validador=1;
	}
	else
	{
		validador=0;
	}
	return validador;
}


int ValidarFactorial(float numero)
{
	int validador;
	int parteEntera;
	validador = 1;

	parteEntera = numero;

	if(numero < 0 ||  numero > parteEntera)
	{
		validador = 0;
	}

	return validador;

}

