#include<stdio.h>

int main()
{
	//Declaración de variables y arreglos.
	int i;//indice del arreglo de numeros.
	int arreglo2[4];
	
	char cadena[]="Hola Mundo 23";//cadena proporcionada.
	char nombre[20];
	
	//ENTRADA DE DATOS.
	printf("A continuacion ingresa los 4 numeros: ");
	for(i=0; i<=3; i++)//Ciclo que nos ayuda a guardar cada uno de los elementos, siempre empieza en 0.
	{
		printf("\nIngresa numero: ");
		scanf("%d",&arreglo2[i]);//despues del nombre entre corchetes se pone la "i" para guardar cada uno de los elementos en una posición.
	}
	
	printf("\nIngresa tu nombre: ");
	scanf("%s",&nombre);//Se guarda en el arreglo.
	
	
	
	
	//IMPRESION DE DATOS.
	printf("\n\tHola %s",nombre);
	printf("\nLos numeros que ingresaste son: ");
	for(i=0; i<=3; i++)//Ciclo que nos ayuda a mostrar cada uno de los elementos ingresados.
	{
		printf("\n%d",arreglo2[i]);//Igualmente se agrega la "i" para mostrar cada uno de los elementos que se guardo en la posición asignada.
	}
	
	printf("\n\nLa cadena ya proporciona fue: %s",cadena);//muestra la cadena que se dio desde el principio del programa.
	
}
