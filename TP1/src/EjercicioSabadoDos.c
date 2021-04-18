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


int main()
{
	char opcion;
	int A;
	int B;


	printf("UTILICE LA CALCULADORA:\n1. Ingresar 1er operando\n2. Ingresar 2do operando\n3. Calcular todas las operaciones\n\ta)Calcular la suma\n\tb)Calcular la resta\n\tc)Calcular la división\n\td)Calcular la multiplicación\n\te)Calcular el factorial\n4. Informar resultados\n4. Informar resultados\n5. Salir");
	scanf("%c", &opcion);

	switch (opcion)
	{
	case 1:
		printf("Ingresar el primer operando: ");
		scanf("%d", 'A');
		printf("A=%d", 'A');
	case 2:
		printf("Ingresar el segundo operando: ");
		scanf("%d", &B);
		printf("B=%d", &B);
	}
	return EXIT_SUCCESS;
}
