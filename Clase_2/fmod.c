#include <stdio.h>
#include <math.h>
int main()
{
double x = -6.54321, y = 1.23456;
printf( "fmod( %f ) = %f\n", x, fmod(x,y) ); // Calcula el resto de coma flotante de la división de x/y.
return 0;
}
