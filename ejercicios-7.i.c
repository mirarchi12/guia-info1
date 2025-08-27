#include <stdio.h>
#define N 4
#define M 6

float productoPunto (int a[], int b[])
{ float escalar=0;
    for (int i=0; i<N;i++) 
    escalar += a[i] * b[i];
    return escalar;
}

int main ( void )
{
int a[N], b[N], c[N][M];
int max, min, i, j;

/** Completar desde aqu´ı */
printf (" Ingrese %d numeros enteros: \n", N);
for (int i=0; i<N; i++)
    {
    printf (" a[%d]= ", i);
    scanf  ("%d", &a[i]);

    while (a[i]<0 || a[i]>100)
        {
        printf (" Error, reingrese a[%d]= ", i);
        scanf  ("%d", &a[i]);
        }
    }
/** hasta aqu´ı , la cantidad de l´ıneas que quiera */
max = min = a[0];
for (int i=1; i<N; i++) {
    if (a[i] > max)
        max = a[i];
    if (a[i] < a[i-1]) 
        min = a[i];
}
printf (" El maximo es %d y el minimo es %d \n", max, min);

for (int i=0; i<N; i++) {
    if (i==0)
        b[i] = a[i];
    else
    b[i] = a[i] + b[i-1];
    printf (" b[%d]= %d \n", i, b[i]);
}
printf (" El producto punto es %.3f \n", productoPunto(a,b));

printf ("Ingrese las filas y columnas de la matiz c[N][M]: \n");
scanf ("%d %d", &i, &j); 
    if (j<=N || j>=M) {
    }
for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
        printf ("\n c[%d][%d]= ", i, j);
        scanf  ("%d \n", &c[i][j]);
    }
}
for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
        printf ("%d ", c[i][j]);
    }
    printf ("\n");
}
return 0;
}