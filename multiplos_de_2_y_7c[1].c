/******************************************************************************

Desarrollar un programa en C que calcule la suma de todos los numeros que sean
multiplos de 2 y multiplos de 7 hasta el 1000 e imprima el resultado. Hacer uso
del ciclo for.

Eros Armanti Sierra Castillo 2154693

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, num2, num7;
    int suma=0;
    for(i=0; i<=1000; i++) {
        num2=i%2;
        num7=i%7;
        if(num2==0 && num7==0) {
            suma+=i;
        }
    }
    printf("La suma de los numeros multiplos de 2 y 7 es: %d", suma);

    return 0;
}