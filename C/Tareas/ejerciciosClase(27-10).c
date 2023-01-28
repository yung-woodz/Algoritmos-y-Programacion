#include<stdio.h>


int main () {

    int a, b, x, i;

    do {
        printf("ingrese un numero: ");
        scanf("%d%d", a, b);
    } while ((a < b && b < 0) || (a < 10 && b < 10));

    int pot = b-a;

    

}