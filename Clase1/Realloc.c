#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	char cad[50];
	char *cadenaF;
	int i=0;
	cadenaF = (char*) calloc(50,sizeof(char));

	for(i=0; i<5; i++){
		printf("Ingresa la palabra %d:\t",i);
		scanf("%s",cad);
		cadenaF = (char*) realloc(cadenaF,((int)strlen(cadenaF) 
			+ (int) strlen(cad)) * sizeof(char));
		cadenaF= (char*) strcat(cadenaF," ");
		cadenaF= (char*) strcat(cadenaF,cad);
		printf("Tamaño: %d\n",(int) strlen(cadenaF));
	}

	printf("%s\n",cadenaF);
	free(cadenaF);
}