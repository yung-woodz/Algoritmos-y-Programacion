#include<stdio.h>

int potencia(int x, int y);

int main(){

    int x, y;

    scanf("%d%d", &x, &y);

    printf("%d", potencia(x,y));

}

int potencia(int x, int y){

    if(y == 1){
        return x;
    } else {
        return (x * potencia(x,y-1));
    }

}