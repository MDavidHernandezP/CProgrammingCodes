#include <stdio.h>
#include <math.h>

int main () {
    int calificacion;

    printf("\nEscribe tu calificacion: ");
    scanf("%d", &calificacion);

    if (calificacion <= 6) {
        printf("\nReprobaste");
    }
    else {
        printf("\nAprobaste");
    }

    return 0;
}