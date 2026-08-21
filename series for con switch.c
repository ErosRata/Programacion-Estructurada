#include <stdio.h>
int main()
{
    int eleccion;
    printf(" 1) 3,6,9,...,30\n 2) 50,45,40,...,5\n 3) 1,2,4,...,64\n 4) 1,3,9,...,243\n 5) 10,19,28,...,55\n 6) 1,4,9,...,64\n 7) 0.5,1.0,1.5,...4.0\n\a");
    printf("Que serie quieres de los 7 que hay?: ");scanf("%d", &eleccion);
    switch (eleccion){
        case 1:
        printf("Aqui la sucesion aritmetica de 3:\n");int i=1;for(i;i<=10; i+=1){printf("%d\n", i*3);}
        break;
        
        case 2:
        printf("Aqui la sucesion aritmetica de 5 descendente:\n");int j=50;for(j;j>=5; j-=5){printf("%d\n", j);}
        break;
        
        case 3:
        printf("Aqui la sucesion geometrica de 2:\n");int k=1;for(k;k<=64; k*=2){printf("%d\n", k);}
        break;
        
        case 4:
        printf("Aqui la sucesion geometrica de 3:\n");int l=1;for(l;l<=243; l*=3){printf("%d\n", l);}
        break;
        
        case 5:
        printf("Aqui la sucesion aritmetica a partir de 10 y aumentando 9:\n");int m=10;for(m;m<=55; m+=9){printf("%d\n", m);}
        break;
        
        case 6:
        printf("Aqui la sucesion de los cuadrados:\n");int n=1;for(n;n<=8; n+=1){printf("%d\n", n*n);}
        break;
        
        case 7:
        printf("Aqui la sucesion de decimales apartir de 0.5:\n");float o=0.5;for(o;o<=4; o+=0.5){printf("%f\n", o);}
        break;
        
        default:
        printf("No existe, te invito a ingresar un valor que si existe :)");
    }
    
    return 0;
}
