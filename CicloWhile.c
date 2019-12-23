/*En el ciclo While primero checa la condición, si esta cumple, entonces, sigue
con las intruciiones dadas dentro de este*/

#include<stdio.h>

int main()
{
	//DECLARACIÓN DE VARIBLES.
	int cantidad, i=1;
	
	printf("Ingrese cuantos número quiere ver en pantalla: ");
	scanf("%d",&cantidad);//Se guardo el dato proporcionado por el usuario.
	
	//Whilw(condición)
	while(i<=cantidad)//Inicia ciclo while.
	{
		printf("\n%d",i);//Se imprime el valor de "i".
		i++;//Incremento de "i".
	}
	return 0;
}
