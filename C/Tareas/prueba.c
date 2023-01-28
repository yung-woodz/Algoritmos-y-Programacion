#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main () {

    int i, j, z;

    char matriz[10][10];

    int k = 10;
    int p;

    printf("Ingrese la cantidad de palabras");
    printf("\n");
    printf("Minimo %d", (k/2));
    printf(" y maximo %d:", (k*2));
    printf("\n");
    do {
        scanf("%d", &p);
    } while(p < (k/2) || p > (k*2));

    int ciclo = p;
    printf("\n");

    char palabra[10];

    srand(time(NULL));

    for (i = 0 ; i < 10 ; i++) {
        for (j = 0 ; j < 10 ; j++) {
            matriz[i][j] = 32;
        }
    }


    for (i = 0 ; i < ciclo ; i++) {

       for (j = 0; j < ciclo; j++)
       {
        printf("Ingrese su palabra nro %d: ", i+1);
        scanf("%s", &palabra[i]);
         matriz[i][j] = palabra[i];
       }
       

       
    }

    /* if(strlen(palabra) - 10 >= 0) {

            for (j = 0 ; j < ciclo ; j++) {

                matriz[i][j] = palabra[i];

            }
        
        }
        */

    /*for (i = 0 ; i < 10 ; i++) {
        for (j = 0 ; j < 10 ; j++) {
            matriz[i][j] = rand() % 27 + 65;
            if (matriz[i][j] == 91) {
                matriz[i][j] = 165;
            }
        }
    }*/

    for (i = 0 ; i < 10 ; i++) {
        for (j = 0 ; j < 10 ; j++) {
            printf("[%c]  ", matriz[i][j]);
        }
        printf("\n");
        printf("\n");
    }

}

