#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct casilla {
	char cubrimiento; // lo que se muestra en el mapa
	char estado; // si tiene mina o no
	int numeroM; // numero minas 

};
typedef struct casilla Tcasilla;


Tcasilla  **inicializar(int filas,int cols){

	Tcasilla **matriz = (Tcasilla**) malloc(filas*(sizeof(Tcasilla*)));
	 
	int i;
	for (i = 0; i < filas	; ++i){
		matriz[i] = (Tcasilla*) malloc (cols*(sizeof(Tcasilla)));
	}

	return matriz;
}

void casillasCont(int filas, int cols, Tcasilla** matriz){ // llena el contenido de cada casilla
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
	for(i = 1; i < filas-1; i++){
		for (j = 1; j < cols-1; j++){
			printf(" %c ",matriz[i][j].cubrimiento);
		}
		printf("\n");		
	} 
}




void colocarMinas(int filas, int cols, Tcasilla** matriz, int minas){
	int filasm, columnasm;
	srand(time(NULL));
	int i;
	for(i=0; i < minas;++i){
		filasm = (rand()%(1 + (filas-1)));  
		columnasm = (rand()%(1+(cols-1)));
		matriz[filasm][columnasm].estado= 'O'; // O hay una mina
	}
}



void mapiadoMinas(int filas, int cols, Tcasilla **matriz){
	int i,j;	
	for(i = 1; i < filas-1; i++){

		for (j = 1; j < cols -1; j++){

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
					matriz[i][j].numeroM==1;
				}

				if(matriz[i+1][j+1].estado == 'O'){
					matriz[i][j].numeroM+=1;
				}
			}
		}
	}
}



void destaparalr(Tcasilla **matriz, int posicionf, int posicionc){

	if(matriz[posicionf-1][posicionc-1].numeroM == 0){
		matriz[posicionf-1][posicionc-1].cubrimiento= '0' ;
	}
	if(matriz[posicionf-1][posicionc].numeroM == 0){
		matriz[posicionf-1][posicionf].cubrimiento= '0' ;
	}
	if(matriz[posicionf][posicionc+1].numeroM == 0){
		matriz[posicionf][posicionc+1].cubrimiento= '0' ;
	}
	if(matriz[posicionf][posicionc-1].numeroM == 0){
		matriz[posicionf][posicionc-1].cubrimiento= '0' ;
	}
	if(matriz[posicionf-1][posicionc+1].numeroM == 0){
		matriz[posicionf-1][posicionc+1].cubrimiento= '0' ;
	}
	if(matriz[posicionf+1][posicionc-1].numeroM == 0){
		matriz[posicionf+1][posicionc-1].cubrimiento= '0' ;
	}
	if(matriz[posicionf+1][posicionc].numeroM == 0){
		matriz[posicionf+1][posicionc].cubrimiento= '0' ;
	}

	if(matriz[posicionf+1][posicionc+1].numeroM == 0){
		matriz[posicionf+1][posicionc+1].cubrimiento= '0' ;
	}
}

/*void colocarBandera(int filas, int cols,Tcasilla **matriz, int posicionf, int posicionc){
	matriz[posicionf][posicionc].cubrimiento= 'M' ; // M significa que hay bandera avisando una mina
	mapa(filas, cols, matriz);
} */

void destapar(int filas, int cols, Tcasilla **matriz, int filasus, int colasus){

	int i, j;
	if (matriz[filasus][colasus].numeroM>=0){
		matriz[filasus][colasus].cubrimiento= '0' + (matriz[filasus][colasus].numeroM);
		if(matriz[filasus][colasus].numeroM == 0){
			destaparalr(matriz,filasus,colasus);
		}
	}  

	for(i = 1; i < filas-1; i++){
		for (j = 1; j < cols-1; j++){
			

			printf(" %c ",matriz[i][j].cubrimiento);
		}
		printf("\n");		
	} 
}

void ejecutar(int filas, int cols, Tcasilla** matriz){

	int filasus,colasus,accion;

	while(1) {

    	/*printf("Escoja la accion a realizar\nEscriba 1 para colocar una bandera\n Escriba 2 para destapar la casilla \n");
    	scanf("%d", &accion);*/
    	printf("posicion de fila a destapar\n");
    	scanf("%d", &filasus);
    	printf("posicion de columna a destapar \n");
    	scanf("%d ", &colasus);

    	printf("\n");

 		/*if (accion == 1){
 			colocarBandera(filas, cols,matriz,filasus,colasus);
 		}
		*/

    	if (accion == 2){
	    	if(matriz[filasus][colasus].estado == 'O'){
	    		printf("Perdiste, caiste en una mina \n");
	    		break;
	    	}
    	}

    	else
    	{
    		destapar(filas,cols,matriz,filasus,colasus);

    	}
	}
}



/*juego.c*/

void main(int argc, char *argv[]){


	int filas=atoi(argv[1]);
	int cols=atoi(argv[2]);
	int dificultadad;
	Tcasilla **matriz= inicializar(filas+2,cols+2);
	casillasCont(filas+2,cols+2,matriz);
	mapa(filas+2,cols+2,matriz);


    printf(" Escoja la dificultadad del juego\n");
    printf(" Escriba 1 para facil\n");
    printf(" Escriba 2 para medio\n");
	printf(" Escriba 3 para dificil\n");
   	scanf("%d", &dificultadad);

   	if (dificultadad == 1){
   		colocarMinas(filas,cols,matriz, filas);
		mapiadoMinas(filas+2,cols+2,matriz);
		ejecutar(filas+2, cols+2, matriz);
   	}
   	else if(dificultadad == 2){
   		colocarMinas(filas,cols,matriz, filas + cols);
		mapiadoMinas(filas+2,cols+2,matriz);
		ejecutar(filas+2, cols+2, matriz);
   	}
   	else if(dificultadad == 3){
   		colocarMinas(filas,cols,matriz, filas *2 + cols);
		mapiadoMinas(filas+2,cols+2,matriz);
		ejecutar(filas+2, cols+2, matriz);
   	}
}                          
