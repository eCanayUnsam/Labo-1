## Ejercicio 1.
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho
número es Positivo, Negativo o 0 (cero).
## Ejercicio 2.
Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cuál de los dos valores
leídos es el mayor. Análisis: primero se deben leer los dos valores y almacenar cada uno de ellos en una
variable. Para el caso del desarrollo se almacenará un valor en la variable A y el otro en la variable B.
Para poder saber cuál de los dos valores es mayor simplemente se comparan las dos variables y se escribirá
cuál de las dos es la mayor. Se supone que los dos valores leídos son diferentes.
## Ejercicio 3. 
Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.
## Ejercicio 4.
Desarrolla un algoritmo que le permita leer 2 valores A y B e indicar si uno de los dos divide al
otro exactamente. Análisis: Para dar solución al anterior ejercicio, primero se deben leer los dos valores y
almacenar cada uno de ellos en una variable. Para el caso del desarrollo se almacenará un valor en la
variable A y el otro en la variable B. Para saber si uno de los dos divide exactamente al otro se examina
primero el caso en que B divida exactamente a A; se compara el residuo, si es cero se escribirá que divide
exactamente a A de lo contrario se examina el caso en que A divida exactamente a B. Se compara nuevamente el
residuo, si es cero se escribirá "A divide exactamente a B" sino "ninguno de los dos divide exactamente al
otro". Se supone que los dos valores leídos son diferentes.
## Ejercicio 5. 
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es par o
impar.
## Ejercicio 6. 
Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos números
es par. Análisis: Primero se leen los dos datos almacenando cada uno de ellos en un variable, en el caso del
ejercicio el primer valor se almacena en la variable A y el segundo se almacena en la variable B. Al
sumarlos para saber si el resultado es par o impar se divide entre dos chequeando el residuo. Si el residuo
es cero es porque el valor es par y si el residuo es uno es porque el valor es impar.
## Ejercicio 7.
Ingresados dos números reales, la computadora muestra su cociente. Si el segundo número es cero, la
computadora muestra un mensaje indicando la imposibilidad de la operación.
## Ejercicio 8.
Desarrolla un algoritmo que le permita leer tres valores y almacenarlos en las variables A, B y C
respectivamente. El algoritmo debe indicar cuál es el mayor. Para este caso se asume que los tres valores
leídos por el teclado son valores distintos. Análisis: Es necesario leer los tres valores a comparar, cada
uno de ellos se almacena en una variable que para el ejercicio será A, B y C. Para saber si A es el valor
mayor se compara con las variables B y C respectivamente. En caso de ser mayor se escribe el mensaje, en
caso contrario se sigue verificando otra variable caso B y si no por defecto se dirá que C es el mayor
asumiendo que los tres valores almacenados son diferentes.
## Ejercicio 9. 
Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cual es valor del centro.
Análisis: Una vez leídos los valores en cada uno de los indicadores (variables A,B,C) se procede a comparar
cada uno de ellos con los otros dos para verificar si es valor del centro o no. Un valor es del centro si es
menor que uno y mayor que otro o el caso contrario. Igualmente se asume que los tres valores leídos son
diferentes.
## Ejercicio 10. 
Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres divide
a los otros dos exactamente. Análisis: Leídos los tres valores y almacenados en cada una de las variables A,
B y C respectivamente se procede a verificar si cada uno de ellos divide exactamente a los otros dos. La
división es exacta si el residuo de la división respectiva es igual a cero.
## Ejercicio 11.
Completa los espacios en blanco de manera tal que el programa indique si la persona es o no mayor de
edad, ingresando un valor entero;
A)
```cpp
if ____________________
printf( "Es mayor de edad, ya que tiene %d años\n" , edad );
else
printf ("No es mayor de edad\n");
```
b) 
```cpp
if _______________
printf( "No es mayor de edad, ya que tiene %d años\n" , edad );
else
printf ("Es mayor de edad\n");
```
