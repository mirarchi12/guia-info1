#include <stdio.h>

int es_primo(int n) {
    if (n <= 1) 
        return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
        return 0; 
    }
    return 1;
}
int imprimirPrimos (int n) {
    int contador = 0;
    for (int i = 2; i <= n; i++) {
        if (es_primo(i)) {
            printf("%d (primo)\n", i);
            contador++;
        } else {
            printf("%d (no primo)\n", i);
        }
    }
    return contador;
}
int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);
    while (numero < 0) {
        printf("Por favor, ingrese un numero positivo.\n");
        scanf("%d", &numero);
    }
    printf("Total de numeros primos encontrados: %d\n", imprimirPrimos(numero));
    return 0;
}