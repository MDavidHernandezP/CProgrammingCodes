#include <stdio.h>
#include <math.h>
int main () {
    float promedio = 0;
    int i = 0, estatura, total = 0, mayores = 0;

    for( i=0; i<5; i++) {
        printf("\nEscribe la estatura de un alumno: ");
        scanf("%d", &estatura);

        if(estatura < 110){
            printf("\nEse valor no chambea");
            i--;
        }
        else if(estatura > 220){
            printf("\nEse valor no chambea");
            i--;
        }
        if(estatura > 110 && estatura < 220){
            printf("\nEse valor si chambea");
            total += estatura;
        }
        else if(estatura > 170){
            printf("\nEse alumno mide mas de 1.70");
            mayores ++;
        }
    }
    promedio = total/5;

    printf("\nEl promedio de estaturas es: %f", promedio);
    printf("\nLa cantidad de alumnos que miden mas de 1.70 es: %d", mayores);

    return 0;
}