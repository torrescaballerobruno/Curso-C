// Programa que almacena tu nombre en una cadena de acuerdo a su longitud

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int letras_nombre,i;
	char *nombre;
	
	printf("¿Cuantos caracteres tiene tu nombre? ");
	scanf("%d",&letras_nombre); // guardamos la cantidad que ingresó el usuario
	
	// Vemos como reservar memoria con calloc y malloc
	nombre = (char *)calloc(letras_nombre+1,sizeof(char)); // calloc inicializa en 0 la memoria, tiene 2 argumentos
	// nombre = (char *)malloc((letras_nombre+1)*sizeof(char)); // malloc solo tiene un parámetro
	
	// Verificamos que realmente nos haya podido reservar memoria, si no pudo nos regresará un NULL
	if(nombre == NULL) 
	{
		printf("No se pudo reservar memoria\n");
		exit(1); // Termina la ejecución de nuestro programa con 1
	}
	
	// Parte del código extra para verificar que tiene nuestra memoria y ver la diferencia entre malloc y calloc
	printf("En la memoria reservada hay: ");
	for(i=0; i<letras_nombre+1;i++)
	{
		//printf("%d ",nombre[i]); // con manejo de arreglos
		printf("%d ",*(nombre+i)); // con aritmetica de apuntadores
	}
	
	printf("\nEscribe tu nombre: ");
	fgets(nombre,letras_nombre+1,stdin); // Leemos la cadena que ingresa el usuario con la función fgets
	printf("Hola, %s.\n",nombre); // Imprimimos la cadena
	
	free(nombre);// Liberamos memoria
	
	return 0;
}
