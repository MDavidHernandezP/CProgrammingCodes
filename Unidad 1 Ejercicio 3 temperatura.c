#include <stdio.h>
#include <math.h>

int main () {
    float temperatura;

    printf("Ingresa la temperatura actual en grados Farenheit: ");
    scanf("%f", &temperatura);

    temperatura = (temperatura - 32) / 1.8;

    printf("\nLa temperatura en celcius es: %f", temperatura);

    if (temperatura >= 20 && temperatura <= 25) 
    {
        printf("\nEs una temperatura ideal");
    }
    else if (temperatura > 25 && temperatura <= 32) 
        {
            printf("\nEs una temperatura Peligrosa");
        }  
        else if (temperatura < 32)
        {
            printf("\nTemperatura Contraindicada");
        }
            else if (temperatura < 20)
            {
                printf("\nTemperatura no clasificada");
            }
return 0;
}