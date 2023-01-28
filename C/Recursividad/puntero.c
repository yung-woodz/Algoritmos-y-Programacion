/*Cree un programa que utilizando una función permita simular 
la distribución de una cantidad X de agua en tres valdes: A(30 
litros), B(40 litros) y C (25 litros). El agua se va acumulando en 
orden (cuando A esta lleno comienza a llenarse B y lo mismo 
ocurre con C). Al finalizar el programa debe mostrar con cuanta 
agua quedó cada valde*/

#include<stdio.h>

void llenado(int *a, int *b, int *c);

int main(){

    int balde1=0, balde2=0, balde3=0;
    printf("BALDE A: 30 LITROS\n");
    printf("BALDE B: 40 LITROS\n");
    printf("BALDE C: 25 LITROS\n");

    llenado(&balde1, &balde2, &balde3);
    printf("\n");

    printf("BALDES CON AGUA: \n");
    printf("Balde A: %d\n", balde1);
    printf("Balde B: %d\n", balde2);
    printf("Balde C: %d", balde3);


}

void llenado(int *a, int *b, int *c){

    int agua=0, agua_nueva, i, bandera=0;

    do{

        scanf("%d", &agua);

        if(agua > 95){
            printf("NO MALGASTE AGUA WEBONG");
        }

    }while(agua > 95);

    while (agua > 0)
    {
        if (*a < 30){
            *a += 1;
            agua--;
        }
        else if (*b < 40){
            *b += 1;
            agua--;
        }
        else if (*c < 25){
            *c += 1;
            agua--;
        }
        else{
            break;
        }
    }



   
}