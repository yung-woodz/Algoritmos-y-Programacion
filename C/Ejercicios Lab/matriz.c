#include<stdio.h>
#include<conio.h>

int main (){

    int i, j, n = 10, m = 10;

    char matriz[n][m];

    for (i=0 ; i<10 ; i++){
        for (j=0 ; j<10 ; j++){
            matriz[i][j] = ' ';
        }
    }

    matriz[0][0] = '*';

    for (i=0 ; i<10 ; i++){
        for (j=0 ; j<10 ; j++){
            printf("[%c]", matriz[i][j]);
        }
        printf("\n");
    }

    do{
        
        int contador;

        char letra;

        letra = _getch();

        system("cls");

        for (i=0 ; i<10 ; i++){ // columna

            
            
            if(letra == 'd' || letra == 'D'){
                matriz[0][0] = ' ';
                
            }

            printf("\n");

        }

        

        for (i=0 ; i<10 ; i++){ // columna
            matriz[n-(n-1)][m] = '*';
            for (j=0 ; j<10 ; j++){ // fila
                    
                printf("[%c]", matriz[i][j]);
            }
            printf("\n");

        }

        

    }while(((matriz[0][n+1] != '*') || (matriz[0][n-((n+1))] != '*')));

    

    

}
