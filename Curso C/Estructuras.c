#include <stdio.h>
#include <string.h>

struct Persona{
	char nombre[50];
	int edad;	
	char cuenta[10];
};

struct Persona llenaDatos(void);
void imprimeStruct(struct Persona * p);
void imprimeStruct2(struct Persona p);

int main(){
	struct Persona p = llenaDatos();

/*
	printf("Nombre:  %s\n",p.nombre);
	printf("Edad:    %d\n",p.edad);
	printf("Cuenta:  %s\n",p.cuenta);
*/
	imprimeStruct2(p);
	printf("\nImprimir otra forma\n\n");
	imprimeStruct(&p);
}

void imprimeStruct2(struct Persona p){
	printf("Nombre:  %s\n",p.nombre);
	printf("Edad:    %d\n",p.edad);
	printf("Cuenta:  %s\n",p.cuenta);	
}

void imprimeStruct(struct Persona * p){
	printf("Nombre:  %s\n", p->nombre);
	printf("Edad:    %d\n", p->edad);
	printf("Cuenta:  %s\n", p->cuenta);
}

struct Persona llenaDatos(void){
	struct Persona p;
	char nombre[50],cuenta[10];
	int edad;
	printf("Ingrese un nombre: ");
	scanf("%s",nombre);
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	printf("Ingrese un numero de cuenta: ");
	scanf("%s",cuenta);

	strcpy(p.nombre,nombre);
	p.edad = edad;
	strcpy(p.cuenta,cuenta);

	return p;
}