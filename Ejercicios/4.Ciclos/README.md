# While
## Ejercicio 1

¿Cuál será la salida en pantalla para cada uno de los siguientes fragmentos de programa? De existir errores, señálalos


a)
```cpp
int n = 1;
while (n <= 9)
{
printf("%d\n",n);
n = n + 5;
}
```
b)
```cpp
int n=1;
while( n <= 9)
{
n = n + 5;
printf("%d\n",n);
}
```
c)
```cpp
int n = 1;
while(n <= 10)
printf("%d\n",n);
n = n + 1
```
d)
```cpp
int b=5,n=9;
while (b <= n)
{
printf("%d %d\n",b,n);
b = b + 1;
n = n + 1;
}
printf( "Hasta luego");
```
e)
```cpp
int k=1,m=2;
while(k<6 && m<50)
{
m = m * 2;
printf("%d %d\n",m,k);
m = m + 1;
k = k + 2;
}
printf("%d %d\n",m,k);
```

## Ejercicio 2

Desarrolle un algoritmo que le permita realizar la escritura de los primeros 100 números naturales.
## Ejercicio 3.
Desarrolle un algoritmo que le permita realizar la suma de los primeros N números impares, el N se ingresa
por teclado.
## Ejercicio 4.
Generar un programa que ingresar N números naturales y que muestre la suma, el promedio, el valor
máximo, el mínimo y el cuadrado.
## Ejercicio 5. 
Desarrolle un algoritmo que le permita leer un valor entero positivo N y calcule su factorial.
## Ejercicio 6.
Desarrolle un algoritmo que le permita leer un valor entero positivo N y decir si es primo o no.
## Ejercicio 7.
Desarrolle un algoritmo que le permita realizar la escritura de los primeros N números Primos.
## Ejercicio 8. 
Escribí un programa para mostrar una tabla de conversión entre grados Fahrenheit y grados Celsius. Sugerencia:
celsius = (fahrenheit - 32) * 5/9

|Fahrenheit| Celsius|
|-----|-----|
|32 | 0.0|
|34 | 1.1|
|36 | 2.2|
|............ |..........|
|........... | ..........|
|100 | 37.8|

## Ejercicio 9 
Desarrolle un algoritmo que le permita leer N valores y calcular la media aritmética.
## Ejercicio 10.
Escribir un programa para evaluar la función y = 4x2 - 16x + 15, en donde x toma los valores de 1 a 2 en pasos de
0.1. Para cada x la salida debe dar el valor de y junto con el mensaje POSITIVO o NO POSITIVO. El formato de la
salida será:

|Valor de x |Valor de y | |
| ---------- | --------|----------|
|1.0 |3.00 |POSITIVO|
|1.1 |2.24| POSITIVO|
|... |... |...|
|... |... |...|
|...| ... |...|
|2.0| -1.00 |NO POSITIVO|

## Ejercicio 11.
Escribir un programa de sueldos usando un ciclo do while con señal de finalización. Para cada empleado, el
programa debe solicitar el nombre, el sexo, las horas de trabajo y el sueldo por hora. La primera parte de la
impresión debe dar el nombre de cada empleado, las horas de trabajo, el sueldo por hora y cuánto cobrará. La
segunda parte deberá indicar el sueldo promedio de los hombres y el sueldo promedio de las mujeres.
## Ejercicio 12. 
Pepe empieza con un saldo de $100.000,- que invierte a una tasa anual del 5%. Al finalizar cada año, justo después
de sumar los intereses de ese ciclo, Pepe hará un retiro por $12.000,-. ¿Cuál será el primer año en que, al llegar al
final del período, su saldo no permita semejante retiro?
# do-while
## Ejercicio 1 
¿Cuál será la salida en pantalla para cada uno de los siguientes fragmentos de programa? Encontrala utilizando
seguimiento manual. De existir errores, menciónalos.

a)
```cpp
x=0;
do
{
printf(“%d”, x);
x = x + 1;
}
while (x != 5);
```
b)
```cpp
x=0;
do
{
x = x + 1;
printf(“%d”, x);
}
while (x != 5);
```
c)
```cpp
x=0;
do
{
x = x + 1;
printf(“%d”, x);
}
while (x < 5);
```
d)
```cpp
x=0;
y=0;
do
{
x = x + 2;
y = x – 2;
printf(“%d %d \n”, x,y);
}
while( y <= 5);
```
