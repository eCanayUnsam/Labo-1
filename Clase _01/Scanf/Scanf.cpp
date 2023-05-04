#include<stdio.h>

int main(){
int a;
long b;
float c;
char car;

printf("Ingrese un valor entero\n");
scanf("%d", &a);
fflush(stdin);
printf ("%d es el valor de a\n", a);

printf("Ingrese otro valor entero\n");
scanf("%ld", &b);
fflush(stdin);
printf ("%ld es el valor de b\n", b);

printf("Ingrese un valor real\n");
scanf("%f", &c);
fflush(stdin);
printf ("%f es el valor de c\n", c);
printf ("%.2f es el valor de c con 2 decimales\n", c);

printf("Ingrese un caracter\n");
scanf("%c", &car);
fflush(stdin);
printf ("%c es el valor de car\n", car);

getchar();
return 0;
}
