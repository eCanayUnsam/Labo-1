/*
1. Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir
en la pantalla si dicho número es Positivo, Negativo ....y restarle 1
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
else {
        printf("El número ingresado es negativo\n");
        num=num-1;
     }

return 0;
}
