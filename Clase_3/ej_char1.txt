#include<stdio.h>

int main()
{
    char letra1= 65;
    char letra2='A';
    char letra3;
    char letra4= -65;
    int letra5 = 65;
    printf("Ingrese un caracter:\n");
    scanf(" %c",&letra3);
    fflush(stdin);
    printf("letra1: %c",letra1);
    printf("\n");
    printf("letra2: %c",letra2);
    printf("\n");
    printf("letra3: %c",letra3);
    printf("\n");
    printf("letra4: %c",letra4);
    printf("\n");
    printf("letra5: %d -> %c",letra5, letra5);
    printf("\n");
    getchar();

    return 0;
}

