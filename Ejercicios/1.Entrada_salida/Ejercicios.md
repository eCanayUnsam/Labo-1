# Variables, operadores y tipo de datos. Especificadores de formato. Entrada y salida estándar

## Ejercicio 1.
Indicar cuál es la salida por pantalla para cada sentencia printf. siendo:
```cpp
int a = 5;
float b = 13.546;
char c = 'A';
char d = 'a';
int e = 5>1;
```

- printf(“a vale%d”, a);
- printf(“avale%o”,a);
- printf(“avale%x”,a);
-  printf(“a vale%f”, a);
- printf(“a vale%c”, a);
- printf(“bvale%d”,b);
- printf (“b vale%5.2d”,b);
-  printf(“bvale%f”, b);
-  printf (“b vale %.1f”,b;
- printf(“bvale%.2f”,b);
- printf(“bvale%6.4f”,b)
- printf(“bvale%6.1f”,b);
-  printf(“bvale%c”, b);
- printf(“bvale%o”,b);
- printf(“bvale%x”,b);
- printf(“cvale%d”, c);
-  printf(“cvale%f”,c);
-  printf(“cvale%c”,c);
-  printf(“cvale%o”, c);
-  printf(“cvale%x”, c);
-  printf (“d vale %d”, d);
-  printf(“dvale%f”, d);
-  printf(“dvale%c”, d);
-  printf(“dvale%o”,d);
-  printf(“dvale%x”, d);
-  printf(“evale%d”,e);
-  printf(“evale%f”,e);
- printf(“evale%c”, e);
-  printf(“evale%o”,e);
- printf(“evale%x”, e);

## Ejercicio 2. 
Indicar qué queda almacenado en la variable con la que se ingresan datos en cada caso, si se han
definido las variables de la siguiente forma:
```cpp
int a;
float b;
char c;
```
- scanf (“%d”, &a);
- scanf (“%f”, &a);
- scanf (“%c”, &a);
- scanf (“%d”, &b);
- scanf (“%f”, &b);
- scanf (“%c”, &b);
- scanf (“%d”, &c);
- scanf (“%f”, &c);
- scanf (“%f”, &c);

## Ejercicio 3. 

Indicar qué es lo que se almacena en cada una de las variables indicadas a continuación, si se realizan las
operaciones que se indican, sabiendo que se han definido las variables usadas de la siguiente forma:
```cpp
int a = 3, b = 2, c = 1, d, e;
float m = 2.5, n = 5.4, r, s;
```

- d = m;
- d = n;
- e = 3.7;
- d = a;
- d = a + b;
- d = a * b;
- d = a / b;
- d = b / 4;
- d = a % b;
-  d = a % 2;
- e = b / c;
- e = c / b;
- r = a + b;
- r = a / b;
- r = a / 2;
- r = a /2.0;
- s = m + n;
- s = 3 + 4 - 1;
-  s = 3.0 + 4.0 -1;
-  a = m;
-  a = m / 2;
-  a = m / 2.0;
-  a = 3.0 + 4.0 -1;
-  r = a + 1;
-  r = a + 1.0;
- a++;
- r++;
- b--;
- a+=5;
- s*=5;


## Ejercicio 4. 

Indicar qué valor se almacena en cada variable de la izquierda de cada asignación, siendo:
```cpp
int a, b, c, d = 0;
int e = 1; //0 (cero) corresponde a falso
int x = 2, y = 3;
```

- a = 5 > 3;
- b = ( ( 4 < 5 ) && ( 2 > 2 ) );
- a = ! e;
- b = ( ( x % 2 == 0 ) || ( x – y < 10 ) );
- c = ( d && e );
- c = ( d || e );
- c = ! ( d && e );
- c = ( ! d ) && ( ! e );
- c = ( a && ( ! a ) );
- c = ( ( ( x <= ( y * 3.2 ) ) && ( y % 2 != 0 ) ) || ( 1 ) );

## Ejercicio 5. 

Supongamos que tenemos estas variables:
```cpp
int a = 10; float b = 19.3; double d = 64.8; char c = 64;
```
Indica el tipo resultante para las expresiones siguientes:

a) a+b
- [ ] char
- [ ] int
- [ ] float
- [ ] double

b) c+d
- [ ] char
- [ ] int
- [ ] float
- [ ] double

c) (int)d+a
- [ ] char
- [ ] int
- [ ] float
- [ ] double

d) d+b
- [ ] char
- [ ] int
- [ ] float
- [ ] double

e) (float)c+d
- [ ] char
- [ ] int
- [ ] float
- [ ] double

# Operador sizeof()


## Ejercicio 6

Qué muestra el siguiente programa:
```cpp
int main() {
 char c; short s; int i; long l; float f; double d; long double ld;
printf("\nLARGOS DE TIPOS ESCALARES PREDEFINIDOS\n");
printf("El largo de char es %d\n", sizeof(c));
printf("El largo de short es %d\n", sizeof(s));
printf("El largo de int es %d\n", sizeof(i));
printf("El largo de long es %d\n", sizeof(l));
printf("El largo de float es %d\n", sizeof(f));
printf("El largo de double es %d\n", sizeof(d));
printf("El largo de long double es %d\n", sizeof(ld));
getchar();
return 0; }
```
# Operadores de asignación compacta

## Ejercicio 7

Suponiendo los siguientes valores iniciales para las variables:
```cpp
x = 2; y = 6; z = 9; r = 100; s = 10; a = 15; b = 3;
```
a) x += 10;
- [ ] 12 
- [ ] 10 
- [ ] 11

b) s *= b;
- [ ] 9 
- [ ] 13 
- [ ] 30

c) r /= 0;
- [ ] infinito 
- [ ] 1 
- [ ] error

d) y += x + 10;
- [ ] 8 
- [ ] 12 
- [ ] 18

e) z -= a*b;
- [ ] -36 
- [ ] -18 
- [ ] 36

## Ejercicio 8

Cuál es la expresión equivalente para las siguientes operaciones, usando operadoresmixtos:

a) x = 10 + x - y;
- [ ] x += 10-y
- [ ] x -= y+10
- [ ] x += 10+y

b) r = 100*r;
- [ ] r *= 100*r
- [ ] r *= 100
- [ ] r += 100

c) y = y/(10+x);
- [ ] y /= 10*x
- [ ] y /= 10 + y/x
- [ ] y /= 10+x

d) z = 3 * x + 6;
- [ ] z += 6
- [ ] z *= 3
- [ ] no es posible


## Ejercicio 9

Siendo "y" una variable int y "x" una variable float, indica si son correctas las sentencias:

x = .25 + y
y = 0.25 + x
y = 0,25 + x

## Ejercicio 10

Evalúa cada una de las siguientes expresiones y luego comprueba el resultado en el laboratorio.

- 8 * 6 / 3 * 4
- (8 * 6) / 3 *4
- 8 * 6 / (3 * 4)
- (8 * 6 / 3 *4)
- (8 * 6) / (3 * 4)
- 1 + 4 * 5 + 8 / 4 + 4
- 1 + 4 * 5 - 8 / 4 + 4

## Ejercicio 11

Supone que las variables a, b y c tienen asignados los valores 49, 5 y 3 respectivamente. Encuentra

- a % b * c + 1
- a % (b * c) + 1
- 24 / c * 4
- (int) (a / b) % 2
- 48 / (c*2) * 4

## Ejercicio 12 

Desarrolla un algoritmo que permita leer por teclado 2 valores y emitir por pantalla: la suma de los dos, la resta, producto, división, promedio y el doble producto del primero menos la mitad del segundo. 

## Ejercicio 13

Encuentra el error en cada uno de los siguientes programas e indica de qué tipo es.

```cpp
#include <stdio.h>
int main(){
integer x;
real y;
scanf(“%D”, y);
printf("%f",x);
return 0;
}
```
```cpp
#include <stdio.h>
int main(){
int n,total;
float promedio;
n=0;
promedio=total/n;
printf("El promedio es: %f\n",promedio); return 0;
}
```
## Ejercicio 14

Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas (flotante, con 1 decimal).

## Ejercicio 15

Construye un programa que pregunte los años que tienes y emita como respuesta el número de días (sólo en años).

## Ejercicio 16

Construye un programa que dados el costo de 1 kg de determinado producto y la cantidad comprada, emita el valor del total a pagar.

## Ejercicio 17

Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un triángulo, y se emita por pantalla el valor del restante.

## Ejercicio 18

Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el mismo debe emitir por pantalla su superficie y superímetro.

## Ejercicio 19

Construye un programa que permita ingresar la superficie de un cuadrado (en m2), el mismo debe emitir por pantalla su perímetro.

# Uso de la librería math.h

## Ejercicio 20

Este programa utiliza la librería math.h y sus funciones incorporadas. Ejecuta, prueba y extrae conclusiones:

```cpp
#include <stdio.h>
#include <math.h>
int main(){
printf( "sqrt(%.1f) = %.1f\n", 900.0, sqrt( 900.0 ) );
printf( "sqrt(%.1f) = %.1f\n", 9.0, sqrt( 9.0 ) );
printf( "exp(%.1f) = %f\n", 1.0, exp( 1.0 ) );
printf( "exp(%.1f) = %f\n", 2.0, exp( 2.0 ) );
printf( "log(%f) = %.1f\n", 2.718282, log( 2.718282 ) );
printf( "log(%f) = %.1f\n", 7.389056, log( 7.389056 ) );
printf( "log10(%.1f) = %.1f\n", 1.0, log10( 1.0 ) );
printf( "log10(%.1f) = %.1f\n", 10.0, log10( 10.0 ) );
printf( "log10(%.1f) = %.1f\n", 100.0, log10( 100.0 ) );
printf( "fabs(%.1f) = %.1f\n", 13.5, fabs( 13.5 ) );
printf( "fabs(%.1f) = %.1f\n", 0.0, fabs( 0.0 ) );
printf( "fabs(%.1f) = %.1f\n", -13.5, fabs( -13.5 ) );
printf( "ceil(%.1f) = %.1f\n", 9.2, ceil( 9.2 ) );
printf( "ceil(%.1f) = %.1f\n", -9.8, ceil( -9.8 ) );
printf( "floor(%.1f) = %.1f\n", 9.2, floor( 9.2 ) );
printf( "floor(%.1f) = %.1f\n", -9.8, floor( -9.8 ) );
printf( "pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow( 2.0,7.0 ) );
printf( "pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow( 9.0,0.5 ) );
printf( "fmod(%.3f/%.3f) = %.3f\n", 13.675, 2.333, fmod(
13.675, 2.333 ) );
printf( "sin(%.1f) = %.1f\n", 0.0, sin( 0.0 ) );
printf( "cos(%.1f) = %.1f\n", 0.0, cos( 0.0 ) );
printf( "tan(%.1f) = %.1f\n", 0.0, tan( 0.0 ) ); system ("pause");
return 0; }
/* fin de main */
```

## Ejercicio 21

Transcribe el siguiente programa y extrae conclusiones:

```cpp
#include <stdio.h>
#include <stdlib.h>
#define CUAD(x) (x*x) /* Definición de macros */
int main(){
float a;
printf("\nEscriba un número: ");
scanf("%f",&a);
printf("\nSu cuadrado es: %.2f\n",CUAD(a));
getchar();
return 0;}
```
# Ejercicios integradores

## Ejercicio 22

Construye un programa que permita ingresar 2 tiempos, expresados en horas, minutos y segundos, el mismo debe emitir por pantalla la suma de ambos(también en horas, minutos y segundos).

## Ejercicio 23

Desarrolla un algoritmo que le permita leer un valor radio (R), calcular el área (A) de un círculo y emitir valor.
$A = π * R^2$
