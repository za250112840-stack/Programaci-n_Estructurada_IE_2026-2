#include <stdio.h>

float precio, desdble, desc;
int main(void){
    printf("Ingresa el precio total del articulo\n");
    scanf("%f", &precio);
    desdble= precio*(1-0.20)*(1-0.10);
    printf("El costo final con el doble descuento es: %.2f \n", desdble);
    return 0;                                          
}
