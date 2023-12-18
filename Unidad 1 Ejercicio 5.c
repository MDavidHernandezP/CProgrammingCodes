#include <stdio.h>
#include <math.h>

int main (){
    int i, plan, alcohol, edad;
    float total;

    printf("Seleciona un plan de poliza, Plan A(1), Plan B(2): ");
    for( i=0; i <1; i++){
        scanf("%d", &plan);
        
        if(plan == 1){
            total = 1200;
        }
        else if(plan == 2){
            total = 950;
        }
        else{
            i--;
            printf("\nTe dije 1 y 2 solamente ");
        }
    }
    printf("\nUsted bebe?, Si(1), No(2) ");
    for( i=0; i <1; i++){
        scanf("%d", &alcohol);
        
        if(alcohol == 1){
            total = total*1.1;
        }
        else if(alcohol == 2){
        }
        else{
            i--;
            printf("\nTe dije 1 y 2 solamente ");
        }
    }
    printf("\nUsted es mayor de 50 años?, Si(1), No(2) ");
    for( i=0; i <1; i++){
        scanf("%d", &edad);
        
        if(edad == 1){
            total = total*1.08;
        }
        else if(edad == 2){
        }
        else{
            i--;
            printf("\nTe dije 1 y 2 solamente ");
        }
    }
    printf("\nEl costo de su poliza total es: %f", total);

}

//#include <stdio.h>

//int main(){
//    float total;
//    int alc, age, pol, sel;

//    for(int i=0; i<1; i++){
//        printf("Seleccione un estilo de poliza: ");
//        printf("\n1)Plan A $1200 \n2)Plan B $950 \nInserte su eleccion(1/2): ");
//        scanf("%d", &pol);

//        printf("\nBebe usted alcohol frecuentemente?\n1)si \n2)no \nseleccione: ");
//        scanf("%d", &alc);
//        printf("\nInserte su edad: ");
//        scanf("%d", &age);

//        if(pol==1){
//            total = 1200;
//        }
//        else if(pol==2){
//            total = 950;
//        }
//            else{
//                i--;
//                printf("\nTry again\n");
//            };
        
//        if(alc==1 && age > 50){
//            total = total*1.18;
//        }
//        else if(alc==1 && age <50){
//            total = total*1.1;
//        }
//            else if(alc==2 && age > 50){
//                total = total*1.08;
//            }
//                else if(alc==2 && age < 50){
//                    total = total;
//                }
//                else{
//                    i--;
//                    printf("\nVuelva a intentarlo valores incorrectos\n");
//                }
//        printf("El total de su poliza es: %.2f", total);

//        printf("\nDesea cotizar de nuevo?\n1)si \n2)no\nSeleccione:");
//        scanf("%d",&sel);

//        if(sel==1){
//            i--;
//        }
//        else if(sel!=2 && sel!=1){
//            printf("\nValores incorrectos vuelva a llenar el formulario");
//        }
//        else{
//            printf("Gracias");
//        }
//    }
//}