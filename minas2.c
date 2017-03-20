#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct casillas{

	char cobertura;
	char minas;
	int numero;
};

typedef struct casillas tipoCasilla;

tipoCasilla** inicializar(int filas,int cols,tipoCasilla **matriz){

	int i,j,k=0,w=0;
	matriz=(tipoCasilla**)malloc(filas*sizeof(tipoCasilla*));
	tipoCasilla casilla;
	casilla.cobertura="x";
	casilla.minas="*";
	srand (time(NULL));
	
	for(i=0;i<filas-1;i++){
		matriz[i]=(tipoCasilla *)malloc(cols*sizeof(tipoCasilla));
		
		for(j=0;j<cols-1;j++){
		

			matriz[i][j].casilla=;
		}
	}
}

void dibujar(int filas, int cols, tipoCasilla **matriz){

	int i,j;
	for(i=1;i<filas-1;i++){
		for(j=1;j<cols-1;j++){

			if(matriz[i][j].cobertura=="x"){
				printf("%s\t","x");
			}
			else{
				printf("%s\t","*");
			}
			if(j==cols-1){
				printf("\n");

			}
		}
	}
}

/*juego.c*/

void main(int argc, char *argv[]){

	int filas=atoi(argv[1]);
	int cols=atoi(argv[2]);
	tipoCasilla **matriz;
	matriz=(tipoCasilla **)malloc(filas*sizeof(tipoCasilla*));
	inicializar(filas,cols,matriz);
	casi
	dibujar(filas,cols,matriz);
	//jugar(filas,cols,matriz);
}
