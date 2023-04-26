#include <stdio.h>


int main()
{
    char codigo[]="Hola Mundo"; // Aquí alojaremos el valor leído
    char cadena[15];
    int indice= 0,flag;

    printf("Escribe el codigo:\n");
    gets(cadena); // No usamos &

    flag=1;
    while (cadena[indice] != 0)
    {
    printf("%c == %c da : %d\n",codigo[indice],cadena[indice],codigo[indice] == cadena[indice]);
      if(codigo[indice] != cadena[indice])
        flag=0;
      indice++;
    }
    if (flag)
        printf("Si");
    else
        printf("No");


    return 0;

}

