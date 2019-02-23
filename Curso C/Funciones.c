#include <stdio.h>

double sumar(double a, double b);
double restar(double a, double b);
double multiplicacion(double a, double b);


void holaMundo(void);
double regresaPI(void);
void imprimeCadena(char *str);

void funcionMamalona(char *str, double (* ptr_func)(double a, double b) );

int main(int argc, char *argv[]){
	holaMundo();
	printf("Resultado de la suma:   ");
	sumar( 1,3);
	printf("Resultado de la resta:\t%d ",(int)restar(10,5));
	printf("PI:\t%f\n",regresaPI());
	imprimeCadena("Bruno xD");

	//apuntador a funciones
	funcionMamalona("suma",sumar);
	funcionMamalona("resta",restar);
	funcionMamalona("multiplicacion",multiplicacion);
}

void funcionMamalona(char *str, double (* ptr_func)(double a, double b) ){
	double x = 10.5, y = 11.2;
	printf("El resultado de la %s es: %f\n",str,ptr_func(x,y) );
}

void imprimeCadena(char *str){
	printf("Hola  %s",str);
}

double restar(double a, double b){
	return a-b;
}

double sumar(double a, double b){
	printf("%f\n",a +b);
	return (double)a +b;
}

double multiplicacion(double a, double b){
	return a*b;
}

void holaMundo(){
	printf("Hola Mundo desde funcion\n");
}

double regresaPI(void){
	return 3.14159;
}

