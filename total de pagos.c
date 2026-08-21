#include <stdio.h>
int main()
{
    float total, pago;
    total=0;
    
    printf("Ingrese el 1er pago: "); scanf("%f", &pago);
    while (pago!=0){
        total=total+pago;
        printf("Ingrese el siguiente pago: "); scanf("%f", &pago);
    }
    printf("El pago total es de: %f", total);
    
    return 0;
}
