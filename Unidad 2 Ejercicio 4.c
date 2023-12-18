#include <stdio.h>
#include <math.h>

#define PI 3.1416

float area(int num);
float perimetro(int num);

int main () {
    int radio, i = 0;
    float resultado1 = 0, resultado2 = 0;
    char denuevo[10];

    do{
        printf("\nInserte el valor del radio: ");
        scanf("%d", &radio);

        resultado1 = area(radio);
        printf("\nEl valor del area es: %f", resultado1);

        resultado2 = perimetro(radio);
        printf("\nEl valor del perimetro es: %f", resultado2);

        printf("\nQuiere sacar el area y perimetro de otro radio?: (Escribe y para si, escribe n para no)");
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

float area(int num){
    float area = PI * (num * num);
    return(area);
}
float perimetro(int num){
    float perimetro = PI * (num * 2);
    return(perimetro);
}