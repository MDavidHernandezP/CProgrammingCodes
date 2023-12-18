#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () {
    int i=0;
    char bucle[10];

    while ( i < 1){
        srand(time(NULL));
        int num_com = rand () %30+1;
        int num_usu;

        for(int i=0; i <4; i++){
            printf("\nEscribe un numero del 1 al 30: ");
            scanf("%d", &num_usu);

            if (num_usu == num_com){
                printf("\nLe atinaste, %d Es igual que, %d", num_usu, num_com);
                i = 4;
            }
            else if (num_usu > num_com){
                printf("\nVuelve a intentarlo, tu numero anterior fue mas alto");
            }
            else{
                printf("\nVuelve a intentarlo, tu numero anterior fue mas bajo");
            }
        }
        printf("\nEl numero de la computadora fue: %d", num_com);

        printf("\nQuieres volver a jugar?: Si(s) y No(n)");
        scanf("%s", &bucle);
        if(strcmp(bucle, "n") == 0){
            i = 1;
            printf("\nGracias por jugar");
        }
        else{
            printf("\nOk, juguemos de nuevo");
        }
    }

    return 0;
}