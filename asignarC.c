#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* recibe una letra y coloca esa letra en todas las posiciones del arreglo*/	
char asignarCad(char *origen , char *letra){
	
	int i; 
	int n=strlen(origen);

	for (i=0;i<n;i++){
		origen[i]=letra[0];

	}
	printf("%s\n",origen);
}


void main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *cad2=argv[2];
	asignarCad(cad1,cad2);

}
