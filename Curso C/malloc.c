#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *a, b[80];
	//int i[20]; // Arreglo de prueba para ver como funciona la func��n 'sizeof'
	
	// Leemos cadena
	gets(b); 
	
	// Reservamos memoria din�micamente
	a = (char *)malloc(strlen(b));  
	
	// Verificamos que realmente nos haya reservado la memoria
	if(a == NULL)
	{
		printf("No se pudo reservar, memoria insuficiente");
		exit(1);
	}
	
	// Copiamos la cadena al apuntador
	strcpy(a,b);
	
	printf("%s\t%s\n",b,a); // Imprimos las 2 cadenas separadas por un tabulador '\t'
	printf("Tama�o de a= %d\n",strlen(a)); // Checamos el tama�o de la cadena a
	printf("Bytes ocupados en b= %d\n",strlen(b)); // Checamos los bytes ocupados en el arreglo (n�mero de caracteres)
	printf("Tama�o de b = %d\n",sizeof(b)); // Vemos que el tama�o de b es 80 porque ese es el tama�o que nosotros le definimos al arreglo
	//printf("Tama�o de b = %d\n",sizeof(i)); // Demostraci�n de la funci�n sizeof

	// Nota, el tama�o de un arreglo o apuntador es el n�mero de elementos por el tama�o de cada elemento
	
	
	return 0;
}

