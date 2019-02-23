#include <stdio.h>
#include <string.h>

struct Persona{
	char nombre[50];
	int edad;
	char cuenta[10];
};

struct Persona llenaDatos(void);
void imprimeDatos(struct Persona p);
void imprimeDatos2(struct Persona * p);

int main(int argc, char* argv[]){
	struct Persona p = llenaDatos();
	imprimeDatos2(&p);
	imprimeDatos(llenaDatos());
}

void imprimeDatos2(struct Persona * p){
	printf("Nombre: %s\n",p->nombre);
	printf("Edad: %d\n",p->edad);
	printf("Cuenta: %s",p->cuenta);
}

void imprimeDatos(struct Persona p){
	printf("Nombre: %s\n",p.nombre);
	printf("Edad: %d\n",p.edad);
	printf("Cuenta: %s",p.cuenta);
}

struct Persona llenaDatos(void){
	struct Persona p;
	char nombre[50],cuenta[10];
	int edad;
	printf("Ingrese un nombre: ");
	scanf("%[^\n]",nombre);
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	printf("Ingrese numero de cuenta: ");
	scanf("%s",cuenta);

	strcpy(p.nombre,nombre);
	p.edad = edad;
	strcpy(p.cuenta,cuenta);

	return p;
}