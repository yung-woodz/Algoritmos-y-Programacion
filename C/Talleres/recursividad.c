#include<stdio.h>

int recursividad(int x);

int main() {

    int x;

    printf("Ingrese un numero: ");
    scanf("%d", &x);



}

int recursividad(int x) {

    if (x == 0) {
        return 0;
    } else if (x%2 == 1) {
        return recursividad(x /10);
    } else (x%2 == 0) {
        return x%10 + recursividad(x /10);
    }
    

}