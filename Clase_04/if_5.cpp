/*construya un programa que ingrese un número entero, emita un mensaje que diga si es positivo y le
sume 1. En el caso que se negativo que también emita un mensaje y le reste 2. En el caso de ser 0 (cero), que
también emita un mensaje.*/


#include <stdio.h>
int main(){
int num;
printf(“Ingrese un número\n”);
scanf(“%d”,&num);
if (num > 0) {
printf(“Es positivo”);
num = num + 1;
}
else if (num < 0){
 printf(“Es negativo”);
num = num – 2;
 }
else printf (“El valor ingresado es 0”);
return 0;
