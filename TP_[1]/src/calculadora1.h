
#include <stdio.h>
#ifndef CALCULADORA1_H_
#define CALCULADORA1_H_

/// @fn void menu()
/// @brief Despliega un listado de opciones (del 1 al 5) y utilizando un switch llama a las operaciones
///  de carga, calculo y resultados.
///
///
void menu();

/// @fn int SumarDosNumeros(int, int)
/// @brief Utilizo esta funcion para sumar dos numeros enteros.
/// La funcion toma el valor de la variables numero1 y 2, ejecuta
/// la operación de suma y devuelve el resultado de una variable local "resultado" de tipo int.
///
/// @param numero1
/// @param numero2
/// @return resultado
int SumarDosNumeros(int numero1, int numero2);


/// @fn int RestarDosNumeros(int, int)
/// @brief Utilizo esta funcion para restar dos numeros enteros.
/// La funcion toma el valor de la variables numero1 y 2, ejecuta
/// la operación de resta y devuelve el resultado de una variable local "resultado" de tipo int.
///
/// @param numero1
/// @param numero2
/// @return resultado
int RestarDosNumeros(int numero1, int numero2);


/// @fn int MultiplicaDosNumeros(int, int)
/// @brief Utilizo esta funcion para multiplicar dos numeros enteros.
/// La funcion toma el valor de la variables numero1 y 2, ejecuta
/// la operación de multiplicar y devuelve el resultado de una variable local "resultado" de tipo int.
///
/// @param numero1
/// @param numero2
/// @return resultado
int MultiplicaDosNumeros(int numero1, int numero2);


/// @fn float DivideDosNumeros(int, int)
/// @brief Utilizo esta funcion para dividir dos numeros enteros.
/// La funcion toma el valor de la variables numero1 y 2, ejecuta
/// la operación de division y devuelve el resultado de una variable local "resultado" de tipo float.
///
/// @param numero1
/// @param numero2
/// @return resultado
float DivideDosNumeros(int numero1, int numero2);


/// @fn long Factoriza(long)
/// @brief Utilizo esta funcion para factorizar un numero.
/// La funcion toma el valor de un numero, ejecuta la operación de factorizar
/// multiplicando el numero por si mismo menor uno, mientras que el numero sea mayor a uno
/// luego de esto devuelve el resultado de una variable local "resultado" de tipo long.
///
///
/// @param numero
/// @return resultado
long Factoriza(long numero);

#endif /* CALCULADORA1_H_ */
