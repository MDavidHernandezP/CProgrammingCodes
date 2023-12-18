#include <stdio.h>
#include <math.h> 
 
int main() { 
  float dato1,dato2,dato3,dato4,raiz,cuadrado1,cuadrado2; 
  
    printf("Ingresa el dato : ");
    scanf("%f", &dato1);

    printf("Ingresa el dato : ");
    scanf("%f", &dato2);

    printf("Ingresa el dato : ");
    scanf("%f", &dato3);

    printf("Ingresa el dato : ");
    scanf("%f", &dato4);

    cuadrado1 = pow(dato1 - dato2,2);

    cuadrado2 = pow(dato3 - dato4,2);

    raiz = sqrt(cuadrado1 + cuadrado2);

    printf("La raiz cuadrada es : %f", raiz);

    printf("\nEl numero al cuadrado es : %f", cuadrado1);

    printf("\nEl numero al cuadrado es : %f", cuadrado2); 
  
  return 0; 
} 