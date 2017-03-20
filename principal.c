#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct casilla {
	char cubrimiento; // lo que se muestra en el mapa
	char estado; // si tiene mina o no
	int numeroM; // numero minas 

};
typedef struct casilla Tcasilla;


Tcasilla  **inicializar(int filas,int cols){

	Tcasilla **matriz = (Tcasilla**) malloc(filas*(sizeof(Tcasilla*)));
	 
	int i;
	for (i = 0; i < filas; ++i){
		matriz[i] = (Tcasilla*) malloc (cols*(sizeof(Tcasilla)));
	}

	return matriz;
}

void casillasCont(int filas, int cols, Tcasilla** matriz){
	int i, j;
	for(i =0 ; i < filas; i++){
		for (j = 0; j < cols; j++){
			matriz[i][j].cubrimiento = 'x';
			matriz[i][j].estado = 'I';// I= no hay minas
			matriz[i][j].numeroM = 0;
		}
	}
}

void mapa(int filas, int cols, Tcasilla **matriz){

	int i, j;
	for(i = 0; i < filas; i++){
		for (j = 0; j < cols; j++){
			printf(" %c ",matriz[i][j].cubrimiento);
		}
		printf("\n");		
	} 
}

void mapa2(int filas, int cols, Tcasilla **matriz, int filasus, int colasus){

	int i, j;
	if (matriz[filasus-1][colasus-1].numeroM>=0){
		matriz[filasus-1][colasus-1].cubrimiento= 'c';
	}  

	for(i = 0; i < filas; i++){
		for (j = 0; j < cols; j++){
			

			printf(" %c ",matriz[i][j].cubrimiento);
		}
		printf("\n");		
	} 
}


void colocarMinas(int filas, int cols, Tcasilla** matriz){
	int filasm, columnasm, minas;
	minas= cols/2;

	srand(time(NULL));
	int i;
	for(i=0; i < minas;++i){
		filasm = (rand()%(filas));
		columnasm = (rand()%(cols));
		matriz[filasm][columnasm].estado= 'O'; // O hay una mina
	}
}


void mapiadoMinas(int filas, int cols, Tcasilla **matriz){
	int i,j;	
	for(i = 0; i < filas; i++){

		for (j = 0 ; j < cols ; j++){

			if(matriz[i][j].estado != 'O'){

				if(matriz[i-1][j-1].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}

				if(matriz[i-1][j].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}

				if(matriz[i][j+1].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}

				if(matriz[i][j-1].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}

				if(matriz[i-1][j+1].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}

				if(matriz[i+1][j-1].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}

				if(matriz[i+1][j].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}

				if(matriz[i+1][j+1].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}
			}
		}
	}
}

void ejecutar(int filas, int cols, Tcasilla** matriz){

	int filasus,colasus;

	while(1) {
		colocarMinas(filas,cols,matriz);
    	printf("posicion de fila a destapar\n");
    	scanf("%d", &filasus);
    	printf("\n posicion de columna a destapar \n");
    	scanf("%d", &colasus);
    	printf("\n");

    	if(matriz[filasus-1][colasus-1].estado == 'O')
    	{
    		printf("Perdiste, caiste en una mina \n");
    		break;
    	}

    	else
    	{
    		mapa2(filas,cols,matriz,filasus,colasus);
    	}
	}
}



/*juego.c*/

void main(int argc, char *argv[]){

	int filas=atoi(argv[1]);
	int cols=atoi(argv[2]);
	Tcasilla **matriz= inicializar(filas,cols);
	casillasCont(filas,cols,matriz);
	mapa(filas,cols,matriz);
	ejecutar(filas, cols, matriz);
	mapiadoMinas(filas,cols,matriz);
	//jugar(filas,cols,matriz);
}                          