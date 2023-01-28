#include<stdio.h>

int suma(int nro);

int main(){

    int nro;

    do{
        scanf("%d", &nro);
    }while(nro < 0);

    printf("%d", suma(nro));

}

int suma(int nro){

    if(nro == 1){
        return 1;
    } else{
        return (nro + suma(nro-1));
    }

}