#include <iostream>
#include <stdio.h>

int sumaDatos(int a, int b) {

	int resultado;
	resultado = a + b;
	

	return resultado;
}

int main()
{
	int iDato1;
	int iDato2;
	int iResultado;

	printf("\n -------Suma de Datos------- \n");

	//Lectura de Datos
	printf("Ingresa tu primer numero:");
	scanf_s("%d", &iDato1);

	printf("Ingresa tu segundo numero:");
	scanf_s("%d", &iDato2);

	//Operacion
	iResultado = sumaDatos(iDato1,iDato2);

	printf("El resultado de la suma es: %d",iResultado);

	return 0;

}

