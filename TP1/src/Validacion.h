/*
 * Validacion.h
 *
 *  Created on: 29 mar. 2021
 *      Author: adprof
 */

#include <stdio.h>

#ifndef VALIDACION_H_
#define VALIDACION_H_
/**
 * @fn int PedirEntero(char[], char[], int, int)
 * @brief Pide un número, valida si es entero y si está dentro de las opciones del menú y devuelve la opción.
 *
 * @param mensaje
 * @param mensajeError
 * @param minimo
 * @param maximo
 * @return
 */
int PedirEntero(char mensaje [], char mensajeError[], int minimo, int maximo);

/**
 * @fn float CalculoSuma(float, float)
 * @brief Realiza el calculo de la suma de dos números y devuelve el resultado.
 *
 * @param numero1
 * @param numero2
 * @return
 */

float CalculoSuma(float numero1, float numero2);

/**
 * @fn float CalculoResta(float, float)
 * @brief Realiza el calculo de la resta de dos números y devuelve el resultado.
 *
 * @param numero1
 * @param numero2
 * @return
 */

float CalculoResta(float numero1, float numero2);
/**
 * @fn float CalculoDivision(float, float)
 * @brief Realiza el calculo de la división de dos números, considerando que denominador sea distinto de cero y devuelve el resultado.
 *
 * @param numero1
 * @param numero2
 * @return
 */

float CalculoDivision(float numero1, float numero2);

/**
 * @fn float CalculoProducto(float, float)
 * @brief Realiza el calculo del producto de dos números y devuelve el resultado.
 *
 * @param numero1
 * @param numero2
 * @return
 */

float CalculoProducto(float numero1, float numero2);

/**
 * @fn int CalculoFactorial(int)
 * @brief Realiza el calculo del factorial de un número y devuelve el resultado.
 *
 * @param numero
 * @return
 */

int CalculoFactorial(int numero1);

/**
 * @fn int ValidarDivision(float)
 * @brief Valida que un numero sea diferente de cero.
 *
 * @param numero1
 * @return
 */

int ValidarDivision(float numero1);

/**
 * @fn int ValidarFactorial(float)
 * @brief Valida que un numero sea mayor a cero y entero.
 *
 * @param numero
 * @return
 */

int ValidarFactorial(float numero);

#endif /* VALIDACION_H_ */
