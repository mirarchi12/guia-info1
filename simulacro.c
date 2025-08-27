#include <stdio.h>
#define N 1000
int cuantos_valores (int min, int max)
{   int valores;
    printf("Ingrese la cantidad de valores: ");
    scanf("%d", &valores);
    while (valores < min || valores > max) {
        printf("Error, reingrese un valor entre %d y %d: ", min, max);
        scanf("%d", &valores);
    }
    return valores;
}
void cargar_valores (int a[N], float b[N], int valores)
{
    for (int i=1; i<=valores; i++) {
        printf ("Ingrese el codigo del cilindro (%d): ", i);
        scanf ("%d", &a[i]);
        printf("Ingrese el diametor del cilindro (%d):", i);
        scanf ("%f", &b[i]);
}
}
void clasificar (char estado[], float b[], int valores)
{
    for (int i=0; i<=valores; i++) {
        if (b[i] < 0)
        estado[i] = 'e';
        else {
           if (b[i] > 10)
           estado[i] = 'b';
           else {
            estado[i] = 'm';
           } 
        }
    }
}

void imprimir (int a[N], float b[N], char estado[N], int valores)
{
    for (int i=1; i<=valores; i++) { 
        printf ("\nCodigo (%d): %d\n", i, a[i]);
        printf ("Diametro (%d) = %f\n", i, b[i]);
        if (estado[i] == 'b') {
        printf ("Estado = Bueno\n");
    }   else { if (estado[i] == 'm')
            printf ("Estado = Malo\n");
                else
                printf ("Estado: Error\n");
                }
    }
}
int main(void) {
    int a[N], valores;
    float b[N]; 
    char estado[N];
    valores = cuantos_valores(0,N);
    cargar_valores(a, b, valores);
    clasificar(estado, b, valores);
    imprimir (a, b, estado,valores);

    return 0;
}