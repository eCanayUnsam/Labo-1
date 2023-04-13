/*Ejercicio: Visualizar la tarifa de la luz según el gasto de corriente eléctrica.
Para un gasto menor de 1.000kwxh la tarifa es 1.2, entre 1.000 y
1.850Kwxh es 1.0 y mayor de 1.850Kwxh 0.9.*/

#include <stdio.h>
#include <stdlib.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
float gasto, tasa;

printf("\nGasto corriente:\n ");
scanf("%f",&gasto);

if (gasto < 1000.0)
    tasa=TARIFA1;

if ((gasto >= 1000.0) && (gasto <=1850.0))
    tasa=TARIFA2;

if (gasto > 1850.0)
    tasa=TARIFA3;
printf("\nTasa que le corresponde a %.2f Kwxh es de %.2f\n", gasto, tasa);
getchar();
return 0;
}
