#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int i, j, n, m, cont = 0;
	
	printf("Ingresa el tamanio del arreglo: ");
	scanf("%d",&n);
	
	char vec[n]; // vector 1
	
	srand(time(NULL));

	for(i=0;i<n;i++){
		vec[i]=97+rand()%(122-97);
		printf("[%c]", vec[i]);
	}
	
	printf("\n");

	printf("\n Ingrese tamanio del arreglo 2: ");

	do{
		scanf("%d", &m);
		if(m>n){
			printf("cueck");
		}
	}while(m>n);

	while (getchar() != '\n');

	char vect[m];

	for(i=0; i<m; i++){
		scanf("%c", &vect[i]);
		fflush(stdin);
	}
	
	for(i=0; i<n; i++){
		for(j=0 ; j<m; j++){
			if(vec[i]==vect[j]){
				cont++;
			}
		}
		
	}
	
	if(cont==m){
		printf("\nEl arreglo 2 es subconjunto del arreglo 1");
		
	}else{
		printf("\nEl arreglo 2 NO es subconjunto del arreglo 1");
	}
	
	
	return 0;
}