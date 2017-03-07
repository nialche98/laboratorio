#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* coloca todas las letras del arreglo en mayusculas */
char mayusculas(char *origen){
	
	int i,c, cd; 
	int n=strlen(origen);

	for (i=0;i<n;i++){
		c=origen[i];
		if (97 >= c<=122) {
			cd= c -32;
			origen[i]= cd;
		}
	}
	printf("%s\n", origen);
}

void main(int argc, char *argv[]){
	char *cad1=argv[1];
	mayusculas(cad1);
}