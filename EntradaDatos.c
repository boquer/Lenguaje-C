#include<stdio.h> //Biblioteca para scanf (siempre se tiene que poner).

int main()
{
	//DECLARACIÓN DE VARIABLES.
	int entero;
	float decimal;
	char caracter;
	char nombre[20];
	
	printf("Ingresa numero entero: ");//Se pide al usuario el numero entero
	scanf("%d",&entero);//Guarda el dato en la variable "entero"
	
	/*Necesariamente se necesita el "&" para poder guardar el dato*/
	
	
	printf("Ingresa numero decimal: ");//Se pide al usuario el numero decimal.
	scanf("%f",&decimal);//Guarda el dato en la variable "decimal"
	
	printf("Ingresa caracter: ");//Se pide caracter
	scanf("%s",&caracter); //Guarda caracter.
	
	printf("Ingrese su nombre: ");//Pide nombre.
	scanf("%s",&nombre);//Guarda el nombre proporcionado.
	
	//IMPRESION DE DATOS.
	printf("\nNumero entero: %d ",entero);
	printf("\nNumero decimal: %f ",decimal);
	printf("\nCaracter: %c ",caracter);
	printf("\nSu nombre es: %s",nombre);
	
	return 0;
}
/* Cada tipo de variable lleva una especificación de formato, este nos ayuda a guardar y mostrar los datos 
que se guardan dentro de las variables*/

