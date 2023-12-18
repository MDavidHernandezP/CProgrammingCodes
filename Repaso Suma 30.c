#include <stdio.h>
#include <math.h>

int main (){
    int numero, suma = 0;

    while(suma <= 30) {
        printf("\nEscribe un valor: ");
        scanf("%d", &numero);

        suma = suma + numero;
    }

    printf("La suma supero los 30 y es: %d", suma);

}