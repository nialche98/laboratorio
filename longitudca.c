#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* retorna la longitud de una cadena de caracteres*/

int longCadena(char *cad){
	int n=0;
	while (cad[n] != '\0'){
		n++;
	}
	return n;
}

int main (int argc, char *argv [ ]) {
  
  char *cadEntrada = argv [1];
  int n = longCadena (cadEntrada);
  printf ("\n la longitud de la cadena es %d \n", n);
  return 0;

}