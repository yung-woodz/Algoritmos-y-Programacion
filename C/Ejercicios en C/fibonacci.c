#include <stdio.h>

int main () {

    int a = 0, b = 1, c = 0 , i, n;

    printf("Ingrese el largo de la sucesion");
    scanf("%d", &n);
    
    for (i = 1; i = n; i++) {
        
        printf("%d ", c);
        a=b;
        b=c;
        c=a+b;

    }
    
    return 0;

}