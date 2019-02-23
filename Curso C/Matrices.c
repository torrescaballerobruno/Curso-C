#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** llenarMatriz(int a, int b);
void imprimirMatriz(int a, int b,int** matriz);
void liberarMemoria(int a,int** mat);

int main(int argc, char* argv[]){
	
	int **mat;
	if(argc >2){
		int a = atoi(argv[1]), b = atoi(argv[2]);
		mat = llenarMatriz(a,b);
		imprimirMatriz(a,b,mat);
		liberarMemoria(a,mat);
	}else{
		printf("Modo de uso:\t \"Ejecucion Filas Columnas\"\n");
	}

}

int** llenarMatriz(int a, int b){
	int** mat = NULL;
	int i=0,j=0;
	mat = (int**) calloc(a, sizeof(int*));

	for(i=0; i<a; i++){
		mat[i] = (int*) calloc(b,sizeof(int));
	}

	for(i=0;i<a; i++){
		for(j=0;j<b; j++){
			printf("Matriz[%d][%d] = ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}

	return mat;
}

void imprimirMatriz(int a, int b,int** matriz){
	int i=0,j=0;
	for(i=0;i<a; i++){
		for(j=0;j<b; j++){
			printf("%d\t",*(*(matriz + i) + j));
		}
		printf("\n");
	}
}

void liberarMemoria(int a, int** mat){
	int i=0;
	for( i=0 ; i<a; i++){
		free(mat[i]);
	}
	free(mat);
}

