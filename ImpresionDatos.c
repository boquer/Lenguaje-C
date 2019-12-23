#include<stdio.h> //Biblioteca para printf (siempre se tiene que agregar).

int main()//inicia la ejecución del programa.
{
	
	//DECLARACIÓN DE Variables
	int a=1; //Numero entero.
	float b=3.4;//Numero decimal.
	char c='a';//Caracter.
	char nombre[]= "Arely";//Cadena (se necesita un arreglo).
	
	
	//IMPRESEION DE DATOS
	printf("Hola mundo"); //Impresión de texto.
	printf("\nHola mundo2"); //Impresion de texto con salto de linea, asi no se junta con el de arriba.
	
	printf("\nNumero entero: %d",a);//Impresion de numero entero.
	printf("\nNumero flotante: %f",b);//Impresion de numero decimal.
	printf("\nCaracter: %c",c);//Impreseion de carcater.
	printf("\nNombre: %s",nombre);//Impresion de cadena.
	
	return 0;//Finaliza el código.
}
