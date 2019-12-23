#include<stdio.h>

int main()
{
	int numero1, numero2,suma,resta;
	
	printf("Ingrese el primero numero: ");
	scanf("%d",&numero1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d",&numero2);
	
	if(numero1 < numero2)
	{
		suma = numero1 + numero2;
		printf("\nComo el numero 1 es menor que numero 2, entonces...");
		printf("\nLa suma es: %d",suma);
		
	}
	else
	{
		resta = numero1 - numero2;
		printf("\nComo el numero 1 es mayor que el numero 2, entonces...");
		printf("\nLa resta es: %d",resta);
	}
	
	return 0;
}
