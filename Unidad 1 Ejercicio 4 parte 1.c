#include <stdio.h>
#include <math.h>
int main () {
    float N, M, i, menores = 0, mayores = 0, comprendidos = 0;
    
    printf("Escribe un valor para N: ");
    scanf("%f", &N);

    for( i=0; i<N; i++) {
        printf("\nEscribe un nuevo valor: ");
        scanf("%f", &M);

        if(M < 0) 
        {
            printf("\nNo son validos valores negativos");
            i--;
        }
        else if(M < 15) 
        {
            menores++;
        }
            else if(M > 50)
            {
                mayores++;
            }
                else if(M > 15 && M < 50)
                {
                    comprendidos++;
                }
    }

    printf("\nEl total de valores menores que 15 son: %f", menores);

    printf("\nEl total de valores mayores que 50 son: %f", mayores);
    
    printf("\nEl total de valores comprendidos de 15 a 50 son: %f", comprendidos);

    return 0;

}