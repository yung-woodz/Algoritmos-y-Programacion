#include<stdio.h>

float f, c, resultado;

int main () {

    printf("Ingrese su temperatura en Celcius: ");
    scanf("%f", &c);

    f= (c*9/5) + 32;

    printf("Grados fahrenheit: %f", f);

}

