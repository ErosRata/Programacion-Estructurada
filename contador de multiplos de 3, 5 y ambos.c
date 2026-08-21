#include <stdio.h>
int main()
{
    int i, num, num3, num5, num35, c35, c3, c5;
    c35=c3=c5=0;
    i=1;
    for(i;i<=10;i++){
        printf("Ingresa un numero: "); scanf("%d",&num);
        num3=num%3;
        num5=num%5;
        if(num3==0 && num5==0){c35=c35+1;}
        else if(num3==0){c3=c3+1;}
        else if(num5==0){c5=c5+1;}
    }
    printf("Cantidad de numeros que son multiplos de 3: %d, cantidad de numeros que son multiplos de 5: %d, cantidad de numeros que son multiplos de 3 y 5: %d",c3,c5,c35);
    
    return 0;
}
