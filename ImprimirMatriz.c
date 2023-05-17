#include <stdio.h>

#define M 20
#define N 20

int main () 
{
    int filas, columnas, i, j, A[M][N];

    printf ("escribe numero de filas: ");
    scanf ("%d", &filas);
    printf ("escribe numero de columnas: ");
    scanf ("%d", &columnas);

    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; j++)
        {
           A[i][j]=0;
           printf ("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("segunda matriz\n");

    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; j++)
        {
           if (i==j){ 
               A[i][j]=1;
               printf ("%d\t", A[i][j]);
           }
           else {
              A[i][j]=0;
                printf ("%d\t", A[i][j]);
           }
        }
        printf("\n");
    }

    return 0;

}