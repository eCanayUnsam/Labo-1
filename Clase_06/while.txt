/*Programa de repetición controlada por contador */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main()
{
   int contador;     /* número de la calificación siguiente */

   /* fase de inicialización */
     contador = 1; /* inicializa el contador del ciclo */

   /* fase de proceso */
   while ( contador <= 10 ) {     /* repite 10 veces el ciclo */

      contador = contador + 1;      /* incrementa el contador */
      printf( "\n valor de contador es: %d ", contador);
     } /* fin de while */

   /* fase de terminación */

   getchar();
   return 0; /* indica que el programa terminó con exito */
} /* fin de la función main */
