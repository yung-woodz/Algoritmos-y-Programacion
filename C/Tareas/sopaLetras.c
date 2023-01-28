#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int n, i, j, k;

    printf("\nIngrese el tamano de su sopa de letras: ");
    scanf("%d", &n);

    printf("\n");

    if (n < 10 || n > 35)
    {
        do
        {

            printf("Error");
            printf("\nIngrese el tamano de su sopa de letras: ");
            scanf("%d", &n);

        } while (n < 10 || n > 35);

        printf("\n");
    }

    char sopa[n][n];

    printf("Ingrese la cantidad de palabra a escoger: ");
    scanf("%d", &k);

    char palabra[k];
    int bandera = 1;

    printf("\n");

    for (i = 0; i < k; i++)
    {

        printf("Ingrese la palabra numero %i para su sopa de letras: ", i + 1);
        scanf("%s", &palabra[i]);

        // hacer ciclo que contabilice la cantidad de letras + validacion
    }

    srand(time(NULL));

    printf("\n");

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {

            sopa[i][j] = rand() % 27 + 65;
            if (sopa[i][j] == 91)
            {
                sopa[i][j] = 165;
            }
            printf("%c  ", sopa[i][j]);
        }
        printf("\n");
    }
}