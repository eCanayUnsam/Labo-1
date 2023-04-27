#include <stdio.h>


int main()
{
    char cadena[]= "Que miras bobo"; // Aquí alojaremos el valor leído
    int indice= 0;



    printf("Largo '%d'\n", sizeof(cadena));

    for (indice = 0; indice < sizeof(cadena); indice++)
    {
    char actual = cadena[indice];
    printf("Tenemos el caracter '%c'\n", actual);
    }


    return 0;

}
