#include<stdio.h>

int main()
{
	//DECLARACIÓN DE VARIABLES.
	int numero1, numero2,suma,resta,multiplicacion,division;
	
	//SE PIDEN DATOS.
	printf("Ingresa el primer numero: ");
	scanf("%d",&numero1); //Se guarda el primer numero proporcionado.
	
	printf("Ingresa el segundo numero: ");
	scanf("%d",&numero2);//Se guarda el segundo numero proporcionado.
	
	//OPERACIONES.
	suma = numero1 + numero2; 
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1/numero2;
	
	//SALIDA DE DATOS.
	printf("\nLa suma es: %d",suma);
	printf("\nLa resta es: %d",resta);
	printf("\nLa multiplicacion es: %d",multiplicacion);
	printf("\nLa division es: %d",division);
	
	return 0;
}
