#include<stdio.h>

int factorial (int x);

int main () {

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    int numeroFact = factorial(numero);

    printf("El factorial es: %d", numeroFact);


}

int factorial (int numero) {

    if (numero <= 1) {
        return 1;
    } else {
        return numero * factorial(numero-1);
    }

}