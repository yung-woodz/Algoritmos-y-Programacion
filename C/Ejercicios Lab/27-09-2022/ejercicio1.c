#include<stdio.h>

int x, resultado=1;

int main () {

    printf("Ingrese un valor x: ");
    scanf("%d", &x);

    x= x*x;

    resultado= x;

    printf("El cuadrado es: %d", resultado);

}