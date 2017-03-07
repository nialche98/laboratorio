#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void numeromagico(int intentos){
	int usuario, veces, maquina1,maquina2,i,j,suma,resta1,resta2,multi;
	int historia[20];	
	srand (time(NULL));
	
	veces= 1;
	maquina1= rand () % 101;
	maquina2= rand () % 101;

	printf (" adivina un numero del 1 - 100\n");
	scanf("%d", &usuario);

	printf("%d \n",maquina1);
	printf("%d \n",maquina2);
	i=0;
	historia[i] = usuario;	

	suma= maquina1 + maquina2;
	resta1= maquina1 -maquina2;
	resta2= maquina2 -maquina1;
	multi= maquina1* maquina2;
	
	while (((usuario != maquina1)||(usuario!= maquina2)||(usuario!= resta2)||(usuario!= suma)||(usuario!= resta1)||(usuario!=multi))&&(veces<=intentos)){
		if ((maquina2>usuario)&&(maquina1<usuario)){
			printf (" el numero dado esta entre el numero 1 y el numero 2\n");
		}
		if ((maquina2<usuario)&&(maquina1>usuario)){
			printf (" el numero dado esta entre el numero 1 y el numero 2\n");
		}

		if (usuario< maquina1){
			printf (" el numero1 es menor del que diste\n");
		}
		if (usuario> maquina1){
			printf (" el numero1 es menor del que diste\n");
		}
		if (usuario> maquina2){
			printf (" el numero2 es menor del que diste\n");
		}
		else {
			printf("el numero 2 es mayor del que diste\n");
		}	
		scanf("%d", &usuario);
		veces+=1;
		i+=1;
		historia[i]= usuario;

	
	} 	

	printf("\n numero correcto");
	printf("\n adivinaste  en %d intentos\n", veces);
	printf("los valores que has utilizado son:");
	
	for (j=0;j<=veces;j++) {
		printf("\n %d",historia[j]);
	}
} 	

void main(int argc, char *argv[]){
	int n=atoi(argv[1]);
	numeromagico(n);
}
