/*
Desarrollar un programa en C, en el cual dado un vector [5] con los valores definidos vector [0]=1 vector [1]=2
vector [2]=3 vector [3]=4 y vector [4]=5, creara dos apuntadores los cuales apunten en a las posiciones del vector,
vector [0] y vector [2], el primer apuntador avanzara tres veces y cada vez que avance mostrara el valor que se
encuentra en el vector y el segundo apuntador retrocederá dos veces y cada vez que retroceda mostrara el valor que
se encuentra en el vector.

Eros Armanti Sierra Castillo 2154693
*/

#include <stdio.h>

int main(){
    int vector[5]={1,2,3,4,5};

    int *vector1;
    int *vector2;

    vector1=&vector[0];
    vector2=&vector[2];

    printf("Primer apuntador:");
    for(int i=0;i<3;i++){
        vector1++;
        printf("%d, ", *vector1);
    }

    printf("\n");
    printf("Segundo apuntador:");
    for(int i=0;i<2;i++){
        vector2--;
        printf("%d, ", *vector2);
    }

    return 0;
}
