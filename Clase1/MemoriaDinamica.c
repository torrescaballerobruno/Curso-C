#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct Persona{
	char nombre[50];
	int edad;
	char cuenta[10];
}PER;

PER* llenaDatos();
PER* llenaDatos2();
void imprimeDatos(PER* p);

int main(int argc, char * argv[]){
	PER * a = llenaDatos();
	PER * b = llenaDatos2();

	imprimeDatos(a);
	imprimeDatos(b);

	free(a);
	free(b);
}

PER* llenaDatos2(){
	PER* persona = (PER*) malloc(sizeof(PER));
	char nombre[50],cuenta[10];
	int edad;
	printf("Ingrese un nombre: ");
	scanf("%[^\n]",nombre);
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	printf("Ingrese numero de cuenta: ");
	scanf("%s",cuenta);	
	strcpy(persona->nombre, nombre);
	persona->edad = edad;
	strcpy(persona->cuenta, cuenta);
	return persona;
}

PER* llenaDatos(){
	PER* persona = (PER*) calloc(1,sizeof(PER));

	char nombre[50],cuenta[10];
	int edad;
	printf("Ingrese un nombre: ");
	scanf("%[^\n]",nombre);
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	printf("Ingrese numero de cuenta: ");
	scanf("%s",cuenta);	
	// "->" para apuntadores
	//  "." para acceso directo
	strcpy(persona->nombre, nombre); //asignar nombre a la estructura
	persona->edad = edad;
	strcpy(persona->cuenta, cuenta);
	return persona;
}

void imprimeDatos(PER* p){
	printf("Nombre: %s\n",p->nombre);
	printf("Edad: %d\n",p->edad);
	printf("Cuenta: %s",p->cuenta);
}