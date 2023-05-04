

/* Operaciones A Nivel De Bits, (Bitwise):
El lenguaje c proporciona la posibilidad de manipular los bits de
un byte, realizando operaciones lógicas y de
desplazamiento. Operadores a nivel de bits:
OPERADOR & | ^ ~ << >>
ACCIÓN
And entre bits
Or entre bits
Xor entre bits, (or exclusivo).
Not , (si es 1 pasa a ser 0 y viceversa)
Desplazamiento a izquierda
Desplazamiento a derecha
var << n = se desplaza n bits a la izquierda.
var >> n = se desplaza n bits a la derecha.
1 & 1 = 1
1 | 0 = 1, 0 | 1 = 1 y 1 | 1 = 1
1 ^ 0 = 1 y 0 ^ 1 = 1
~1 = 0 y ~0 = 1
De forma general conviene tener siempre presente estos resultados
X & 1 = X ,
X & 0 = 0
X | 1 = 1 ,
X | 0 = X
X ^ 1 = ~X ,
X ^ 0 = X
Analiza el ejemplo de operaciones bit a bit:
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
int n1 = 29; /*29 decimal es |0|0|0|1|1|1|0|1 en un byte*/
int desp1, desp2, desp3, n1and, n1not, n1or, n2=18; /*|0|0|0|1|0|0|1|0*/
int n1xor;

printf("\t\t****** OPERACIONES A NIVEL DE BITS ******\n");
/************ DESPLAZAMIENTOS BIT A BIT*/
desp1 = n1 << 3; /*desplazo tres bits a la izquierda
//obtengo entonces |1|1|1|0|1|0|0|0 (232 decimal)*/
printf("n1 = %d y desp1 = %d\n", n1, desp1);

desp2 = n1 >> 3; /*desplazo tres bits a la derecha
//obtengo |0|0|0|0|0|0|1|1 (3 decimal)*/
printf("n1 = %d y desp2 = %d\n", n1, desp2);
desp3 = n1 >> 2; /*desplazo 2 bits a la derecha
//obtengo |0|0|0|0|0|1|1|1 (7 decimal)*/
printf("n1 = %d y desp3 = %d\n", n1, desp3);
/************ OPERACION AND*/
n1and = n1 & n2;
/*  |0|0|0|1|1|1|0|1 (29 decimal)
//& |0|0|0|1|0|0|1|0 (18 decimal)
//= |0|0|0|1|0|0|0|0 (16 decimal) */
printf("n1 = %d y n2 = %d ==> n1and  = n1 & n2 es %d\n", n1, n2, n1and);
/*********** OPERACION OR*/
n1or = n1 | n2;
/*  |0|0|0|1|1|1|0|1 (29 decimal)
//| |0|0|0|1|0|0|1|0 (18 decimal)
//= |0|0|0|1|1|1|1|1 (31 decimal)*/
printf("n1 = %d y n2 = %d ==> n1and = n1 | n2 es %d\n", n1, n2, n1or);
/********** OPERACION XOR*/
n1xor = n1 ^ n2;
/*  |0|0|0|1|1|1|0|1 (29 decimal)
//^ |0|0|0|1|0|0|1|0 (18 decimal)
//= |0|0|0|0|1|1|1|1 (15 decimal)*/
printf("n1 = %d y n2 = %d ==> n1and = n1 ^ n2 es %d\n", n1, n2, n1xor);
/********** OPERACION NOT
Ojo que ~ (not) me cambia el bit de paridad lo que implica que cambia el
signo, en este ejemplo me muestra -30 si pongo %d pero en realidad se
trata del 226 cuyo caracter corresponde a -> Ã¢*/
n1not = ~n1;
/*~|0|0|0|1|1|1|0|1 (29 decimal)
//=|1|1|1|0|0|0|1|0 (226 decimal)*/
printf("n1 = %d y ~n1 = n1not ==> %d\n", n1, n1not);
system("pause");
}
