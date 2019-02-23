#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	char cad[50];
	char *cadenaFull;
	int i=0;

	cadenaFull = (char*) calloc(50,sizeof(char));
	//strcpy(cadenaFull,"Hola Mundo");
	//printf("%d\n",(int) strlen(cadenaFull));

	for(i=0; i<5; i++){
		printf("Ingresa la cadena %d:\t",i);
		scanf("%s",cad);
		cadenaFull = (char*) realloc(cadenaFull,(((int ) strlen(cadenaFull)  ) +((int ) strlen(cad))) * sizeof(char) );
		cadenaFull = (char*) strcat(cadenaFull," ");
		cadenaFull = (char*) strcat(cadenaFull,cad);
		printf("Tamaño de la cadena:  %d\n",(int)strlen(cadenaFull));
	}
	printf("%s\n", cadenaFull);
}