
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
    printf("\n\n Escribe el numero de la opcion que desees: ");

    scanf("%d",&x);

    if(x==1){
        printf("\n\nEscribe el numero: ");
        scanf("%lf",&num);
        printf("\nEl triple de %lf es %lf",num,3*num);
    }else{
        if(x==2){
            printf("\n\nEscribe el numero: ");
            scanf("%lf",&num);
            printf("\nEl cuadrado de %lf es %lf",num,num*num);
        }else{
            if(x==3){
                printf("\n\nEscribe el numero: ");
                scanf("%lf",&num);
                printf("\nEl logaritmo neperiano de %lf es %lf",num,log(num));
            }else{
                if(x==4){
                    printf("\n\nEscribe el numero: ");
                    scanf("%lf",&num);
                    printf("\nEl logaritmo decimal de %lf es %lf",num,log10(num));
                }else{
                     if(x==5){
                        printf("\n\nEscribe el numero: ");
                        scanf("%lf",&num);
                        printf("\nEl seno de %lf es %lf",num,sin(num));
                    }else{
                        if(x==6){
                            printf("\n\nEscribe el numero: ");
                            scanf("%lf",&num);
                            printf("\nEl coseno de %lf es %lf",num,cos(num));
                        }else{
                            printf("\n\nEsto no es ninguna opción ");
                        }
                    }
                }
            }
        }
    }
}
