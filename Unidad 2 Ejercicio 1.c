#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int i=0, computadora = 0;
    char election[10], denuevo[10];

    do{
        srand(time(0));
        computadora = rand() % 3;

        printf("Piedra, Papel o Tijeras... \n");
        scanf("%s", &election);

        switch (computadora)
        {
        case 0://0 piedra
            if(strcmp(election, "piedra") == 0){
                printf("la computadora escoge piedra, Empataste \n");
            }
            else if(strcmp(election, "papel") == 0){
                printf("la computadora escoge piedra, Ganaste \n");
            }
            else if(strcmp(election, "tijeras") == 0){
                printf("la computadora escoge piedra, Perdste \n");
            }
            break;
        case 1: //1 tijeras
            if(strcmp(election, "tijeras") == 0){
                printf("la computadora escoge tijeras, Empataste \n");
            }
            else if(strcmp(election, "piedra") == 0){
                printf("la computadora escoge tijeras, Ganaste \n");
            }
            else if(strcmp(election, "papel") == 0){
                printf("la computadora escoge tijeras, Perdiste \n");
            }
            break;
        case 2: //2 papel
            if(strcmp(election, "papel") == 0){
                printf("la computadora escoge papel, Empataste \n");
            }
            else if(strcmp(election, "tijeras") == 0){
                printf("la computadora escoge papel, Ganaste \n");
            }
            else if(strcmp(election, "piedra") == 0){
                printf("la computadora escoge papel, Perdiste \n");
            }
            break;
        }
        printf("Quiere volver a jugar?:(Escribe y para si, escribe n para no) \n");
        scanf("%s", &denuevo);
        if(strcmp(denuevo, "n") == 0){
            i = 1;
            printf("\nGracias por jugar \n");
        }
        else{
            printf("\nVamos a volver a jugar \n");
        }
    } while( i < 1);

    return 0;
}