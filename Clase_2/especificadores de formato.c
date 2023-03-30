/*especificadores de formato*/
#include<stdio.h>

int main(){
int a= -150;
long b=1234567890;
float c= 23.123456789;
double z=12345678934.7654386935;
int e= 532;
char f= 'x';
int op= 30;
char cad[10]="palabra";
int * p=&a;

printf ("%d es el valor de a\n", a);//%d	un entero con signo en notación de base decimal
printf ("%i es el valor de a\n", a);//%i	un entero con signo
printf ("%x es el valor de a\n", a);//%x	Hexadecimal sin signo con minúsculas
printf ("%X es el valor de a\n", a);//%x	Hexadecimal sin signo con mayúsculas
printf ("%ld es el valor de b\n", b);//%ld  Número entero largo
printf ("%f es el valor de c\n", c);//%f	formato de punto flotante
printf ("%g es el valor de c\n", c);//%g	la opción más corta entre "%e" y "%f"
printf ("%lf es el valor de z\n", z);//%lf	double
printf ("%e es el valor de e\n", e);//%e	en notación científica indicando el exponente con "e"
printf ("%c es el valor de f\n", f);//%c: Caracter
printf ("%d es el valor de f\n", f);//%c: Caracter como entero
printf ("%o es el valor de op\n", op);//%o: número entero como octal
printf ("%s es el valor de cad\n", cad);//%o: cadena
printf ("%p es la dirección de a\n", cad);//%n: puntero
getchar();
return 0;
}
