#include <stdio.h>
#include <stdlib.h>

int main(){
	int **matriz;
	
	matriz = (int**)malloc(2*sizeof(int *));
	
	matriz[0] = (int*)malloc(2*sizeof(int));
	matriz[1] = (int*)malloc(3*sizeof(int));
	
	matriz[0][0]= 1;
	matriz[0][1]= 2;
	matriz[1][0]= 3;
	matriz[1][1]= 4;
	matriz[1][2]= 5;
	
	printf("\nEn matriz[0][0], con direccion %d, hay un %d",&matriz[0][0],matriz[0][0]);
	printf("\nEn matriz[0][1], con direccion %d, hay un %d",&matriz[0][1],matriz[0][1]);
	printf("\nEn matriz[1][0], con direccion %d, hay un %d",&matriz[1][0],matriz[1][0]);
	printf("\nEn matriz[1][1], con direccion %d, hay un %d",&matriz[1][1],matriz[1][1]);
	printf("\nEn matriz[1][2], con direccion %d, hay un %d",&matriz[1][2],matriz[1][2]);
	printf("\n");
	printf("\nMatriz tiene apuntadores que apuntan a otros apuntadores");
	printf("\n");
	printf("\nMatriz[0] esta en la direccion %d, pero apunta a %d",&matriz[0],matriz[0]);
	printf("\nMatriz[1] esta en la direccion %d, pero apunta a %d",&matriz[1],matriz[1]);
	printf("\nAsi, la matriz[0][0] esta en %d", &matriz[0][0]);
	printf("\nY la matriz[1][0] esta en %d", &matriz[1][0]);
	
}




