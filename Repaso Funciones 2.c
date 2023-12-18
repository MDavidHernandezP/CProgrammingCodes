#include <stdio.h>
#include <math.h>

int function(int num1);

int main () {
    int i, y;

    printf("\nx y");

    for( i=0; i < 11; i++){
        y = function(i);
        printf("\n%d %d", i, y);
    }
}

int function(int num1){
    int y = (num1*num1)-(10*num1)+24;
    return(y);
}