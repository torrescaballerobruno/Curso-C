#include <stdio.h>

void imprimir(void);
void sumar(double a, double b);
double restar(double , double );

int main(int argc, char *argv[]){
	imprimir();
	sumar(5,6);
	/*{
		int a;
		{
			int b;
			a+b;
		}
		a+b;
	}*/
}

void sumar(double c, double b){
	printf("%f",c+b);
}

void imprimir(void){
	printf("Hola Mundo desde funcion\n");
}