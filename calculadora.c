/*
Desarrollar un programa en C que realice las funciones de una calculadora, la calculadora ofrecerá las siguientes operaciones,
sumar, restar A-B, restar B-A, multiplicación, división A/B, división B/A, la opción de cambiar los números previamente ingresados
(si ingresa esta opción deberá mostrar el menú una vez que se hayan ingresado los valores) y solo se podrá salir de la calculadora
una vez que el usuario ingrese la opción salir.

Nota:  el programa solicitara al usuario los valores y hacer uso de funciones para cada operación.


Eros Armanti Sierra Castillo 2154693
*/

#include <stdio.h>

float suma(float x, float y){
    return x+y;
}

float resta1(float x, float y){
    return x-y;
}

float resta2(float x, float y){
    return y-x;
}

float multiplicacion(float x, float y){
    return x*y;
}

float division1(float x, float y){
    return x/y;
}

float division2(float x, float y){
    return y/x;
}

int main(){
    int opcion;
    int salir=1;

    while(salir!=0){
        printf("\n1)Ingresar dos valores \n2)Calcular \n3)Salir");
        printf("\nIntroduzca la opcion a realizar: ");scanf("%d", &opcion);
        switch(opcion){
        case 1:
            float a,b;
            printf("\nIngresa el primer valor: "); scanf("%f", &a);
            printf("Ingresa el segundo valor: "); scanf("%f", &b);
            break;
        case 2:
            int cal;
            printf("\n1)suma \n2)resta con el segundo \n3)resta con el primero \n4)multiplicar \n5)dividir con el segundo \n6)dividir con el primero: ");
            printf("\nQue operacion deseas realizar: "); scanf("%d", &cal);
            switch(cal){
            case 1:
                printf("\nEl resultado es %f\n", suma(a,b));
                break;
            case 2:
                printf("\nEl resultado es %f\n", resta1(a,b));
                break;
            case 3:
                printf("\nEl resultado es %f\n", resta2(a,b));
                break;
            case 4:
                printf("\nEl resultado es %f\n", multiplicacion(a,b));
                break;
            case 5:
                printf("\nEl resultado es %f\n", division1(a,b));
                break;
            case 6:
                printf("\nEl resultado es %f\n", division2(a,b));
                break;
            default:
                printf("\nIngresa un valor valido");
            }
            break;
        case 3:
            salir=0;
            printf("Bye bye, hasta luego...");
            break;
        default:
            printf("\nIngresa un valor valido");

        }
    }


return 0;
}
