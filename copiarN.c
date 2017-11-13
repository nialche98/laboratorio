#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*copia  el numero n de caracteres. iniciando en la primera posion del string*/
char* copiarCadenaN(char *origen, int cantidad){
	
	char *destino;
	destino=(char *)malloc(cantidad+1);
	int i; 

	for (i=0; i<=cantidad ;i++){
		if (i < cantidad) {
			destino[i]=origen[i];
		}
		else {
			destino[i] = '\0' ;
		}
	}
	printf("La cadena de 0 hasta el N dado es: %s \n",destino );
	return destino;
}

void main(int argc, char *argv[]){
	char *cad1=argv[1];
	int n=atoi(argv[2]);
	copiarCadenaN(cad1,n);
}
