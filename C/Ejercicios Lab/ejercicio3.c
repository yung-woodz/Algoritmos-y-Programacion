#include<stdio.h>

int funcion_incognita(int nro);

int main() {

    int nro;

    scanf("%d", &nro);

    printf("%d", funcion_incognita(nro));

}

// funcion que tiene como fin, sumar los digitos pares de un numero
// y los numeros impares no

int funcion_incognita(int nro){
    if(nro == 0){
        return 0;
    } else if(nro % 2 == 1){
        return funcion_incognita(nro/10);
    } else if(nro % 2 == 0){
        return ((nro % 10) + funcion_incognita(nro/10));
    }
}