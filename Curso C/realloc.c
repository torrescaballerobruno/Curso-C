// Programa que lee cadenas de tama�o indefinido utilizando realloc
#include <stdio.h>
#include <stdlib.h>

/* Prototipo de nuestra funci�n, recibir� un apuntador de tipo caracter
 y retornar� un apuntador de tipo caracter */
char* leer_cadena(char* cadena);

int main(int argc,char *argv[])
{
	char *nombre = NULL; // Inicializamos nuestro apuntador para poderle reasignar memoria
	
	printf("Ingresa tu nombre: ");
	nombre = leer_cadena(nombre); // Mandamos a llamar a nuestra funci�n
	printf("Hola, %s.",nombre);
	
	free(nombre); // Liberamos memoria
	
	return 0;
}

// Definici�n de nuestra funci�n
char* leer_cadena(char* cadena)
{
	int size = 1;
	char *tmp;
	
	// Ciclo do-while para leer todos los caracteres que ingrese el usuario
	do{
		/* Funci�n realloc para reasignar memoria a nuestro apuntador, es necesario que 
		nuestro apuntador tenga una direcci�n dada por las funciones malloc y calloc
		o en su defecto con un valor inicial NULL*/
		tmp = (char*)realloc(cadena,size*sizeof(char)); //  Funci�n realloc tiene 2 par�metros
		// Verificamos que si nos pudo reasignar memoria
		if(tmp == NULL)
		{
			return NULL;
		}
		// Asignamos esa nueva memoria a cadena
		cadena = tmp;
		/* Leemos caracter por caracter, lo guardamos en nuestro apuntador,
		recordemos que el apuntador lo podemos manejar como arreglo
		el �ndice ser� size-1 porque la variable size la inicializamos en 1*/
		scanf("%c",&cadena[size-1]);
		// Incrementamos la variable size en 1
		size++;
		
	}while(cadena[size-2] != '\n'); // El programa leer� los caracteres hasta que el usuario ingrese un enter ('\n')
	
	/* Cambiamos ese enter(salto de linea '\n') por el caracter de t�rmino de cadena
	para el indice utilizamos 'size -2' ya que una vez que el usuario 
	ingres� un caracter la variable aumentar� en 1 y como fue inicializada en 1
	por eso le tenemos que restar 2'*/
	cadena[size-2] = '\0';
	
	// Retornamos el apuntador llamado cadena
	return cadena;
}





