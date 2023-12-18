#include <stdio.h>
#include <math.h>

float distance(float x, float y, float x2, float y2);

int main(){
    float x, y, x2, y2, D;

    printf("\nEscribe los valores de las primeras coordenadas x, y: ");
    scanf("%f %f", &x, &y);

    printf("\nEscribe los valores de las segundas coordenadas x, y: ");
    scanf("%f %f", &x2, &y2);

    D = distance(x, y, x2, y2);
    printf("\nLa distancia entre ambos puntos es: ");
    printf("\n%f", D);
}

float distance(float x, float y, float x2, float y2){
    float distance = sqrt(pow(x - x2,2) + pow(y - y2,2));
    return(distance);
}
