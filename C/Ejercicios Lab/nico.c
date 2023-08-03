#include<stdio.h>
#include<time.h>

int recursiva(int arreglo[], int n);

int main (){

    srand(time(NULL));

    int n, i;

    scanf("%d", &n);

    int a[n];

    

    for(i = 0 ; i < n ; i++){

        a[i] = rand()%10;

    }

    recursiva(a, n);

}

int recursiva(int arreglo[], int n){

    if (n <= 1) {
        return 1;
    }else if(arreglo[n - 1] < arreglo[n - 2]){

        return 0;

    }
    
    recursiva(arreglo, n-1);

}