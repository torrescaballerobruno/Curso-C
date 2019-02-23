#include <stdio.h>
#include <stdlib.h>

// Constantes definidas para utilizarlas a lo largo del programa
#define FILAS 2
#define COLUMNAS 3

// Prototipos de nuestras funciones
int **llenar_matriz(int **); // Recibe un doble apuntador de tipo entero y retorna un doble apuntador de tipo entero
void imprimir_matriz(int **); // Recibe un doble apuntador de tipo entero y no retorna nada

int main()
{
	int **matriz,i; // Declaramos un doble apuntador de tipo entero y una variable entera
	//int** matriz,i; // Es diferente, decimos que las variables 'matriz' e 'i' son dobles apuntadores
	
	/* Reservamos el número de filas, cada elemento de nuestra fila debe ser
	un apuntador de tipo entero*/
	matriz = (int **)malloc(FILAS*sizeof(int *));
	// Verificamos que si se pudo reservar la memoria
	if(matriz == NULL)
	{
		printf("No se pudo reservar memoria suficiente");
		exit(1);
	}
	
	// Recorremos nuestra matriz para reservar la memoria para las columnas
	for(i=0;i<FILAS;i++)
	{
		/* Podemos manejar el apuntador como un arreglo, a cada elemento de ese arreglo
		le vamos a reservar memoria, ahora cada elemento será de tipo entero, ya no un apuntador*/
		matriz[i] = (int *)malloc(COLUMNAS*sizeof(int));
		// verificamos que si nos pudo reservar la memoria
		if(matriz[i] == NULL)
		{
			printf("No se pudo reservar memoria suficiente");
			exit(1);
		}
	}
	// Mandamos a llamar las funciones
	/* 
	int **tmp;
	tmp = llenar_matriz(matriz);
	imprimir_matriz(tmp); */
	
	/* Es lo mismo que arriba pero en una sola linea (ahorramos la declaración 
	de variables que no son necesarias), ya que nuestra función'llenar_matriz' 
	retorna un apuntador de apuntadores de tipo entero y la función 'imprimir matriz' 
	recibe como argumento un apuntador de apuntadores de tipo entero */
	imprimir_matriz(llenar_matriz(matriz));
	
	/* Por último liberamos la memoria que reservamos anteriormente, tiene que ser
	al revés de como la reservamos, es decir, primero tenemos que liberar las COLUMNAS
	y posteriormente liberar las FILAS */
	for(i=0;i<FILAS;i++)
	{
		free(matriz[i]); // Liberamos las columnas
	}
	
	free(matriz); // Liberamos las filas
	
	return 0;
}
