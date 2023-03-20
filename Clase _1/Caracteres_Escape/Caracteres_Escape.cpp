#include <stdio.h>

int main() {
/*Cómo escribir en C las tildes*/
    printf("%c de %crbol\n",160,160); //á
    printf("%c de %clite\n",130,130); //é
    printf("%c aparece en pr%cstino\n",161,161); //í
    printf("%c aparece en cami%cn\n",162,162); //ó
    printf("%c aparece en t%c\n\n",163,163); //ú

    printf("%c de %crbol\n"
           "%c de %clite\n"
           "%c aparece en pr%cstino\n"
           "%c aparece en cami%cn\n"
           "%c aparece en t%c\n\n",160,160,130,130,161,161,162,162,163,163);
/*Caracteres de escape*/
    printf ("Saltos de linea.\nEl profe dijo hola \n\n");
    getchar(); /*Espera el enter*/
    printf ("\tTabulador. El profe dijo hola \n\n");
    getchar();
    printf ("Barra invertida. El profe dijo \\hola\\\n\n");
    getchar();
    printf ("Comillas. El profe dijo: \"hola\"\n\n");
    getchar();
    printf ("Retorno de carro: \"hola\"\r");
    getchar();
    printf ("\n");
    printf ("Retorno de carro: \r\"hola\"\n");
    getchar();
    return 0;
}

