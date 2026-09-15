/*
Desarrollar un programa en C, en cual dado un número por el usuario calcule el cubo de este número
(hacer uso de funciones para calcular el cubo del número).

Eros Armanti Sierra Castillo 2154693
*/

#include <stdio.h>

float cubo(float x){
    return x*x*x;
}

int main(){
    float num;
    printf("Ingresa un numero para calcular su cubo: "); scanf("%f", &num);
    printf("\nEl resultado es: %f", cubo(num));

return 0;
}
