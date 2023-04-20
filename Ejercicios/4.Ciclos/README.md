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
## Ejercicio 2. 
¿Qué mostrará en pantalla el siguiente fragmento?
```cpp
m=5;
n=9;
do
{
printf(“%d %d \n”,m,n);
m = m + 2;
n = n + 1;
}while( m <= n);
printf(“%d %d \n”,m,n);
```
## Ejercicio 3.
Escribe un programa que le permita al usuario intentar hasta cuatro veces la respuesta a una cierta pregunta. Si el
usuario no acierta a los cuatro intentos, se le deberá indicar la respuesta correcta.
## Ejercicio 4.
Escribe un programa que solicite al usuario un número (n) y muestre en pantalla el recíproco del número
(1/n). Utilizar un ciclo do while para lograr que el usuario repita el ingreso si introduce cero.
## Ejercicio 5. 
Pedro invierte u$s 100 a una tasa del 8% anual. Jorge invierte u$s 150 al 5% anual. ¿Después de cuántos años la
cuenta de Pedro rebasará a la de Jorge?
## Ejercicio 6.
Utilizando el programa de la práctica de switch, que convierte un carácter en código Morse, construye un programa
que permita ingresar más de un carácter.
## Ejercicio 7. 
Utilizando el programa de la práctica de switch, que convierte Kg a otra unidad de medida, construye un programa
que permita ingresar medidas hasta que decida no ingresar más.
## Ejercicio 8.
Construye un programa que muestre un menú de opciones para los ejercicios de la práctica de condicionales, 8, 22, 32
y 36. El programa debe ejecutar las soluciones para cada caso.
# for
## Ejercicio 1
¿Cuál será la salida para cada uno de los siguientes fragmentos de programa?

a)
```cpp
for(i=0;i<3;i++)
printf(“Hola”);
printf(“Buen dia”);
 printf(“Hasta luego”);
```
b)
```cpp
suma=0;
for(i=0;i<4;i++)
suma+=i*i;
printf(“%d”,suma);
```
c)
```cpp
suma=0;
cuenta=0;
for(i=0;i<4;i++) {
suma+=i;
cuenta++;
}
printf(“%.2f”,suma/cuenta);
```
d)
```cpp
for(i=0;i<4;i++)
{
suma=0;
suma++;
}
printf(“%d”,suma);
```

## Ejercicio  2
¿Cuántas veces imprimirá “Pepe” el fragmento:

a) 
```cpp
for(i=5;i<15;i++)
printf(“Pepe”);
```
b) 
```cpp
for(i=0;i<4;i++);
printf(“Pepe”);
```
## Ejercicio 3.
¿Qué tiene de malo el siguiente fragmento de programa?
```cpp
for(i=0;i<5;i++)
{
n=i*i;
i++;
}
```
## Ejercicio 4.
Desarrolla un algoritmo que le permita realizar la escritura de los primeros 100 números naturales.
## Ejercicio 5.
Desarrolla un algoritmo que le permita realizar la suma a los primeros N números impares.
## Ejercicio 6. 
Escribe un programa para encontrar la suma de los primeros 50 números. Córrelo varias veces, debe en cada caso
mostrar la misma salida. Ahora elimina la inicialización: sum=0; y corre el programa dos veces más. Si las salidas
fueron incorrectas explica por qué.
## Ejercicio 7. 
Escribe un programa en el que se pida al usuario que ingrese 10 enteros impares para sumarlos, el programa debe
validar el número de manera que actúe correctamente cuando el usuario introduce, por error, un número par,
imprimirá la suma y debe finalizar sólo cuando se hayan ingresado diez enteros impares.
## Ejercicio 8.
5! (se lee "factorial de cinco") es igual al producto 5.4.3.2.1. De manera similar, 8! = 8.7.6.5.4.3.2.1. Escribe un
programa que calcule el factorial de un número que se ingresa por teclado (ten en cuenta el tipo de dato para
obtener el resultado).
## Ejercicio 9. 
Escribe un programa de sueldos para una pequeña compañía que tiene 6 empleados. Para cada empleado/a, el
programa recibe desde el teclado el nombre, sexo, horas trabajadas y sueldo por hora. Por cada empleado
ingresado, el programa deberá mostrar en pantalla el nombre y el sueldo de cada empleado. Posteriormente debe
informar el total de pagos para cada sexo, y el sueldo promedio de hombres y de mujeres.
## Ejercicio 10. 
Escribe un programa que permita calificar a un grupo de 10 alumnos de la escuela secundaria. Por teclado se
ingresan el nombre y las tres calificaciones de cada alumno y con esos datos el programa debe calcular e informar
el promedio de cada alumno y decir si está aprobado o no; para aprobar se requiere un promedio de seis o más y
haber obtenido al menos seis en la última de las tres calificaciones. Posteriormente el programa debe informar
cuántos alumnos aprobaron y cuántos obtuvieron un promedio de al menos 8 puntos.
