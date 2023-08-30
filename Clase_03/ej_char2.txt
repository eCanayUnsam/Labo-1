#include<stdio.h>

int main()
{
   int i,j;
   printf("Sabemos los caracteres del 0 al 127, comparamos que sucede desde al -128 al -1 y del 128 al 255 \n\n",162);
   for(i=-1, j=255; i<0, j>=128  ; i--, j--){
            printf("caracter: %d -> %c | caracter: %d -> %c |\n",i,i,j,j);
            printf("--------------------------------------- \n");
         }
    getchar();
    return 0;
}
