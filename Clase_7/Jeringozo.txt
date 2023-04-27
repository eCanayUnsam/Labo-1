#include <stdio.h>


int main()
{
    char cadena[]= "Que miras bobo"; // Aquí alojaremos el valor leído
    int indiceCadena= 0;

    char jeringoso[100];
    int indicejeringoso= 0;

      while (cadena[indiceCadena] != 0)
    {
        switch(cadena[indiceCadena])
        {
            case 'A':
            case 'a':
                jeringoso[indicejeringoso] = cadena[indiceCadena];
                indicejeringoso++;
                indiceCadena++;
                jeringoso[indicejeringoso] = 'p';
                indicejeringoso++;
                jeringoso[indicejeringoso] = 'a';
                indicejeringoso++;
                break;
            case 'E':
            case 'e':
                jeringoso[indicejeringoso] = cadena[indiceCadena];
                indicejeringoso++;
                indiceCadena++;
                jeringoso[indicejeringoso] = 'p';
                indicejeringoso++;
                jeringoso[indicejeringoso] = 'e';
                indicejeringoso++;
                break;
            case 'I':
            case 'i':
                jeringoso[indicejeringoso] = cadena[indiceCadena];
                indicejeringoso++;
                indiceCadena++;
                jeringoso[indicejeringoso] = 'p';
                indicejeringoso++;
                jeringoso[indicejeringoso] = 'i';
                indicejeringoso++;
                break;
            case 'O':
            case 'o':
                jeringoso[indicejeringoso] = cadena[indiceCadena];
                indicejeringoso++;
                indiceCadena++;
                jeringoso[indicejeringoso] = 'p';
                indicejeringoso++;
                jeringoso[indicejeringoso] = 'o';
                indicejeringoso++;
                break;
            case 'U':
            case 'u':
                jeringoso[indicejeringoso] = cadena[indiceCadena];
                indicejeringoso++;
                indiceCadena++;
                jeringoso[indicejeringoso] = 'p';
                indicejeringoso++;
                jeringoso[indicejeringoso] = 'u';
                indicejeringoso++;
                break;
            default:
                jeringoso[indicejeringoso] = cadena[indiceCadena];
                indicejeringoso++;
                indiceCadena++;
                break;
        }
    }

    jeringoso[indicejeringoso] = '\0';


    printf("Cadena '%s'\n", cadena);
    printf("Jeringoso '%s'\n", jeringoso);
    return 0;

}



