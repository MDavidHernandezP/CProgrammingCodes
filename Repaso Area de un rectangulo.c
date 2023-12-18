#include <stdio.h>
#include <math.h>

int main () {
    float area, base, altura;
    printf("\nEscriba la base del rectangulo: ");
    scanf("%f", &base);

    printf("\nEscribe la altura del rectangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("%f", area);

    return 0;
}