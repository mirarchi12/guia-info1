#include   <stdio.h>
#include   <stdlib.h>

int main(void) {
    int exit=0;
    char rta[2];
    printf("Hola nacho, todo bien?\n");
    scanf("%c %c", &rta[0], &rta[1]);

    if (rta[0] == 's' || rta[0] == 'S') {
        system ("cls");
        printf("Hola nacho, todo bien?TE GARCHO?\n%c%c", rta[0], rta[1]);
    } else {
        printf("nt\n");
    }

    while (exit != 1){
    printf("\napreta 1 para salir\n");
    scanf("%d", &exit);    
    }
    return (0);
}
