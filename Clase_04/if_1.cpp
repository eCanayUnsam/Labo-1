/*
1. Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir
en la pantalla si dicho n�mero es Positivo......
y sumarle 1
*/

#include<stdio.h>

int main(){
int num;

printf("Ingrese un n�mero entero\n");
scanf("%d", &num);

if ( num > 0 ) printf("El n�mero ingresado es positivo\n");

/*
probar las siguientes instrucciones
resul=num > 0;
printf("resultado vale %d\n", resul);
*/

return 0;
}
