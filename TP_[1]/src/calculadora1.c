
#include <stdio.h>
#include "calculadora1.h"
void menu (){

	int control = 0;
	int numero1 = 0 , numero2 = 0;
	int valorSuma = 0, valorResta = 0, valorMulti = 0;
	long valorFact1 = 0, valorFact2 = 0;
	float valorDivision = 0;

	do{

	printf("\nMENU PRINCIPAL - Seleccione la opcion deseada");

	printf("\n 1. Ingresar 1er operando (A= %d)",numero1);
	printf("\n 2. Ingresar 2do operando (B= %d)",numero2);
	printf("\n 3. Calcular operaciones matematicas");
	printf("\n 4. Informar resultados");
	printf("\n 5. Salir");
	printf("\n");

	scanf("%d", &control);

	switch (control)
		{
			case 1 :
				printf("\nIngrese el primer número (Actualmente: %d)",numero1);
				scanf("%d", &numero1);
				break;
			case 2 :
				printf("\nIngrese el segundo número (Actualmente: %d)",numero2);
				scanf("%d", &numero2);
				break;
			case 3 :
				printf("\nEjecutando las operaciones");
				printf("\n A Suma");
				printf("\n B Resta");
				printf("\n C Multiplicacion");
				printf("\n D division");
				printf("\n E Factorizacion de valores");

	            valorSuma=SumarDosNumeros(numero1, numero2);
				valorResta=RestarDosNumeros(numero1, numero2);
				valorMulti=MultiplicaDosNumeros(numero1, numero2);
				valorDivision=DivideDosNumeros(numero1, numero2);
				valorFact1=Factoriza(numero1);
				valorFact2=Factoriza(numero2);
				break;
			case 4 :
				printf("\nMENU RESULTADOS - Informando resultados");
				printf("\nA El resultado de A+B es: %d", valorSuma);
				printf("\nB El resultado de A-B es: %d", valorResta);
				printf("\nC El resultado de A/B es: %.2f", valorDivision);
				printf("\nD El resultado de A*B es: %d", valorMulti);
				printf("\nE El factorial de A es: %ld y El factorial de B es: %ld", valorFact1, valorFact2);
				break;
			case 5 :
				control=5;
				break;
			default:
				printf("\nCaracter no valido - Por favor seleccione un valor del menu");
				break;
		}
	printf("\n");
	printf("\n");
	}while( control != 5 );
}

int SumarDosNumeros(int numero1, int numero2){
	int resultado;
	resultado=(numero1+numero2);
	return resultado;
}
int RestarDosNumeros(int numero1, int numero2){
	int resultado;
	resultado=(numero1-numero2);
	return resultado;
}
int MultiplicaDosNumeros(int numero1, int numero2){
	int resultado;
	resultado=(numero1*numero2);
	return resultado;
}
float DivideDosNumeros(int numero1, int numero2){
	float resultado;
	if (numero2 != 0){
		resultado=(numero1/numero2);
				return resultado;
	}
	else{
		printf("\n");
		printf("\n");
		printf("Error, no puede dividirse por 0");
		printf("\n");
		printf("\n");
		return 0;
	}
}
long Factoriza(long numero){
	long resultado;
	resultado= (numero);
	while (numero > 1){
		resultado= resultado * (numero-1);
		numero --;
	}
	return resultado;
}

