/*construir un programa que le pida al usuario que ingrese un
número distinto de 0 y emita un mensaje que diga si es par o impar,
usando una variable bandera. */

#include<stdio.h>

int main(){
int num;
int bandera=0; //flag

/*la idea es que inicializo una variable en 0, si encuentro el par le asigno un 1,
sino queda en 0, por lo tanto es impar.*/

printf("Ingrese un número entero distinto de 0\n");
scanf("%d", &num);

if ( num % 2 == 0) bandera = 1; // recordar que un solo '=' significa asignación

if ( bandera == 1 ) printf("El número ingresado es par\n");
else  printf("El número ingresado es impar\n");

return 0;
}

