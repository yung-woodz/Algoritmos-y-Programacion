#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {

    int i, j, n;

    int k=0, l=0, aux;

    do{
        printf("Ingrese el tamano de su matriz: ");
        scanf("%d", &n);
    }while(n < 1);

    printf("\n");

    int matriz[n][n];

    int v = n*n;
    int vector[v];

    srand(time(NULL));

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------\n");

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            vector[k] = matriz[i][j];
            k = k  + 1;
        }
    }

    for(k = 0 ; k < v ; k++){
        for(l = 0; l < v ; l++){
            if(vector[k] < vector[l]){
                aux = vector[k];
                vector[k] = vector[l];
                vector[l] = aux;
            }
        }
    }

    k = 0;

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            matriz[i][j] = vector[k];
            k = k + 1;
        }
    }

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

}