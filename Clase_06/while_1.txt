#include<stdio.h>

int main(){

    int edad, contador_asistentes=0, acumulador_edad=0;
    float promedio_edad;

    printf("Para ingresar una edad del primer asistente\n"
           "Para finalizar ingrese un valor igual c% menor a cero\n",162);
    scanf("%d", &edad); //Inicializo la variable de control (edad) antes de comenzar el ciclo. 

    while (edad > 0) { 
	contador_asistentes++;
        acumulador_edad = acumulador_edad + edad;
        

        printf("Para ingresar una edad del primer asistente\n"
           "Para finalizar ingrese un valor igual c% menor a cero\n",162);

        scanf("%d", &edad); //La variable de control necesita tomar un nuevo valor para ser evaluada nuevamente y saber si sigue iterando o termina el ciclo.
 
    }

    promedio_edad = (float)acumulador_edad  /    contador_asistentes;
    printf("El promedio de edades es %.2f\n", promedio_edad);

return 0;
}

