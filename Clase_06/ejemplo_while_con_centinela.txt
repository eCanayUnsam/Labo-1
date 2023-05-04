/* Programa para obtener el promedio de calificaciones de una clase mediante una repetición controlada por centinela */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main()
{
   int contador;     /* número de calificaciones introducidas */
   int calificacion; /* valor de la calificación */
   int total;        /* suma de las calificaciones */

   float promedio;   /* número con punto decimal para el promedio */

   /* fase de inicialización */
   total    = 0; /* inicializa el total */
   contador = 0; /* inicializa el contador del ciclo */

   /* fase de proceso */
   /* obtiene la primera calificación del usuario */
   printf( "Introduzca la calificacion, -1 para terminar: " ); /* indicador para la entrada */
   scanf( "%d", &calificacion ); /* lee la calificación del usuario */

   /* realiza el ciclo mientras no se introduzca el valor centinela */
   while ( calificacion != -1 ) {
      total = total + calificacion; /* suma calificación a total */
      contador = contador + 1; /* incrementa el contador */

      /* obtiene la siguiente calificación del usuario */
      printf( "Introduzca la calificacion, -1 para terminar: " ); /* indicador para la entrada */
      scanf("%d", &calificacion); /* lee la siguiente calificación */
   } /* fin de while */

   /* fase de terminación */
   /* si el usuario introduce al menos una calificación */
   if ( contador != 0 ) {
 /* calcula el promedio de todas las calificaciones introducidas */
      promedio = ( float ) total / contador; /* evita la truncación */

      /* despliega el promedio con dos dígitos de precisión */
      printf( " El promedio de la clase es: %.2f\n", promedio );
   } /* fin de if*/
   else { /* si no se introduce calificación alguna , despliega el mensaje */
      printf( "No se ingresaron calificaciones\n" );
   } /* fin de else */
getchar();
   return 0; /* indica que el programa terminó con exito */

} /* fin de la función main */
