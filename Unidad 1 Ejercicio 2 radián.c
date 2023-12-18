#include <stdio.h>
#include <math.h>

int main() {
    float Grados, Radianes, Pi;

    Pi = 3.1416;

    printf("Ingresa un valor en grados: ");
    scanf("%f", &Grados);

    if (Grados <= 360) {
        printf("\nBueno va, si es un angulo: %f", Grados);
        Radianes = Grados * Pi / 180;

        printf("\nEl valor de los grados en radianes es: %f", Radianes);
    } else {
        printf("\nEse numero no es un angulo: %f", Grados);
    }

    

    if (Grados == 360) 
    {
        printf("\nTus grados forman un angulo completo");
    } 
    else if (180 < Grados && Grados < 360) 
        { 
            printf("\nTus grados forman un angulo concavo");
        } 
        else if (Grados == 180)
        {
            printf("\nTus grados forman un angulos llano");
        }
            else if (90 < Grados && Grados < 180)
            {
                printf("\nTus grados forman un angulo obtuso");
            }
                else if (Grados == 90)
                {
                    printf("\nTus grados forman un angulo recto");
                    }
                    else if (0 < Grados && Grados < 90)
                    {
                        printf("\nTus grados forman un angulo agudo");
                    }
                        else if (Grados == 0)
                        {
                            printf("\nTus grados forman un angulo nulo");
                        }
return 0;
}