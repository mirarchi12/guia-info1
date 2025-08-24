#include <stdio.h>

int sumaDigitos (int numero)
{ int suma = 0, digito;
     while (numero > 0) {
       
        digito = numero % 10; 
        suma += digito;      
        numero /= 10;     
     }
    return (suma);
    }
    int productoDigitos (int numero)
    {int producto = 1, digito;
     while (numero > 0) {
        digito = numero % 10; 
        producto *= digito;      
        numero /= 10;         
     }
     return (producto);
    }

    int main(void)
{
    int numero;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("El numero debe ser positivo.\n");
        scanf("%d", &numero);
    };


    printf("El suma de los digitos es: %d\n", sumaDigitos(numero));
    printf("La producto de los digitos es: %d\n", productoDigitos(numero));

    if (sumaDigitos(numero) == productoDigitos(numero)) {
        printf ("El numero es espia! \n");
    }
    return 0;
}