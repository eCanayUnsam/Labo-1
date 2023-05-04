/*
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla
si dicho número es Positivo, Negativo o 0 (cero). Análisis: primero se deben leer un valor
y almacenarlo en una variable. Para el caso del desarrollo se almacenará el valor en la variable A.
Para poder saber si es positivo, negativo o cero, se compara y se emite el resultado.
*/
#include<stdio.h>

int main(){
int num;

printf("Ingrese un número entero\n");
scanf("%d", &num);

if ( num > 0) {
               printf("El número ingresado es positivo\n");
               num=num+1;
              }
else if ( num < 0 ) {
        printf("El número ingresado es negativo\n");
        num=num-1;
        }
else printf("El número ingresado es cero\n");

return 0;
}
