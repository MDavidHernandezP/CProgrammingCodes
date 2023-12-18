#include <stdio.h>
#include <math.h>

int main () {
    int numero;
    float resultado = 0;
    for( int i=0; i<3; i++){
        printf("\nEscribe un valor: ");
        scanf("%d", &numero);
        resultado = resultado + numero;
    }
    printf("\nEl promedio es: %f", resultado / 3);
    return 0;
}