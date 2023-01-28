#include<stdio.h>

int factorial(int nro);

int main(){

    int nro;

    scanf("%d", &nro);

    printf("%d", factorial(nro));

}

int factorial(int nro){
    if(nro == 0){
        return 1;
    } else{
        return (nro * factorial(nro-1));
    }
}