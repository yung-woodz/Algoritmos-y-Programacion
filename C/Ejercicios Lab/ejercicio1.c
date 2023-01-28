#include<stdio.h>

int main (){

    int i, j, n, contador = 0;

    do{
        scanf("%d", &n);
    }while(n % 2 != 1);

    int arreglo[n];

    for(i=0 ; i<n ; i++){

        printf("Ingrese un valor para la posicion %d: \n", i+1);
        scanf("%d", &arreglo[i]);

    }

    printf("\n");

    for(i=0 ; i<n ; i++){

        printf("%d \n", arreglo[i]);

    }

    printf("\n");

    for(i=0 ; i<n ; i++){ 

        for(j=n-1 ; j>=0 ; j--){

            if(arreglo[i] == arreglo[j]){

                contador = contador + 1;

            }

        }

    }

    if(contador == n){
        printf("Si es jeje");
    } else {
        printf("No");
    }

}