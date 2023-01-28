#include<stdio.h>

float x, resultado=1;

int main () {

    printf("Ingrese un valor x: ");
    scanf("%f", &x);

    x= x*x;

    resultado= x;

    printf("El cuadrado es: %f", resultado);

}