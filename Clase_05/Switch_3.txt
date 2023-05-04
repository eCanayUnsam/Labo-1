
#include <stdio.h>

int main() {
    char variable_char;

    printf("\n Escribe el numero de la opción que desees: ");

    scanf("%c",&variable_char);

    switch(variable_char){

        case ‘f’:
        case ‘F’:
            printf("\nAquí se ejecutan las instrucciones para f minúscula o mayúscula\n");
            cont_fem++;
            break;
        case ‘m’:
        case ‘M’:
            printf("\nAquí se ejecutan las instrucciones para m minúscula o mayúscula\n");
            cont_masc++;
            break;
        default:printf("\n\nOpción no válida\n");
            break;
    }
}

