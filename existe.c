#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* compara la cadena origen recooriendo cada caracter y si encuentra lo que se busca retorna 1*/
char existeCaracter(char *s1 , char *letra){
	

	int i, posicion ; 
	int n=strlen(s1);

	for (i=0;i<=n;i++){
		if (s1[i] == letra[0]) {
			posicion=i+1;
			break;
		}
	} 
	if (posicion>=0){
		printf(" si existe y esta en la posicion %d \n ", posicion);
	}
	else{
		printf("no existe");
	}
}

void main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *n= argv[2];
	existeCaracter(cad1,n);

}