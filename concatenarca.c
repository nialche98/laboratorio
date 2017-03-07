#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* agrega en un areeglo nuevo dos areglos*/	
 char concatenarCadenas(char *original, char *complemento){

 	int i,n,j,k,a,h; 
	char *destino;
	destino=(char *)malloc((strlen(original) +strlen(complemento))+1);

 	n=strlen(original) +strlen(complemento);
 	j = 0;
 	k=strlen(original);
 	h=0;
 	for (a=0;a<k;a++){
 		destino[a]=original[h];
		h++;
 	}


 	for (i=strlen(original) ;i<=n ;i++){
 		if (i < n) {
 			destino[i]=complemento[j];
 		}
 		else{
 			destino[i]='\0';
 		}
 		j++;	
 	} 

	printf("la union de las dos cadenas anteriores es: %s \n", destino);

 }

 void main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *cad2=argv[2];
	concatenarCadenas(cad1,cad2);
}
