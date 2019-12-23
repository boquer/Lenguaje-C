/*El ciclo Do While realiza aunque sea una vez las instrucciones, posteriormente
checa si cumple la condición para seguir en el ciclo o no*/

#include<stdio.h>

int main()
{
	//DECLARACION DE VARIABLES.
	int cantidad, i=1;
	
	printf("Ingrese cuantos numeros desea: ");
	scanf("%d",&cantidad);//Se guarda el dato que proporcionó el usuario.
	
	
	do
	{
		printf("\n%d",i);//Se imprime el valor de "i".
		i++;//Imcremento de "i".
	}while(i<=cantidad);//Condición.
}
