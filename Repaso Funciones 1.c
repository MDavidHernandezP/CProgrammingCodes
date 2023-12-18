//Programa que solicite al usuario las calificaciones obtenidas por un alumno en tres de sus
//asignaturas y posteriormente imprima el promedio.

#include <stdio.h>
#include <math.h>

float promedio (float num1, float num2, float num3);
void reprobado(float num1, char *mensaje);

int main () {
    int i = 0;
    float cal1, cal2, cal3, resultado;
    char denuevo[10], mensaje[100];

    do {
        printf("\nEscribe tus calificaciones: ");
        scanf("%f", &cal1);
        scanf("%f", &cal2);
        scanf("%f", &cal3);

        printf("\nEl promedio de las califiaciones es: ");
        resultado = promedio(cal1,cal2,cal3);
        printf("%f", resultado);

        reprobado(resultado, mensaje);
        printf("%s\n", mensaje);

        printf("\nDesea revisar su IMC y estado de salud denuevo?: (Escribe y para si, escribe n para no)");
        scanf("%s", &denuevo);
        if(strcmp(denuevo, "n") == 0){
            i = 1;
            printf("\nMuy bien, adios *muere*");
        }
        else{
            printf("\nHagamoslo denuevo");
        }
    } while(i < 1);

    return 0;
}

float promedio (float num1, float num2, float num3){
    float promedio = (num1 + num2 + num3)/3;
    return(promedio);
}

void reprobado(float num1, char *mensaje){
    if (num1 <= 5){
        strcpy(mensaje, "\nReprobaste crack");
    } else {
        strcpy(mensaje, "\nAprobaste Maquina");
    }
}