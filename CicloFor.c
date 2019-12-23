#include<stdio.h>

int main()
{
	//DECLARACION DE VARIABLES.
	int cantidad,i;
	
	printf("Ingrese cuantos numeros quiere ver en pantalla: ");
	scanf("%d",&cantidad);//Guarda dato proporcionado por el usuario.
	
	// for(unicializacion; condició; incremento o decremento)
	for(i=1;i<=cantidad;i++)//Inicia ciclo for.
	{
		printf("\n%d",i);//Imprime el valor de "i".
	}
	return 0;
}
