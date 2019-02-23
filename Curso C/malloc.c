#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *a, b[80];
	//int i[20]; // Arreglo de prueba para ver como funciona la funcíón 'sizeof'
	
	// Leemos cadena
	gets(b); 
	
	// Reservamos memoria dinámicamente
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
	printf("Tamaño de a= %d\n",strlen(a)); // Checamos el tamaño de la cadena a
	printf("Bytes ocupados en b= %d\n",strlen(b)); // Checamos los bytes ocupados en el arreglo (número de caracteres)
	printf("Tamaño de b = %d\n",sizeof(b)); // Vemos que el tamaño de b es 80 porque ese es el tamaño que nosotros le definimos al arreglo
	//printf("Tamaño de b = %d\n",sizeof(i)); // Demostración de la función sizeof

	// Nota, el tamaño de un arreglo o apuntador es el número de elementos por el tamaño de cada elemento
	
	
	return 0;
}

