#include<stdio.h>

int x;

int main () {

    printf("Ingrese un numero: ");
    scanf("%d", &x);

    if (x % 2 == 0) {

        printf("El numero es par");

    } else {

        printf("El numero es impar");

    }

}