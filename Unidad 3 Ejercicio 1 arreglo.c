#include <stdio.h>

float promediosemanal(float temperaturas[], int dias);
float superiorf(float temperaturas[], int promedio);
float inferiorf(float temperaturas[], int promedio);

int main () {
    int dias = 7, superior = 0, inferior = 0, j = 0;
    float temperaturas[7], promedio;
    char denuevo[10];

    do{
        printf("\nEscribe la temperatura de cada dia de la semana en grados");

        for (int i=0; i<7; i++){
            printf("\nDia %d: ", i+1);
            scanf("%f", &temperaturas[i]);
        }

        promedio = promediosemanal(temperaturas, dias);
        printf("\nEl promedio de temperaturas fue de: %f", promedio);

        superior = superiorf(temperaturas, promedio);
        printf("\nLos dias superiores al promedio fueron: %d", superior);

        inferior = inferiorf(temperaturas, promedio);
        printf("\nLos dias inferiores o iguales al promedio fueron: %d", inferior);

        printf("\nDesea revisar su IMC y estado de salud denuevo?: (Escribe y para si, escribe n para no)");
        scanf("%s", &denuevo);
        if(strcmp(denuevo, "n") == 0){
            j = 1;
            printf("\nMuy bien, adios *muere*");
        }
        else{
            printf("\nHagamoslo denuevo");
        }
    } while(j < 1);
        
    return 0;
}

float promediosemanal(float temperaturas[], int dias){
    float suma = 0;
    for (int i=0; i < dias; i++){
        suma = suma + temperaturas[i];
    }
    return suma / dias;
}

float superiorf(float temperaturas[], int promedio){
    int total = 0;
    for(int i=0; i <7; i++){
        if(temperaturas[i] > promedio){
        total = total + 1;
        }
    }
    return(total);
}

float inferiorf(float temperaturas[], int promedio){
    int total = 0;
    for(int i=0; i <7; i++){
        if(temperaturas[i] <= promedio){
        total = total + 1;
        }
    }
    return(total);
}