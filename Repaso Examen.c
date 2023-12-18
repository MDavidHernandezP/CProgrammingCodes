#include <stdio.h>
#include <math.h>

float forward(float tc, float til, float tie, float n);

int main(){
    int opcion;
    float tc, til, tie, n, result;

    printf("\nEscribe el valor del cambio actual: ");
    scanf("%f", &tc);
    printf("\nEscribe el valor de la tasa de interes actual: ");
    scanf("%f", &til);
    printf("\nEscribe el valor de la tasa de interes extranjera: ");
    scanf("%f", &tie);
    printf("\nEscribe el numero de dias a futuro: ");
    scanf("%f", &n);
    
    do{
        result = forward(tc, til, tie, n);
        printf("\nEl tipo de cambio en el futuro es: %f", result);

        printf("\nQue quieres hacer ahora? Elige una");
        printf("\nEscribe 1 si quieres cambiar la tasa de interes(local). ");
        printf("\nEscribe 2 si quieres cambiar la tasa de interes(extranjera). ");
        printf("\nEscribe 3 si quieres cambiar el tipo de cambio actual. ");
        printf("\nEscribe 4 si quieres cambiar el numero de dias a futuro. ");
        printf("\nEscribe 5 si quieres terminar el programa. ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                printf("\nSelecciono cambiar tasa de interes(local), escriba nuevo valor. ");
                scanf("%f", &til);
                break;
            case 2:
                printf("\nSelecciono cambiar tasa de interes(extranjera), escriba nuevo valor. ");
                scanf("%f", &tie);
                break;
            case 3:
                printf("\nSelecciono cambiar cambio actual, escriba nuevo valor. ");
                scanf("%f", &tc);
                break;
            case 4:
                printf("\nSelecciono cambiar numero de dias a futuro, escriba nuevo valor. ");
                scanf("%f", &n);
                break;
            case 5:
                printf("\nSelecciono terminar el programa, pon tu cabeza entre tus piernas y besa tu trasero adios. ");
        }
    } while (opcion != 5);
    return 0;
}
float forward(float tc, float til, float tie, float n){
    float forward = tc *(pow((1 + til)/(1 + tie),(n/365)));
    return(forward);
}