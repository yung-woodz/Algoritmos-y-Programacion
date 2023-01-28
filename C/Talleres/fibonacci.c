#include<stdio.h>

int fibonacci (int numero);

int main () {

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    int numeroFact = fibonacci(numero);

    printf("El factorial es: %d", numeroFact);


}

int fibonacci (int numero) {

    if (numero <= 1) {
        return 1;
    } else {
        return numero * factorial(numero-1);
    }

}