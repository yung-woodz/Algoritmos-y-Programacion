#include <stdio.h>

int i, x, potencia, resultado;
int f = 1;

int main() {

    printf("Ingrese un numero para el factorial: ");
    scanf("%d", &x);

    for (i=1; i=x; i=i+1) {
        f = f * i;
    }
    
    printf("El factorial es: %d", f);

    return 0;
}