#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Dilan Alonso Toro Moraga
// 20.956.529-3

typedef struct{
	
	char nombre[20];
	char apellido1[20];
	char apellido2[20];
	float promedio;
	
}alumno;

int promedio(int prom);

int main() {
	
	printf("...:::Dilan Alonso Toro Moraga:::...\n");

	int n, i, count = 0;
	alumno a, alumno[30];
	char buscador[20];
	
	printf("Ingrese la cantidad de alumnos: ");
	
	do{
		scanf("%d", &n);	
	}while(n < 0);
	
	for(i = 0 ; i < n ; i++){
		
		printf("\nNombre: ");
		fflush(stdin);
		gets(a.nombre);
		printf("Primer apellido: ");
		fflush(stdin);
		gets(a.apellido1);
		printf("Segundo apellido: ");
		fflush(stdin);
		gets(a.apellido2);
		printf("Promedio: ");
		fflush(stdin);
		scanf("%f", &a.promedio);
		
		alumno[i] = a;
		
	}
	
	
	
	for(i = 0 ; i < n ; i++){
		
		a = alumno[i];
		
		printf("--------------------\n");
		printf("Nombre: %s\n", a.nombre);
		printf("Primer apellido: %s\n", a.apellido1);
		printf("Segundo apellido: %s\n", a.apellido2);
		printf("Promedio: %f\n", a.promedio);
		
	}
	
	printf("--------------------\n");
	
	printf("Cantidad de alumnos con promedio mayor o igual que 5: ");
	for(i = 0 ; i < n ; i++){
		
		a = alumno[i];
		count = count + promedio(a.promedio);
		
	}
	
	printf("%d", count);
	printf("\n--------------------\n");
	
	fflush(stdin);
	printf("\nIngrese apellido a buscar: ");
	fflush(stdin);
	gets(buscador);

	printf("\n");
	
	for(i = 0 ; i < n ; i++){
		
		a = alumno[i];
		
		if(strcmp(a.apellido1, buscador) == 0 || strcmp(a.apellido2, buscador) == 0 ){
			
			printf("--------------------\n");
			printf("Nombre: %s\n", a.nombre);
			printf("Primer apellido: %s\n", a.apellido1);
			printf("Segundo apellido: %s\n", a.apellido2);
			printf("Promedio: %f\n", a.promedio);
			printf("--------------------\n");
			
		}
		
	}

}

int promedio(int prom){
	
	if(prom < 5){
		return 0;
	} else {
		return 1;
	}
	
}