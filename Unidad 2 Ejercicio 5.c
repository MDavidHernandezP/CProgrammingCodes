#include <stdio.h>
#include <math.h>

float imc(float num1, float num2);

void resultado(float r1, char *mensaje);

int main (){
    int i = 0;
    float estatura, peso, resultado1;
    char denuevo[10], mensaje[100];

    do {
        printf("\nIngresa tu peso: ");
        scanf("%f", &peso);

        printf("\nIngresa tu estatura: ");
        scanf("%f", &estatura);

        resultado1 = imc(estatura, peso);
        printf("\nEl IMC es igual: %f", resultado1);

        resultado(resultado1, mensaje);
        printf("%s\n", mensaje);
        
        printf("\nDesea repetir el programa?: (Escribe y para si, escribe n para no)");
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

float imc(float num1, float num2){
    float imc = num1 / (num2 * num2);
    return(imc);
}
void resultado(float r1, char *mensaje) {
    if (r1 < 18) {
        strcpy(mensaje, "\nPeso bajo.");
    } else if (r1 < 25) {
        strcpy(mensaje, "\nNormal.");
    } else if (r1 < 27) {
        strcpy(mensaje, "\nSobrepeso.");
    } else if (r1 < 30) {
        strcpy(mensaje, "\nObesidad fase 1.");
    } else if (r1 < 40) {
        strcpy(mensaje, "\nObesidad fase 2.");
    } else {
        strcpy(mensaje, "\nObesidad fase 3.");
    }
}