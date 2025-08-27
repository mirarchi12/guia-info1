#include <stdio.h>
#include <math.h>

void intro ( void )
{
printf (" Bienvenidos! Comenzando en ");
}
float ingresoNumero ( void )
{   float num;
    printf (" Ingrese un numero: ");
    scanf  ("%f", &num );

    return num;
}

float imprime_mayor (float a, float b)
{   if (a>b)
        return a;
    else
        return b;
}

float potencia (float base, float exp) 
{   float resultado=1;
    for (int i=1; i<=exp; i++)
        resultado *= base;
    return resultado;
}

int numPrimos (int n)
{   int i, j, esPrimo;
    if (n<=1)
        return 0;
    for (i=2; i<=n; i++) {
        esPrimo = 1;
        for (j=2; j<=i/2; j++) {
            if (i%j==0) {
                esPrimo=0;
                printf ("%d (no primo) \n", i);
                break;
            }
        }
        if (esPrimo)
            printf ("%d (primo) \n", i);
    }
    return 0;
}

float hipotenusa (float a, float b)
{  float h;
    h = sqrt(a*a + b*b);
    return h;
}

float intToFloat (int a)
{  return (float)a;
}

float Suma (float a, float b)
{  return a + b;
}
float resta (float a, float b)
{  return a - b;
}
float multiplicacion (float a, float b)
{  return a * b;
}
float division (float a, float b)
{  while (b==0) {
        printf (" Error, reingrese b distinto de 0: ");
        scanf  ("%f", &b );
    }
    return a / b;
}
int multiplo (int a, int b)
{  if (b%a == 0)
        return 1;
    else
        return 0;
}

void verificarLetra (char c)
{ if (c<=57 && c>=48)
    printf ("%c es un numero entre 0 y 9 \n", c);
  else { if (c>=65 && c<=90)
            printf ("%c es una letra mayuscula \n", c);
                else { if (c>=97 && c<=122)
                        printf ("%c es una letra minuscula \n", c);
                        else
                                printf ("%c es un caracter especial \n", c);
}
}
return;
}
int main (void)
{   int i;
    float num1, num2;
    char c;

for (i=10; i>=0; i--) {
    intro();
    printf ("%d \n", i);
}

num1 = ingresoNumero();
num2 = ingresoNumero();

printf ("Usted ingreso un %.2f (base) y un %.2f (exp) \n", num1, num2);
printf ("El mayor es %.2f \n", imprime_mayor(num1,num2));

printf ("El resultado de %.2f elevado a %.2f es %.2f \n", num1, num2, potencia(num1,num2));

printf ("Los numeros hasta %.2f son: \n", num1);
numPrimos(num1);
printf("\nLos numeros hasta %.2f son: \n", num2);
numPrimos(num2);

printf ("\nLa hipotenusa de un triangulo con catetos %.2f y %.2f es %.2f \n", num1, num2, hipotenusa(num1,num2));

printf ("La conversion de %d a float es %f \n", (int)num1, intToFloat((int)num1));

printf ("La suma es %.2f \n", Suma(num1,num2));
printf ("La resta es %.2f \n", resta(num1,num2));
printf ("La multiplicacion es %.2f \n", multiplicacion(num1,num2));
printf ("La division es %.2f \n", division(num1,num2));
printf ("Es multiplo? %d \n", multiplo((int)num1,(int)num2));

printf ("Ingrese un caracter: ");
scanf (" %c", &c);
verificarLetra(c);

return 0;
}