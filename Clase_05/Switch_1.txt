/*La sentencia switch es una instrucción que controla múltiples selecciones y enumeraciones pasando el control
a una (y solo una) de las instrucciones case de su cuerpo. Se utiliza cuando el algoritmo se divide en
‚ramas‛ a partir del valor de cierta expresión. En el ejemplo siguiente se define un menú de opciones, cada
ítem de menú pide un número entero que quedará guardado en la variable x. Ese valor se compara con el valor
de cada caso, cuando encuentra coincidencia, se ejecutan las instrucciones que pertenecen a ese caso y se
sale del switch.*/

#include <stdio.h>
#include <math.h>

int main() {
    int x;
    double num;

    printf("\n(1) EL TRIPLE");
    printf("\n(2) EL CUADRADO");
    printf("\n(3) LOGARITMO NATURAL");
    printf("\n(4) LOGARITMO DECIMAL");
    printf("\n(5) SENO");
    printf("\n(6) COSENO");
    printf("\n\n Escribe el numero de la opción que desees: ");

    scanf("%d",&x);

    switch(x){
        case 1:
            printf("\n\nEscribe el numero: ");
            scanf("%lf",&num);
            printf("\nEl triple de %lf es %lf",num,3*num);
            break;
        case 2:
            printf("\n\nEscribe el numero: ");
            scanf("%lf",&num);
            printf("\nEl cuadrado de %lf es %lf",num,num*num);
            break;
        case 3:
            printf("\n\nEscribe el numero: ");
            scanf("%lf",&num);
            printf("\nEl logaritmo neperiano de %lf es %lf",num,log(num));
            break;
        case 4:
            printf("\n\nEscribe el numero: ");
            scanf("%lf",&num);
            printf("\nEl logaritmo decimal de %lf es %lf",num,log10(num));
            break;
        case 5:
            printf("\n\nEscribe el numero: ");
            scanf("%lf",&num);
            printf("\nEl seno de %lf es %lf",num,sin(num));
            break;
        case 6:
            printf("\n\nEscribe el numero: ");
            scanf("%lf",&num);
            printf("\nEl coseno de %lf es %lf",num,cos(num));
            break;
        default:printf("\n\nEsto no es ninguna opción ");
            break;
        }
}
