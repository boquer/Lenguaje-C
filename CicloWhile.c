/*En el ciclo While primero checa la condici�n, si esta cumple, entonces, sigue
con las intruciiones dadas dentro de este*/

#include<stdio.h>

int main()
{
	//DECLARACI�N DE VARIBLES.
	int cantidad, i=1;
	
	printf("Ingrese cuantos n�mero quiere ver en pantalla: ");
	scanf("%d",&cantidad);//Se guardo el dato proporcionado por el usuario.
	
	//Whilw(condici�n)
	while(i<=cantidad)//Inicia ciclo while.
	{
		printf("\n%d",i);//Se imprime el valor de "i".
		i++;//Incremento de "i".
	}
	return 0;
}
