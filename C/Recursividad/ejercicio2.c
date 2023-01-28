#include<stdio.h>

int lista(int nro1, int nro2);

int main(){

    int nro1, nro2, i;

    scanf("%d", &nro1);
    scanf("%d", &nro2);

    for(i = nro1 ; i < nro2 ; i++){
        printf("%d\n", lista(i, nro2-1));
    }

}

int lista(int nro1, int nro2){

    if(nro1 == nro2){
        return 0;
    } else {
        return 1 + lista(nro1, nro2);
    }

}