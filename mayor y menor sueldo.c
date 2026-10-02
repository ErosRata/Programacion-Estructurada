/******************************************************************************

La información de datos de la empresa SYSTEM esta almacenada en una variable de 
tipo struct llamada ¨empleado¨, la información con que se cuenta de cada empleado 
es: nombre, sexo y sueldo. Realice un programa en C que lea en un array de estructuras 
los datos de los N trabajadores de la empresa y que imprima los datos del empleado 
con mayor y menor salario. 

Eros Armanti Sierra Castillo 2154693

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Empleado{
    char nombre[80];
    char sexo[16];
    float sueldo;
};

int main()
{
    int n;
    printf("Cuantos trabajadores hay en la empresa: "); scanf("%d", &n);
    struct Empleado empleados[n];
    int i;
    for(i=0; i<n; i++){
        printf("Ingresa tu nombre: "); scanf(" %79[^\n]", empleados[i].nombre);
        printf("Ingresa tu sexo: "); scanf(" %15[^\n]", empleados[i].sexo);
        printf("Ingresa tu sueldo: "); scanf("%f", &empleados[i].sueldo);
    }
    float mayor, menor;
    mayor=menor=0;
    int elmayor, elmenor;
    elmayor=elmenor=0;
    for(i=0; i<n; i++){
        if(mayor<empleados[i].sueldo){
            mayor=empleados[i].sueldo;
            elmayor=i;
        }
    }
    
     for(i=0; i<n; i++){
        if(empleados[elmayor].sueldo>empleados[i].sueldo){
            menor=empleados[i].sueldo;
            elmenor=i;
        }
    }
    
    printf("El empleado con el sueldo mayor es %s, de sexo %s, con un sueldo de %f\n", empleados[elmayor].nombre, empleados[elmayor].sexo, empleados[elmayor].sueldo); 
    printf("El empleado con el sueldo menor es %s, de sexo %s, con un sueldo de %f", empleados[elmenor].nombre, empleados[elmenor].sexo, empleados[elmenor].sueldo);

    return 0;
}




