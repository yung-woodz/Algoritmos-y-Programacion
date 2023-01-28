#include<stdio.h>

int fact(int x);
int pot(int m, int y);

int main () {

    int n, m;

    printf("Ingrese un numero para hallar su factorial: ");
    scanf("%d", &n);
    printf("Ingrese un valor para la potencia: ");
    scanf("%d", &m);

    printf("%d", fact(n));
    printf("\n");
    printf("%d", pot(m, n));
    
}

int fact(int x) {

    int i, f=1;

    for (i = 1; i <= x; i++) {
        f = f * i;
    }

    return f;

}

int pot(int m, int y) {

    int i, p=1;

    for (i=1 ; i <= m; i++) {
        p=p*y;
    }

    return p;

}