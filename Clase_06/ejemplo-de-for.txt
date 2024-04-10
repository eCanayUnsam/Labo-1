#include <stdio.h>


int main()
{
    int edad, contador_asistentes, acumulador_edad=0, cantidad_alumnos;
    float promedio_edad;

    printf("Ingrese la cantidad de alumnos \n");
    scanf("%d",&cantidad_alumnos);


   for ( contador_asistentes =0; contador_asistentes < cantidad_alumnos; contador_asistentes++)
    {
        printf("Ingrese la edad del siguiente alumno \n");
    scanf("%d",&edad);

    acumulador_edad=acumulador_edad + edad;

    }
      if (contador_asistentes > 0) {
        promedio_edad= (float)acumulador_edad  /    contador_asistentes;
        printf("El promedio de edades es %.2f\n", promedio_edad);
        }
    else printf("No hubo asistentes a la clase hoy\n");

   return 0;

}


