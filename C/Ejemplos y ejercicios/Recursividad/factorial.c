#include<stdio.h>

int factorial(int f);

int main () {

    int f;

    printf("ingrese un numero para el factorial: ");
    scanf("%d", &f);
    printf("\nEl factorial es: %d", factorial(f));

}

int factorial(int f) {

    if (f >= 1) {
        return(f * factorial(f-1));
    } else {
        return 1;
    }

}