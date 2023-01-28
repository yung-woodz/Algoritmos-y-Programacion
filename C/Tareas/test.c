#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	
	int x, y, z;
	
	char matriz[10][10];
	char palabra[10];
	
	int posicionX, posicionY;
	srand(time(NULL));
	printf("Ingrese la primera palabra: ");
	scanf("%s", &palabra);
	do{
		posicionX = rand()%10 + 1;
		printf("posicion = %d y char = %d\n", posicionX, strlen(palabra));
		posicionY = rand()%10 + 1;
	}while(posicionX + strlen(palabra) >= 10 || posicionY + strlen(palabra) >= 10);
	
	for(x = 0; x < 10; x ++) {
		for(y = 0; y < 10 ; y ++) {
			matriz[x][y] = 32;
			printf("[%c] ", matriz[x][y]);
		}	
		printf("\n");
	}

	printf("\n");

	for(x = posicionX, y = posicionY, z = 0; z < strlen(palabra); x ++, y ++, z ++){
		matriz[x][y] = palabra[z];
		printf("[%c] ", matriz[x][y]);
	}	
	
	char segundaPalabra[10];
	printf("Ingresa segunda palabra: ");
	scanf("%s", segundaPalabra);
	printf("\n");

	do{
		posicionX = rand()%10 + 1;
		posicionY = rand()%10 + 1;
	}while(posicionX + strlen(segundaPalabra) >= 10 || posicionY + strlen(segundaPalabra) >= 10);
	
	for(y = posicionY, z = 0; z < strlen(segundaPalabra); x ++, y ++, z ++){
		matriz[posicionX][y] = segundaPalabra[z];
	}
	
	for(x = 0; x < 10; x ++){
		for(y = 0; y < 10; y ++){
			printf("[%c] ", matriz[x][y]);
		}
		printf("\n");
	}
}

		
		
	

