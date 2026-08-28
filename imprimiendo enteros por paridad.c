#include <stdio.h>

int main()
{
    int tam, i;
    printf("Introduce el tamano de tu arreglo: "); scanf("%d", &tam);
    int num[tam];
    for(i=0; i<tam; i++){
        printf("Introduce un numero: "); scanf("%d", &num[i]);
    }
    
    int p, divi;
    printf("Introduce 0 (par) o 1 (impar): "); scanf("%d", &p);
    if(p==0){
        for(i=0; i<tam; i++){
            divi=num[i]%2;
            if(divi==0){
                printf("%d, ", num[i]);
            }
        }
    }
    else if(p==1){
        for(i=0;i<tam; i++){
            divi=num[i]%2;
            if(divi!=0){
                printf("%d, ", num[i]);
            }
        }
    }
    else printf("Introduce 0 o 1 xd");

    return 0;
}