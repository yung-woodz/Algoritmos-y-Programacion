#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct estudiantes {
	
	char nombre[20];
	char apellido[20];
	int rut;
	char numero_digitador[1];
	int edad;
	char calle[20];
	int numero_casa;
	char departamento[20];
	char deporte[20];
	
}estudiante;

int main () {
	
	estudiante e, c[1000];
	
	int i, n, op1, op2;
	
	do {
		printf("Ingrese el numero de estudiantes a ingresar: ");
		scanf("%d", &n);
	} while(n<1 || n>1000);
	
	for (i = 0 ; i < n ; i++){
		
		printf("Ingrese los siguientes datos: ");
		printf("\n");
		printf("Nombre y Apellido: ");
		gets(e.nombre);
		gets(e.apellido);
		fflush(stdin);
		printf("\n");
		printf("Rut(sin digito verificador): ");
		scanf("%d", &e.rut);
		fflush(stdin);
		
		do {
			printf("Edad: ");
			scanf("%d", &e.edad);
			fflush(stdin);
		} while(e.edad <= 1 || e.edad >= 100);
		
		printf("Calle: ");
		gets(e.calle);
		fflush(stdin);
		
		do {
			printf("Numero: ");
			scanf("%d", &e.numero_casa);
			fflush(stdin);
		} while(e.numero_casa < 0);
		
		printf("¿Usted reside en un departamento?");
		printf("\n");
		printf("1. Si");
		printf("\n");
		printf("2. No");
		printf("\n");
		scanf("%d", &op1);
		
		if (op1 == 1) {
			printf("Departamento: ");
			gets(e.departamento);
			fflush(stdin);
		} else if (op1 == 2) {
			e.departamento == "No reside";
		}
		
		printf("¿Usted practica algun deporte?");
		printf("\n");
		printf("1. Si");
		printf("\n");
		printf("2. No");
		printf("\n");
		scanf("%d", &op2);
		
		if (op2 == 1) {
			printf("Deporte: ");
			gets(e.deporte);
			fflush(stdin);
		} else if (op2 == 2) {
			e.deporte == "No";
		}
		
		for (i = 0 ; i < n ; i++) {
			e=c[i];
			printf("%2s %2s %d %d %2s %d %2s %s\n", e.nombre, e.apellido, e.rut, e.edad, e.calle, e.numero_casa, e.departamento, e.deporte);
		}
		
	}
	
	
		
}