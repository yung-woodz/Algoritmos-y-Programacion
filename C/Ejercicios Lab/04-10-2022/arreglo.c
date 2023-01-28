#include<stdio.h>

int n, i, j, flag;

int main () {
	
	printf("Ingrese el tamaño de sus dos arreglo N: ");
	scanf("%2d", &n);
	
	int arregloA[n], arregloB[n];
	
	for (i=0 ; i < n ; i++) {
		arregloA[i] = rand() % 10;
		printf("[%d]", arregloA[i]);
	}
	
	printf("\n");

	for (j=0 ; j < n ; j++) {
		arregloB[j] = rand() % 10;
		printf("[%d]", arregloB[j]);
	}

	for (i=0 ; i < n ; i++) {
		for (j=0 ; j < n ; j++) {
			if (arregloA[i] == arregloB[j]) {
				
			}
			
		}
	}
	
		
}