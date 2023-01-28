#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
//	printf("%s", palabra);
//	printf("\n%c", palabra[2]);
	
	int a, x, y;
	
	char tablero[10][10];
	
//	a = 5;
//	printf("%s ", &palabra[2]);

	srand(time(NULL));
	
	
	for(x = 0; x < 10; x ++){
		for(y = 0; y < 10; y ++){
			tablero[x][y] = rand()%27+65; // Intervalo [65, 91];
			if(tablero[x][y] == 91){
				tablero[x][y] = 165;
			}
//			printf("%c ", 32);
//		printf("\n");
	}
	
	char palabra[] = "MARCIANO";
	
	int columna, fila;
	
	printf("\n\n");
	
	columna = rand()%10;
	fila = rand()%2;
	
	for(x = fila, y = 0; x < fila + 8; x ++, y++){
		tablero[x][columna] = palabra[y];
	}
	
	char nombre[] = "OSO";
	
	columna = rand()%7;
	fila = rand()%10;
	
	for(x = columna, y = 0; x < columna + 3; x++, y++){
		tablero[fila][x] = nombre[y];
	}

	
	for(x = 0; x < 10; x ++){
		for(y = 0; y < 10; y ++){
			printf("%c ", tablero[x][y]);
		}
		printf("\n");
	}

} 
}