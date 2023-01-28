#include<stdio.h>

int pares(int nro);
int impares(int nro);

int main (){

    int nro;

    scanf("%d", &nro);

    printf("%d\n", pares(nro));
    printf("%d", impares(nro));

}

int pares(int nro){

    if(nro < 10 && nro % 2 == 0){
        return nro;
    }else if((nro % 10) % 2 == 0){
        return ((nro % 10) + pares(nro/10));
    } else if((nro % 10) % 2 != 0){
        return pares(nro/10);
    }
}

int impares(int nro){

    if(nro < 10 && nro % 2 != 0){
        return 1;
    }else if((nro % 10) % 2 != 0){
        return (1 + impares(nro/10));
    } else if((nro % 10) % 2 == 0){
        return impares(nro/10);
    }
}