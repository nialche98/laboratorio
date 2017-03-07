#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* copia la cadena origen en la cadena destino*/
void* copiarCadena(char *origen){
	
	char *destino;
	destino=(char *)malloc(strlen(origen)+1);
	int i; 
	int n=strlen(origen);

	for (i=0;i<=n;i++){
		destino[i]=origen[i];
	}

	printf ("\n a %s se hizo una copia: %s \n", origen, destino);
}

void main(int argc, char *argv[]){
	char *cad1=argv[1];
	copiarCadena(cad1);
}