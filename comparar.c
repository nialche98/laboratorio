#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* compara la cadena origen con la cadena destino y da si es mayor, menor o igual*/
void compararCadena(char *s1 , char *s2){
	
	int i, comparacion; 
	int n=strlen(s1);
	int m = strlen(s2);
	

	for (i=0;i<=n;i++){
		if (i<m || i<n) {

			if (s1[i] < s2[i]){
				comparacion=-1;
//				return 1;
			}
			if (s1[i] > s2[i]){
				comparacion=1;
//				return -1;
			}
			else {
				if (0<comparacion ){
					comparacion=1;
				}
				if (comparacion<0) {
					comparacion=-1;
				}
				else {
					comparacion=0;
				}
			}	
		}	
	}
	printf("\n %d", comparacion);
}

void main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *cad2=argv[2];
	compararCadena(cad1,cad2);
}