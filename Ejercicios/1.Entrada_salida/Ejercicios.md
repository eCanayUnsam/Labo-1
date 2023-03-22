
## Ejercicio 1.
Indicar cuál es la salida por pantalla para cada sentencia printf. siendo:

int a = 5;
float b = 13.546;
char c = ’A’;
char d = ’a’;
int e = 5>1;

- printf(“a vale%d”, a);
- printf(“avale%o”,a);
- printf(“avale%x”,a);
-  printf(“a vale%f”, a);
- printf(“a vale%c”, a);
- printf(“bvale%d”,b);
- printf (“b vale%5.2d”,b);
-  printf(“bvale%f”, b);
-  printf (“b vale %.1f”,b;
- printf(“bvale%.2f”,b);
- printf(“bvale%6.4f”,b)
- printf(“bvale%6.1f”,b);
-  printf(“bvale%c”, b);
- printf(“bvale%o”,b);
- printf(“bvale%x”,b);
- printf(“cvale%d”, c);
-  printf(“cvale%f”,c);
-  printf(“cvale%c”,c);
-  printf(“cvale%o”, c);
-  printf(“cvale%x”, c);
-  printf (“d vale %d”, d);
-  printf(“dvale%f”, d);
-  printf(“dvale%c”, d);
-  printf(“dvale%o”,d);
-  printf(“dvale%x”, d);
-  printf(“evale%d”,e);
-  printf(“evale%f”,e);
- printf(“evale%c”, e);
-  printf(“evale%o”,e);
- printf(“evale%x”, e);

## Ejercicio 2. 
Indicar qué queda almacenado en la variable con la que se ingresan datos en cada caso, si se han
definido las variables de la siguiente forma:

int a;
float b;
char c;

- scanf (“%d”, &a);
- scanf (“%f”, &a);
- scanf (“%c”, &a);
- scanf (“%d”, &b);
- scanf (“%f”, &b);
- scanf (“%c”, &b);
- scanf (“%d”, &c);
- scanf (“%f”, &c);
- scanf (“%f”, &c);

## Ejercicio 3. 

Indicar qué es lo que se almacena en cada una de las variables indicadas a continuación, si se realizan las
operaciones que se indican, sabiendo que se han definido las variables usadas de la siguiente forma:

int a = 3, b = 2, c = 1, d, e;
float m = 2.5, n = 5.4, r, s;

- d = m;
- d = n;
- e = 3.7;
- d = a;
- d = a + b;
- d = a * b;
- d = a / b;
- d = b / 4;
- d = a % b;
-  d = a % 2;
- e = b / c;
- e = c / b;
- r = a + b;
- r = a / b;
- r = a / 2;
- r = a /2.0;
- s = m + n;
- s = 3 + 4 - 1;
-  s = 3.0 + 4.0 -1;
-  a = m;
-  a = m / 2;
-  a = m / 2.0;
-  a = 3.0 + 4.0 -1;
-  r = a + 1;
-  r = a + 1.0;
- a++;
- r++;
- b--;
- a+=5;
- s*=5;


## Ejercicio 4. 

Indicar qué valor se almacena en cada variable de la izquierda de cada asignación, siendo:

int a, b, c, d = 0;
int e = 1; //0 (cero) corresponde a falso
int x = 2, y = 3;

- a = 5 > 3;
- b = ( ( 4 < 5 ) && ( 2 > 2 ) );
- a = ! e;
- b = ( ( x % 2 == 0 ) || ( x – y < 10 ) );
- c = ( d && e );
- c = ( d || e );
- c = ! ( d && e );
- c = ( ! d ) && ( ! e );
- c = ( a && ( ! a ) );
- c = ( ( ( x <= ( y * 3.2 ) ) && ( y % 2 != 0 ) ) || ( 1 ) );

## Ejercicio 5. 

Supongamos que tenemos estas variables:
int a = 10; float b = 19.3; double d = 64.8; char c = 64;
Indica el tipo resultante para las expresiones siguientes:

a) a+b
- [ ] char
- [ ] int
- [ ] float
- [ ] double

b) c+d
- [ ] char
- [ ] int
- [ ] float
- [ ] double

c) (int)d+a
- [ ] char
- [ ] int
- [ ] float
- [ ] double

d) d+b
- [ ] char
- [ ] int
- [ ] float
- [ ] double

e) (float)c+d
- [ ] char
- [ ] int
- [ ] float
- [ ] double

## Ejercicio 6
Qué muestra el siguiente programa:
```cpp
int main() {
 char c; short s; int i; long l; float f; double d; long double ld;
printf("\nLARGOS DE TIPOS ESCALARES PREDEFINIDOS\n");
printf("El largo de char es %d\n", sizeof(c));
printf("El largo de short es %d\n", sizeof(s));
printf("El largo de int es %d\n", sizeof(i));
printf("El largo de long es %d\n", sizeof(l));
printf("El largo de float es %d\n", sizeof(f));
printf("El largo de double es %d\n", sizeof(d));
printf("El largo de long double es %d\n", sizeof(ld));
getchar();
return 0; }
```
