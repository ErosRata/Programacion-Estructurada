/******************************************************************************

Desarrollar un programa en C que pida al usuario un numero entero positivo, al
cual ira sumando tres numeros desde 1 hasta 101 (ambos estan incluidos 1 y 101)
e imprima la suma. (n+1+4+7+10+...+101) hacer uso del while.

Eros Armanti Sierra Castillo 2154693

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int suma=0;
    int i=1;
    printf("Introduce un numero entero positivo: "); scanf("%d", &num);
    while (i<=101){
        suma+=i;
        i+=3;
    }
    printf("La suma total es: %d", num+suma+101);

    return 0;
}