/*
Desarrollar un programa en C que calcule el área de un trapecio, dada la base mayor es igual a 41.5, la base menor
igual a 11 y la altura igual a 8. (Hacer uso de apuntadores para calcular el área del trapecio).

Eros Armanti Sierra Castillo 2154693
*/
#include <stdio.h>

int main(){
    float baseMayor=41.5, baseMenor=11, altura=8;
    float *p1, *p2, *p3;

    p1=&baseMayor;
    p2=&baseMenor;
    p3=&altura;

    float area;
    area=(*p1+*p2)*(*p3)/2;

    printf("El area del trapecio es: %f", area);

    return 0;
}
