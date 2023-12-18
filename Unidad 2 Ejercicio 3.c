#include <stdio.h>
#include <math.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
float square(float a, float b);

int main(){
    int i = 0, opcion;
    float val1, val2, resultado = 0;
    char denuevo[10];

    do{
        printf("\nEscribe un valor: ");
        scanf("%f", &val1);

        printf("\nEscribe un segundo valor: ");
        scanf("%f", &val2);

        printf("\nEscribe 0,1,2,3,4 para sumar, restar, multiplicar, dividir o elevar al cuadrado respectivamente: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 0:
                printf("\nUsted escoge sumar");
                resultado = suma(val1, val2);
                printf("\nEl resultado fue: %f", resultado);
                break;
            case 1:
                printf("\nUsted escoge restar");
                resultado = resta(val1, val2);
                printf("\nEl resultado fue: %f", resultado);
                break;
            case 2:
                printf("\nUsted escoge multiplicar");
                resultado = multiplicacion(val1, val2);
                printf("\nEl resultado fue: %f", resultado);
                break;
            case 3:
                printf("\nUsted escoge dividir");
                resultado = division(val1, val2);
                printf("\nEl resultado fue: %f", resultado);
                break;
            case 4:
                printf("\nUsted escoge elevar al cuadrado");
                resultado = square(val1, val2);
                printf("\nEl resultado fue: %f", resultado);
                break;
        }
        printf("\nQuiere hacer otra operacion?:(Escribe y para si, escribe n para no)");
        scanf("%s", &denuevo);
        if(strcmp(denuevo, "n") == 0){
            i = 1;
            printf("\nAdios *muere*");
        }
        else{
            printf("\nHagamos otra operacion");
        }
    } while(i < 1);
    return 0;
}
float suma(float a, float b){
    float c = a + b;
    return(c);
}
float resta(float a, float b){
    float c = a - b;
    return(c);
}
float multiplicacion(float a, float b){
    float c = a * b;
    return(c);
}
float division(float a, float b){
    float c = a / b;
    return(c);
}
float square(float a, float b){
    float c = pow(a,b);
    return(c);
}
