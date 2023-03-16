# Resolución De Problemas Y Algoritmos

1. **Análisis del problema:** primer paso para encontrar la solución a un problema es el análisis del mismo.
2. **Estudio de su solución:** Se debe examinar cuidadosamente el problema a fin de obtener una idea clara
sobre lo que se solicita y determinar los datos necesarios para conseguirlo.
3. **Diseño del Algoritmo:** Un algoritmo puede ser definido como la secuencia ordenada de pasos, sin
ambigüedades, que conducen a la resolución de un problema dado y expresado en lenguaje natural, por
ejemplo el castellano. Todo algoritmo **debe ser:**
- **Preciso:** Indicando el orden de realización de cada uno de los pasos.
- **Definido:** Si se sigue el algoritmo varias veces proporcionándole (consistente) los mismos
datos, se deben obtener siempre los mismos resultados.
- **Finito:** Al seguir el algoritmo, este debe terminar en algún momento, es decir tener un
número finito de pasos.

**Codificación del programa:** en un lenguaje de programación.

**Depuración y prueba:** verificación, corrección de errores y ejecución.

## Ejemplos Intuitivos De Algoritmos

**Problema:** calcular el factorial de un número utilizando la calculadora estándar de Windows.
1. Encender la calculadora (on).
2. Pulsar el número 5.
3. Pulsar la tecla *.
4. Pulsar el número 4.
5. Pulsar la tecla =
6. Aparece en el display el número 20
7. Pulsar la tecla *.
8. Pulsar el número 3.
9. Pulsar la tecla =
10. Aparece en el display el número 60
11. Pulsar la tecla *.
12. Pulsar el número 2.
13. 13. Pulsar la tecla =
14. Aparece en el display el número 120
15. Pulsar la tecla *.
16. Pulsar el número 1.
17. Pulsar la tecla =
18. Aparece en el display el número 120
19. Pulsar la tecla *.
20. Pulsar el número 1.
21. Pulsar la tecla =
22. Aparece en el display el número 20
23. Apagar la calculadora (Off).

## Pseudocódigo

La **formalización de las acciones** se realiza a través de la estructura del algoritmo en pseudocódigo. El
pseudocódigo se considera una herramienta para el diseño que permite obtener una solución mediante
aproximaciones sucesivas. Se denomina notación de pseudocódigo a aquella que permite describir la
solución de un problema en forma de algoritmo dirigido al computador utilizando palabras y frases del
lenguaje natural sujetas a determinadas reglas.


{Suma el entero 5 y el entero 7 }
principal
```cpp
comienza
int a <- 5 //en la variable a se almacena el valor de 5
int b <-7 //en la variable b se almacena el valor de 7
int c <- a + b //en c se almacena la suma de a con b
termina 
```
## Diagramas De Flujo

También conocidos como flowchart, en estos se utilizan símbolos estándar, en el que cada paso para la
elaboración del programa se representa con el símbolo y orden adecuados, unidos o conectados por
flechas, también llamadas líneas de flujo, esto por que indican el sentido en el que se mueve el proceso. En
resumen el diagrama de flujo es un medio de presentación visual y gráfica del flujo de datos a través de un
algoritmo

![Bloques accion](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/Bloques_accion.jpg)

**Bloques de inicio y fin de programa:** Indican los límites del procedimiento
considerado como principal. Generalmente se trata de un programa completo o de
un módulo funcionalmente autónomo.

**Bloques de inicio y fin de procedimiento:** Indican los límites de un
procedimiento considerado como una parte dependiente de otro mayor. Delimitan
la explosión de un grupo de acciones que han sido consideradas como un
procedimiento en otra parte del diagrama. Generalmente se trata de una función
que hace una tarea específica. 

![Bloques decision](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/Bloques_decision.jpg)

**Bloque de acción simple:** Representa una acción sencilla que puede ser
considerada como única y que generalmente se codifica con una sola instrucción.
Por ejemplo: incrementar contador, ubicar cursor, abrir archivo, etc.

**Bloque de entrada/salida:** Representa una acción simple de entrada o salida de
datos, generalmente desde o hacia un dispositivo periférico como el teclado, la
pantalla o el disco. Por ejemplo: ingresar valor, leer registro, mostrar resultado, etc.

**Bloque de procedimiento:** Representa un conjunto de acciones que se
consideran juntas, sin analizar su detalle. Este grupo de acciones se describe
generalmente como procedimiento en otra parte del diagrama. Por ejemplo: buscar
elemento, ordenar conjunto, procesar dato, etc. 

![Bloques terminales](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/Bloques_terminales.jpg)

**Bloque de decisión simple:** Representa la acción de analizar el valor de verdad
de una condición, que sólo puede ser verdadera o falsa (selección simple).
Según el resultado de esta evaluación se sigue uno u otro curso de acción. Por lo
tanto, de un bloque de decisión simple siempre salen exactamente dos flujos, uno
por V (sí) y otro por F (no).

**Bloque de decisión múltiple:** Representa la acción de analizar el valor de una
variable, que puede tomar uno entre una serie de valores conocidos (selección
múltiple). Según el resultado de esta evaluación, se sigue uno entre varios cursos
de acción. Por lo tanto, de un bloque de decisión múltiple siempre salen varios
flujos, uno por cada valor esperado de la variable analizada. 

![Flujos conectores](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/Flujos_conectores.jpg)

**Flecha o flujo:** Indica la secuencia en que se van ejecutando las acciones al pasar
de un bloque a otro.

**Conector:** Indica la convergencia de dos o más flujos. En la práctica determina el
comienzo o el fin de una estructura.

# Codificación de la Información


![Codificacion Informacion](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/Codificacion_Informacion.jpg)

## Entrada Y Salida De Información - Códigos de entrada / salida

# Caracteres

**Letras Mayúsculas:** A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z

**Letras Minúsculas:** a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z

**Dígitos:** 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

**Símbolos de puntuación:** , ; . : ¿ ? ¡ ! ( ) [ ] { }

**Otros símbolos:** = + - / * > < # $ % & _ @

**Caracteres de control:** Se representan numéricamente según una tabla de correspondencia

**Ejemplos**

| Entrada/Salida de Caracter |
| ---      | ---       |
| Entrada  | Representación Interna del caracter        |Salida|
| Pulso tecla a   | 65|Se ve en pantalla: A|

[Tabla ASCII](https://github.com/eCanayUnsam/Labo-1/blob/main/Imagenes/tascii.pdf)

