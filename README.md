# Labo 1

C++ es un lenguaje de programación, es uno de los más utilizados en todo el mundo. 
Para programar en C++, se necesita un compilador y un editor.
El **compilador** traduce el código fuente a código máquina (Código Binario), y el **editor** es el programa que nos colorea la sintaxis del lenguaje para poder escribir el código  cómodamente,

Hay algunos programas que son compiladores y editores, se conocen como IDE (Entorno de desarrollo Integrado). por ejemplo.
- CodeBlocks
- Dev C++
- [Zinja](http://zinjai.sourceforge.net/). Es un programa similar a PSeint en la interfaz.

Cualquiera que se escoja se debe descargar e instalar.

En nuestro caso vamos a usar **- CodeBlocks**, para crear un nuevo proyecto debemos ir a *File -> New -> Proyect -> Empty project*.


## Hola Mundo

Primero, debemos crear un nuevo proyecto, y luego crear un archivo llamado **main.cpp**, o el nombre que se desee.
Luego de eso, debemos incluir las librerías, que son un conjunto de código que viene predefinido y que nos facilita el trabajo.

```cpp
#include <stdio.h>
int main(){
    printf("Hola Mundo \n");
    return 0;
}
```

```cpp
#include <iostream>
int main(){
    std::cout << "Hola Mundo" << std::endl;
    return 0;
}
```

Para ejecutar el programa usamor el botón de **Build and run**

## Comentarios

Son útiles para ordenar el código y explicar el código. Cuando se compila el programa, el compilador ignora estas líneas y nos las lee.

```cpp 
/**
* Comentario multilínea
*/
// Comentario de una sola línea
```

## Operadores del Preprocesaor

### Operador `include`

Es un operador del preprocesador, el preprocesador es una parte del compilador que verifica qué librerías se están importando en el código fuente. (`#`).

El operador `#include`, permite incluir librerías. Hay dos formas de incluir las librerías

- `#include <iostream>` Busca los archivos en los recursos del compilador
- `#include "iostream"` Busca los archivos en la propia carpeta

*stdio.h* es la cabecera de la biblioteca "standard input-output header" que contien funciones declaradas como por ejemplo *printf*

- **Biblioteca** llamada por vicio del lenguaje, **librería** Conjunto de herramientas que viene con código predefinido.


## Variables y tipos de datos

En C++, una variable es un espacio de memoria reservado para almacenar un valor. Las variables deben ser declaradas antes de su uso y se les asigna un tipo de datos. Los tipos de datos básicos en C son:

**Entero**: para almacenar valores enteros, como -5, 0, 10, etc.

**Flotante**: para almacenar números reales, como 3.14, 2.5, etc.

**Carácter**: para almacenar caracteres, como 'a', 'b', etc.

**Cadena de caracteres**: para almacenar una serie de caracteres, como "Hola mundo".

**Booleano**: para almacenar valores verdadero o falso.

## Variables enteras (`int`)

**iostream** Es una librería que nos permite escribir y leer información por consola.
```cpp
#include <iostream>
```

Para declarar un variable en *C++¨*, debemos primero colocar el tipo de dato. Por ejemplo:
```cpp
int num = 31;
// Otra forma de delcarar y asignar valor es
int num{23};
```

## Variables `bool` y `char`

- **char** Esta tipo de dato almacena caracteres
- **bool** Este tipo de dato almacena valores booleanos (false o verdadero), `true` `false`

### Variable de tipo `char`

Si por ejemplo colocamos una palabra en una variable de tipo **char**, el compilador, sólo tomará un caracter. En este caso usamos *comillas simples*
```cpp
char letra = 'H';
```

Para mostrar varios caracteres usamos comillas dobles y colocamos un __`*`__, al final de la palabra reservada `char` .

### Variable de tipo `bool`
Es un tipo de variable lógico, 0 - 1, ó verdadero y falso.
0 == false
1 == true

Para declarar una variable booleana, indicamos el tipo de dato `bool`
```cpp
bool variable = true; // false | true
```


## Variable de tipo `float`

Son variables que guardar números de coma flotante de baja precisión, son como decimales que no tienen muchos decimales (No tiene tanto espacio en la memoria).

En algunos casos, el compilador redondea el número a un valor superior o inferior.

```cpp
float num = 5.23478;
```

## Variable de tipo `double`

Son tambien números de punto flotante que tienen más precisión ó espacio que memoria que los float. Funciona para números con más caracteres.
```cpp
double num = 12.3479835;
```

![Tipos datos](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/Tipos_datos.jpg)

## Constantes

Son variables que no pueden ser modificadas durante la ejecución del programa. Lo valores que le asignemos no se pueden cambiar.

```cpp
// Es una constante, su valor no se puede cambiar
const int numero = 11;
```
## Arreglos 

Son variables que tienen varias posiciones en memoria, lo que permiten almacenar más de un valor en una sóla referencia.

Para declarar un arreglo, lo hacemos igual que en una variable, colocando al final corchetes angulares indicando el tamaño del arreglo. 

```cpp
// Arreglo de tipo entero con 5 posiciones
int variable[5];
```

Para asignar valores al arreglo, debemos acceder a la posición y en ella colocar el valor que deseemos (Debe ser del mismo tipo de dato).
```cpp
// Asignamos un valor al arreglo, en la posición 0
variable[0] = 12;
``` 
## Printf y Scanf

```cpp
#include <stdio.h>
void main() 
	{
		int a=20;
		float b = 5.23478;
		
		printf("El valor de a es %d\n",a);
		printf("El valor de b es %f\n",b);
	}
```
%c	Un único caracter
%d	Un entero con signo, en base decimal
%u	Un entero sin signo, en base decimal
%o	Un entero en base octal
%x	Un entero en base hexadecimal
%e	Un número real en coma flotante, con exponente
%f	Un número real en coma flotante, sin exponente
%s	Una cadena de caracteres
%p	Un puntero o dirección de memoria

![Formatos](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/Formatos.jpg)


```cpp
#include <stdio.h>
void main()
{
	char a;
	int b;
	printf("Introduce un caracter: ");
	scanf("%s",&a);
	printf("Introduce un numero: ");
	scanf("%d",&b);
}
```

## Operadores Aritméticos

Son los que nos permiten realizar operaciones matemáticas.

```cpp
int num1 = 2;
int num2 = 6;
int suma = num1 + num2;
```

- Suma `+`
- Resta `-`
- Multiplicación `*`
- División `/`
- Módulo (Residuo de la división) `%`


## Operadores de Asignación

El operador de asignación general es `=`. Exiten otros como:
- **Asigna una suma** `+=` Suma un valor a la variable 
- **Asigna una resta** `-=` Resta un valor a la variable
- **Asigna una multiplicación** `*=` Resta un valor a la variable

```cpp
// Declaración;
int operacion;
// Asignación
operacion = 12;
// Operador de asignación
operacion *= 3;
``` 

## Operadores lógicos

- *and* `&&`
	Si ambas condiciones se cumplen, retorna true
- *or* `||`
	Si alguna de las dos condiciones se cumple, retorna true.
- *Negación* `!`
	Niega una condición. Si es true, lo vuelve false y viciversa.


## Estructuras de control de flujo

Las estructuras de control de flujo se utilizan para controlar el flujo de ejecución de un programa. En C, existen tres estructuras de control de flujo principales:

**if-else**: se utiliza para ejecutar una sentencia si una condición es verdadera y otra sentencia si la condición es falsa.

**while**: se utiliza para repetir una sentencia mientras una condición es verdadera.

**for**: se utiliza para repetir una sentencia un número determinado de veces.



## Sentencias `if` (Condicionales)

Permiten comparar dos variables para ejecutar una acción determinada. La condición se cumple siempre y cuando la condición sea verdadera. 

```cpp
if (numero1 < numero2){
    printf("Es menor\n");
} else if (numero1==numero2){
    printf("Son iguales"\n);
} else {
    printf("Es mayor" \n);
}
```

## Operadores de Comparación

- *Operador de comparación* `==`
- *Distinto o diferente* `!=`
- *Mayor que* `>`
- *Mayor o igual que* `>=`
- *Menor que* `<`
- *Menor o igual que* `<=`

Estos operadores son usamos en los condicionales y ciclos, donde comparamos dos valores para realizar una determinada acción.

## Ciclos o Bucles

Estas estructuras nos permiten ejecutar bloques de códigos dada una condición.

## Ciclo `while`

Ejecuta las sentencia siempre que la condición sea verdadera. La expresión se verfica en cada inicio de la iteración.

```cpp 
int i = 0;
while (i <= 5) {
    printf("Valor de i: %d\n",i);
    // Aumentamos el valor de la variable
    i++;
}
```
## Ciclo `for`

El ciclo for ejecuta la primera expresión al iniciar el ciclo. Luego al inicio de cada iteración (Repetición) evalúa la segunda expresion y al final de cada iteración ejecuta la tercera expresion.

```cpp 
// Declaración de un array
char array[5];
array[0] = 'A';
array[1] = 'B';
array[2] = 'C';
array[3] = 'D';
array[4] = 'E';
// Ciclo for
for (unsigned int i = 0; i < sizeof(array) ; i++){
    printf("%c\n",array[i]);
}
```


## Sentencia `switch`

Es un tipo de condicional que dado un valor introducido los compara con los casos que tiene definido. Un ejemplo de switch en `C++` es el siguiente

```cpp
switch (c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':	
        printf("El una vocal.\n");
        break;
default:
    printf("Es una consonante.\n");
    break;
}
```

## Funciones
Una función en C es un bloque de código que realiza una tarea específica y se puede llamar desde cualquier lugar del programa. Las funciones en C deben ser declaradas antes de su uso y se les asigna un tipo de retorno

Las funciones son una manera de encapsular una funcionalidad que quieres reutilizar, de manera que puedes llamar esa función con un solo nombre, y no tendrás que escribir el código entero cada vez que la utilices.

La declaración de una función en c++, va de la siguiente manera.
*tipo-dato-devolver nombre-funcion(){ //Código a ejecutar  }*

```cpp
// Funcion suma
int sumar(int a, int b){
	return a+b;
}
// Funcion que no retorna nada
void miFuncion(){
	printf("Yo no retorno nada");
}
```

Hay dos tipos de funciones
- Las que no retornan valor `void`
- Las que retornan un valor `int`, etc.

También podemos definir parámetros por defecto a la función, de la siguiente manera.
```cpp
void funcion(int a = 10){
    printf("%d",a+3);
}
```

De esta manera, ya el valor de a tiene predefinido 10, sin embargo este valor puede ser cambiado al pasar por parámetro un nuevo valor en la llamada de la función.
```cpp
int main(){
    function();
    function(12);
    return 0;
}
```
