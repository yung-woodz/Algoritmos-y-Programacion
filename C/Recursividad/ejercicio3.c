#include<stdio.h>

int digitos(int nro);

int main(){

    int nro;

    scanf("%d", &nro);

    printf("%d", digitos(nro));

}

int digitos(int nro){
    
    if(nro < 10){
        return 1;
    } else {
        return (1 + digitos(nro/10));
    }

}