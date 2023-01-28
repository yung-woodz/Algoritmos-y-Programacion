#include<stdio.h>

int fibonacci(int nro);

int main(){

    int nro, i;

    scanf("%d", &nro);

    for(i = 0 ; i < nro ; i++){
        printf("%d\n", fibonacci(i));
    }

}

int fibonacci(int nro){

    if(nro == 0){
        return 0;
    } else  if(nro == 1){
        return 1;
    } else{
        return fibonacci(nro-1) + fibonacci(nro-2);
    }

}