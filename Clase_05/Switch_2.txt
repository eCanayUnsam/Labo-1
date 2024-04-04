
#include <stdio.h>

int main() {
    int variable_int;

    printf("\n Escribe el numero de la opción que desees: ");

    scanf("%d",&variable_int);

    switch(variable_int){
        case 0:
        case 1:
        case 2:
        case 3:
            printf("\nAquí se ejecutan las instrucciones para cualquier valor de 0 a 3\n");
            break;
        case 4:
        case 5:
            printf("\nAquí se ejecutan las instrucciones para los valores 4 y 5\n");
            break;
        case 6:
            printf("\nAquí se ejecutan las instrucciones para el valor 6\n");
            break;
        case 10:
        case 15:
        case 24:
            printf("\nAquí se ejecutan las instrucciones para los valores 10, 15 y 24\n");
            break;
        default:printf("\n\nOpción no válida\n");
            break;
    }
}


