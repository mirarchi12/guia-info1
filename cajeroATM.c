#include <stdio.h>
#include <stdlib.h>

int verificaPin (int pin) {
    int realPin = 0000;
    while (pin != realPin || (pin <0 || pin >9999)) {
        printf("PIN incorrecto. \nIntente de nuevo: ");
        scanf("%d", &pin);
    }
return (pin);
}

int main ( void )
{   int pinIngresado, operacion, refresco=0;
    float ingreso, saldo=0, retiro;
    char reinicio[2];
    const char *art = "⠀⠀⠀⠀⠀⣠⡶⠒⠛⠛⢛⡛⠿⠿⠿⠿⠟⣛⣒⣒⣶⣶⣦⣤⣄⡀⠀⠀⠀⠀"
                      " ⠀⠀⠀⠀⣼⠋⠀⣀⢔⠪⣀⠦⠉⠁⠀⡍⠉⠒⠒⣒⣒⡢⢍⡑⠊⠙⢶⡄⠀⠀"
                      "⠀⠀⠀⣸⠇⠀⠀⠐⠱⢉⣀⣠⣤⣀⣀⠁⠀⠀⠀⠰⠀⠀⠀⠈⠆⠀⠀⣿⠀⠀ "
                      "⠀⣠⠾⠓⣀⣀⡀⢦⠰⡿⠿⢿⠿⣦⣙⣷⠀⠀⣤⣴⣾⣿⠿⠿⠖⠠⠀⢜⠳⡄ "
                      "⣼⢻⢡⡞⠉⣩⡙⠻⠶⠤⠶⠋⠀⠀⠈⠁⠀⠀⠀⣿⡀⠀⢠⣤⣴⠶⠶⠝⡐⣽ "
                      "⢱⢸⣸⡷⠶⣿⠙⠳⣦⣄⣀⡒⠒⠃⡟⣋⣄⡀⠀⠈⣹⣶⣀⡀⠀⣿⡄⢔⣹⡾ "
                      "⠈⢷⣗⠁⠀⠙⣿⢶⣼⣧⠉⠛⠓⣶⢭⣤⣄⣀⣺⣞⣃⣀⣠⡤⣾⢿⡇⠁⡾⠁ "
                      "⠀⠀⠹⣦⠀⠀⠘⢷⣸⡟⠻⠿⣶⣯⣄⣀⣨⣏⣉⣹⣏⣉⣹⣧⣿⣾⡇⠀⡇⠀ "
                      "⠀⠀⠀⠸⣦⠀⠀⠀⠙⢶⣄⡀⣼⠈⠙⠛⣿⠿⠿⣿⣿⣿⣿⣿⣿⣿⡇⠀⡇⠀ "
                      "⠀⠀⠀⠀⠈⠻⣦⡢⢕⡂⢌⡛⠳⠦⣤⣤⣿⣀⣀⣿⣠⣾⣵⣯⠽⠟⠁⠀⡇⠀ "
                      "⠀⠀⠀⠀⠀⠀⠀⠙⠳⣮⣄⣚⠤⡒⢤⣀⠐⠛⠛⢛⣓⣒⣀⣀⠔⠀⡰⠀⣿⠀ "
                      "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣄⡈⠉⠀⠒⠒⠂⠀⠀⠀⠐⠉⠀⣠⡟⠀ "
                      "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠛⠳⠶⢤⣤⣤⣤⣤⠤⠾⠋⠀⠀ ";

    printf("Ingrese su PIN: ");
    scanf("%d", &pinIngresado);
    verificaPin(pinIngresado);

    do {
    system ("cls");
    printf ("Bienvenido al cajero automtico. \n");
    printf ("%c\n", *art);
    printf ("Su saldo actual es: %f \n", saldo);
    printf("1. Depositar \n2. Retirar \n3. Salir \n");
    printf("Ingrese la operacion que desea realizar: ");
    scanf("%d", &operacion);
    if (operacion ==1) {
        printf("Indique la cantidad a ingresar: ");
        scanf ("%f", &ingreso);
        saldo += ingreso;
        printf("Su saldo actual es: %f \n", saldo);
        printf("Desea realizar otra operacion? Si/No\n");
        scanf(" %c%c", &reinicio[0], &reinicio[1]);
            if (reinicio[0] == 'n' || reinicio[0] == 'N') {
                system ("cls");
                refresco=1;
        }
    } else if (operacion == 2) {
        printf("Ha seleccionado Retirar. \n");
        printf("Su saldo actual es: %f \n", saldo);
        printf("Indique la cantidad a retirar: ");
        scanf ("%f", &retiro);
        while (saldo < retiro) {
            printf("Saldo insuficiente. Intente de nuevo: ");
            scanf("%f", &retiro);
        }
        saldo -= retiro;
        printf("Su saldo actual es: %f \n", saldo);
        printf("Desea realizar otra operacion? Si/No\n");
        scanf("%s", reinicio);
            if (reinicio[0] == 'n' || reinicio[0] == 'N') {
                system ("cls");
                refresco=1;
            }
    } else if (operacion == 3) {
        return 0;
    }
    }
    while (refresco == 0);
return 0;
}