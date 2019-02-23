#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Persona{
	char nombre[50];
	int edad;
	char cuenta[10];
	//struct Persona *sig;
}PER;

PER* llenaDatos();
PER* llenaDatos2();
void imprimeStruct(struct Persona * p);

int main(int argc, char *argv[]){
	
	PER *a =llenaDatos();
	PER *b = llenaDatos2();


	imprimeStruct(a);
	imprimeStruct(b);

	free(a);
	free(b);
}

PER* llenaDatos2(){
	PER *persona = (PER*) calloc(1,sizeof(PER));
	char nombre[50],cuenta[10];
	int edad;
	printf("Ingrese un nombre: ");
	scanf("%s",nombre);
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	printf("Ingrese un numero de cuenta: ");
	scanf("%s",cuenta);

	strcpy(persona->nombre,nombre);
	persona->edad = edad;
	strcpy(persona->cuenta,cuenta);

	return persona;
}

PER* llenaDatos(){
	PER *persona = (PER*)malloc(sizeof(PER));
	char nombre[50],cuenta[10];
	int edad;
	printf("Ingrese un nombre: ");
	scanf("%s",nombre);
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	printf("Ingrese un numero de cuenta: ");
	scanf("%s",cuenta);

	strcpy(persona->nombre,nombre);
	persona->edad = edad;
	strcpy(persona->cuenta,cuenta);

	return persona;
} 

void imprimeStruct(struct Persona * p){
	printf("Nombre:  %s\n", p->nombre);
	printf("Edad:    %d\n", p->edad);
	printf("Cuenta:  %s\n",p->cuenta);
}