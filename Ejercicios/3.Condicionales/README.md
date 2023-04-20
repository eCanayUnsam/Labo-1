# IF
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
## Ejercicio 12.
Evaluar las siguientes expresiones. Siendo:

x = 10;
y = 20;
z = 30;

a) (x < 10) && (y > 15)

- [ ] true
- [ ] false
  
b) (x <= z) || (z <= y)

- [ ] true
- [ ] false

c) !(x+y < z)

- [ ] true
- [ ] false

## Ejercicio 13. 
Suponiendo que y = 5 y x = 1, cuando se ejecutan las siguientes instrucciones; ¿cuál será la
salida?
a)
```cpp
if (!((x < 2) && (y < 6)) )
printf( "Si");
 else
printf( "Si");
```
b)
```cpp
if (! ((x > 1) && (y > 3))
printf( "Si");
else
printf( "Si");
```
## Ejercicio 14.
Determina la salida para el ejercicio anterior, si x vale 5 e y vale 1.
## Ejercicio 15.
Completa el programa incluyendo el espacio en blanco en el siguiente fragmento de programa de
manera que una persona de menos de 1,82 m. de estatura y peso superior a 90,7 Kg. se clasifique como de
peso excesivo, y las demás personas como de peso adecuado.
```cpp
printf("Ingrese la estatura");
scanf(“%d”,&estatura);
printf("Ingrese el peso");
scanf(“%d”,&peso);
if ___________________________ printf( "Peso excesivo!");
else printf( "Peso adecuado.");
```
## Ejercicio 16.
Vuelve a escribir el fragmento anterior, pero utilizando el operador || (OR) en la condición de
If, cuál es el resultado?
## Ejercicio 17. 
Ingresados tres caracteres, la computadora los muestra ordenados alfabéticamente.
## Ejercicio 18.
Ingresados 3 números enteros, la computadora indica si están desordenados u ordenados en forma
creciente o decreciente.
## Ejercicio 19.
Se ingresa un número de hasta 5 cifras y se indica si es o no capicúa
## Ejercicio 20.
Se lee un número entero correspondiente a un año, y se muestra un mensaje indicando si es año
bisiesto.
## Ejercicio 21.
Construye un programa que ingrese los valores de los lados de un triángulo:
a. Valide si las medidas pueden formar un triángulo.
b. Detecte y muestre un mensaje correspondiente a su tipo (EQUILÁTERO, ISÓSCELES, O ESCALENO);
## Ejercicio 22. 
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es
múltiplo de Z. Análisis: Para resolver el ejercicio planteado anteriormente, hay que leer primero el
valor del número y almacenarlo en una variable (N). Luego leer otro valor y almacenarlo en la variable
Z. Para saber si el número almacenado en la variable N es múltiplo del número almacenado en Z, se hace
la división entre Z y N, si la división es exacta entonces N es múltiplo de Z, de lo contrario N no será
múltiplo de Z.
## Ejercicio 23.
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es
común divisor de otros dos valores leídos W y Z. Análisis: Para resolver el ejercicio planteado, hay que
leer primero el valor del número y almacenarlo en una variable (N). Leer dos valores más y almacenarlos
en las variables W y Z respectivamente. Para saber si el valor almacenado en la variable N es común
divisor de W y Z, se chequea para ver si la división entre W/n y Z/n son exactas. En caso de ser exactas
entonces el valor numérico almacenado en la variable N es común divisor de los dos. En caso contrario no
lo será.
## Ejercicio 24.
Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es
común múltiplo de M y P. M y P también se deben leer desde el teclado. Análisis: Para dar solución,
primero se deben leer los valores. En N se almacena un valor y en las variables M y P se almacenarán los
otros dos valores de los cuales se desea saber si N es común múltiplo o no. Para poder saber si N es
múltiplo habrá que realizar una división y preguntar si dicha división es exacta o no, con cada uno de
los dos valores (N/M y N/P). Si cada división es exacta entonces escribir que N es común múltiplo de M y
P o en caso contrario decir que N no es común múltiplo.
## Ejercicio 25. 
Desarrolla un algoritmo que le permita leer tres valores A,B y C e indicar si la suma de dos
números cualquiera es igual al tercero. Análisis: Primero se deben leer los tres valores y almacenar
cada valor en una variable. En el caso del ejemplo se guardaran los valores en los identificadores A,B,
y C. luego se procederá a realizar las diferentes comparaciones.
## Ejercicio 26.
Una frutería ofrece las manzanas con descuento según la siguiente tabla:
|NUM. DE KILOS COMPRADOS |% DESCUENTO|
|--|--|
|0 – 2 |0%|
|2.01 – 5 |10%
|5.01 - 10 |15%|
|10.01 en adelante |20%|

 Determina cuánto pagara una persona que compre X manzanas a Y precio en esa frutería. 
 
#  switch
 
## Ejercicio 1
 
 Tipea y prueba el siguiente programa:
 ```cpp
#include <stdio.h>
int main() {
 int dia;
 printf( "\n Introduzca dia de la semana: " );
 scanf( "%d", &dia );
 switch ( dia )
 {
 case 1 : printf( "\n Lunes" );
 break;
 case 2 : printf( "\n Martes" );
 break;
 case 3 : printf( "\n Miercoles" );
 break;
 case 4 : printf( "\n Jueves" );
 break;
 case 5 : printf( "\n Viernes" );
 break;
 case 6 : printf( "\n Sabado" );
 break;
 case 7 : printf( "\n Domingo" );
 break;
 default : printf( "\n ERROR: Dia incorrecto." );
 }
 return 0;
}
```

\Puedes hacerlo de otra manera?, cómo lo harías sin utilizar switch?


## Ejercicio 2
 
 Construir un programa que ingrese un caracter y determine si es una vocal.
 
## Ejercicio 3
 
 Construir un programa que ingrese un caracter y determine si es número.
 
## Ejercicio 4
 
 El código Morse, también conocido como alfabeto Morse, es un sistema de representación de
letras y números mediante señales emitidas de forma intermitente. Construye un programa que
permita ingresar un carácter, letra o número y convertirlo en código. 

## Ejercicio 5
 
Construir un programa que convierta Kg a otra unidad de medida de masa, mostrar en pantalla
un menú con las opciones posibles. Ejemplo de menú:
```cpp
printf("Introduzca peso en kilogramos:");
 scanf("%d",&peso);
 
printf("Seleccione opción:\n");
printf("1 - Hectogramos\n");
printf("2 - Decagramos\n");
printf("3 - Gramos\n");
printf("4 - Decigramos\n");
printf("5 - Centigramos\n");
printf("6 - Miligramos\n");
 scanf("%d",&opcion);
 ```

## Ejercicio 6

Dado el siguiente algoritmo y su código, analiza y prueba el código, si existen, corrige
los errores y por último agrega la función resto, raíz cuadrada y potencia:

### Algoritmo Calculadora

**Las variables y constantes que se utilizan en todo el algoritmo**

Variables de entrada introducidas por el usuario

entero: num1,num2 variables que almacenan los dos números

caracter: oper variable que almacenará el carácter correspondiente a la operación seleccionada

entero result variable que almacena el resultado de la operación*/

#### INICIO

**Pedir Los datos**

 - Pedir los dos números

- Pedir la operación


ESCRIBIR "\n\ A continuación se le pedirán dos números enteros \n"

ESCRIBIR " \n Numero 1:"

LEER "%d", num1

ESCRIBIR " \n Numero 2:"

LEER "%d", num2

ESCRIBIR "\n\ Seleccione una de las operaciones a realizar con los números \n” ESCRIBIR "

\n \tSuma (+) \n\t Resta (-) \n\t Multiplicacion (x) \n "

ESCRIBIR"\n\t Division entera (/)\n\t Resto de Division entera (%)"

ESCRIBIR" \n \t Operacion:"

LEER "%c", oper

#### Calcular

**Calcular la operación dependiendo del carácter introducido por el usuario**

segun_sea (oper)

caso '+': result = num1 + num2

caso '-' : result = num1 - num2

caso 'x' : result = num1 * num2

caso '/' : si (num2 != 0) entonces

result = num1 / num2 sino

ESCRIBIR"\n \t \t ERROR!!! Division por cero" fin_si

caso '%' : si (num2 != 0) entonces

result = num1 % num2 sino

Escribir"\n \t \t ERROR!!! Division por cero" fin_si

en cualquier otro caso: ESCRIBIR"\n\n OPERADOR DESCONOCIDO" fin_según_sea


#### IMPRESION dependiendo del resultado

**Si es una operación de las válidas**

si ((oper == '+')||(oper == '-')||(oper == '+')||(oper == 'x')||(oper == '/')||(oper == '%')) entonces

**Si no es una division por cero**

si ((num2==0)&& ( (oper=='/')||(oper == '%') )) entonces

ESCRIBIR("\n No se puede imprimir el resultado.FIN\n");

sino

ESCRIBIR ("\n \t %d %c %d = %d\n ", num1, oper,num2,result);

#### FIN

```cpp
#include <stdio.h>
/* Programa que simula una calculadora*/
int main (){ /* INICIO*/
    int num1,num2; /* variables que almacenan los dos números que
    introducirá el usuario*/
    int result; /* variable que almacena el resultado de la operación*/
    char oper; /* variable que almacenará el carácter correspondiente a la operación seleccionada por el
    usuario*/
    /* Pedir Los datos
    ** P11.- Pedir los dos números
    ** P12.- Pedir la operación */
    printf("\n\ A continuación se le pedirán dos números enteros \n");
    printf( " \n \tNumero 1:");
    scanf( "%d", &num1);
    printf( " \n \tNumero 2:");
    scanf( "%d", &num2);
    printf( "\n\ Seleccione una de las operaciones a realizar con los números \n");
    printf( " \n \tSuma (+) \n\t Resta (-) \n\t Multiplicación (x) \n ");
    printf("\n\t División entera (/)\n\t Resto de División entera (%)");
    printf( " \n \tOperación:");
    fflush(stdin);
    scanf( "%c", &oper);
    /* Calcular la operación, dependiendo del valor de la variable oper */
    switch (oper) {
        case '+': result = num1 + num2 ;
            break;
        case '-': result = num1 - num2 ;
            break;
        case 'x': result = num1 * num2 ;
            break;
        case '/': if (num2 != 0) {
                    result = num1 / num2 ; }
                else {
                    printf("\n\t\tERROR!!! Division por cero"); }
            break;
        default: printf("\n\n OPERADOR DESCONOCIDO");
        }/*del switch*/
    /* IMPRESION dependiendo del resultado */
    /* Si es una operación de las válidas*/
    if ((oper == '+')||(oper == '-')||(oper == '+')||(oper == 'x')||(oper == '/'))
    {
        /* Si no es una division por cero*/
        if ((num2==0)&& ( (oper=='/')||(oper == '%') )) {
            printf("\n No se puede imprimir el resultado. FIN \n"); }
        else {
            printf ("\n \t %d %c %d = %d\n ", num1, oper, num2, result); }
        }
    getchar();
    return 0;
} /*FIN*/
```
