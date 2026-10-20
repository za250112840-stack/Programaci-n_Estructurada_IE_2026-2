#include <stdio.h>

float ds, rend, gas, cset, ctot;
int main(void){
    printf("===viaje===\n");
    printf("Ingresa la distancia total del viaje\n");
    scanf(" %f", &ds);
    printf("Ingresa el rendimiento del auto (km/l)\n");
    scanf(" %f", &rend);
    printf("Ingresa El costo de la gasolina\n");
    scanf(" %f", &gas);
    printf("Ingresa el costo total de las casetas\n");
    scanf(" %f", &cset);
    ctot= (ds/rend)*gas+cset;
    printf("El costo total del viaje es: %.2f", ctot);
    return 0;
}
