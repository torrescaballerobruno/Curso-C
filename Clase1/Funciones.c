#include <stdio.h>

void imprimir(void);
void sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
void funcionChida(char *str,double (*ptr_func)(double a, double b) );

int main(int argc, char *argv[]){
	imprimir();
	sumar(5,6);
	printf("Resta: %f\n",restar(15.5,13));
	printf("Multiplicacion: %f\n", multiplicar(15.5,13));
	funcionChida("Restar",restar);
	funcionChida("multiplicacion",multiplicar);
}

 void funcionChida(char *str,
  double (*ptr_func)(double a, double b) ){
 	double x= 10.5,y = 11.2;
 	printf("El resultado de %s: %f\n",
 		str,ptr_func(x,y));
 }

double restar(double a, double b){
	return a-b;
}
double multiplicar(double a, double b){
	return a*b;
}


void sumar(double c, double b){
	printf("%f",c+b);
}

void imprimir(void){
	printf("Hola Mundo desde funcion\n");
}