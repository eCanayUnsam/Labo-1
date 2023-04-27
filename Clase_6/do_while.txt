#include<stdio.h>

int main(){

    int edad, contador_asistentes=0, acumulador_edad=0;
    float promedio_edad;

     //Inicializo la variable de control (edad) antes de comenzar el ciclo.

    do{
        printf("Para ingresar una edad del primer asistente\n"
           "Para finalizar ingrese un valor igual c% menor a cero\n",162);
        scanf("%d", &edad);

        contador_asistentes++;
        acumulador_edad = acumulador_edad + edad;



    }while (edad > 0);

    //contador_asistentes--;
    //printf("contador_asistentes = %d\n",contador_asistentes);


    if (contador_asistentes > 0) {
        promedio_edad = (float)acumulador_edad  /    contador_asistentes;
        printf("El promedio de edades es %.2f\n", promedio_edad);
        }
    else printf("No hubo asistentes a la clase hoy\n");

return 0;
}

