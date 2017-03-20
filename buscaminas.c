#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct casilla
{
	char tipo;
	int bandera;
	int nMinas;
};

typedef struct casilla Matriz;

Matriz **crearMatriz(int filas, int columnas){

	Matriz **matriz = (Matriz**) malloc(filas*(sizeof(Matriz*)));
	 
	int i;
	for (i = 0; i < filas; ++i){
		matriz[i] = (Matriz*) malloc (columnas*(sizeof(Matriz)));
	}

	return matriz;
}

void llenarMatriz(int filas, int columnas, Matriz** matriz){
	int i, j;
	for(i = 1; i < filas-1; i++)
		for (j = 1; j < columnas-1; j++)
		{
			matriz[i][j].bandera = '.';
			matriz[i][j].tipo = 'C';
			matriz[i][j].nMinas = 0;
		}
}

void colocarMinas(int filas, int columnas, Matriz** matriz, int minas){
	int posFilas, posColumnas;
	srand(time(NULL));
	int i = 0;
	for(;i < minas;++i)
	{
		posFilas = (rand()%(filas-2))+1;
		posColumnas = (rand()%(columnas-2))+1;
		matriz[posFilas][posColumnas].tipo= 'M';
	}
}

void contarMinas(int filas, int columnas, Matriz** matriz){

	int i,j;	
	for(i = 1; i < filas-1; i++){

		for (j =  1 ; j < columnas-1 ; j++){

			if(matriz[i][j].tipo != 'M'){

				if(matriz[i-1][j-1].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}

				if(matriz[i-1][j].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}

				if(matriz[i][j+1].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}

				if(matriz[i][j-1].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}

				if(matriz[i-1][j+1].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}

				if(matriz[i+1][j-1].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}

				if(matriz[i+1][j].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}

				if(matriz[i+1][j+1].tipo == 'M'){
					matriz[i][j].nMinas+=1;
				}
			}
		}
	}
}

void mostrarJuego(int filas, int columnas, Matriz** matriz){

	int i, j;
	for(i = 1; i < filas-1; i++){
		printf(" |");
		for (j = 1; j < columnas-1; j++){
			printf(" %c ",matriz[i][j].bandera);
		}
		printf("|\n");		
	}

	printf("\n");
}

void destapar(int filas, int columnas, Matriz** matriz){

	int posFilas,posColumnas;

	while(1)
    {
    	printf("En que fila \n");
    	scanf("%d", &posFilas);
    	printf("En que columna \n");
    	scanf("%d", &posColumnas);
    	printf("\n");

    	if(matriz[posFilas][posColumnas].tipo == 'M')
    	{
    		mostrarJuego(filas,columnas,matriz);
    		printf("Perdiste caiste en una mina \n");
    		break;
    	}

    	else
    	{
    		mostrarJuego(filas,columnas,matriz);
    	}
	}
}


int main(int argc, char *argv[])
{
	int filas = atoi(argv[1])+2;
	int columnas = atoi(argv[2])+2;
	int minas = filas/2;

	Matriz ** matriz = crearMatriz(filas,columnas);	
	llenarMatriz(filas, columnas, matriz);
	colocarMinas(filas,columnas,matriz, minas);
	contarMinas(filas,columnas,matriz);
	mostrarJuego(filas,columnas,matriz);


	return 0;
}
