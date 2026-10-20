#include <stdio.h>

int main(void){

    float total, pag, camb, comp;

    printf("Ingresa el total de la compra\n");
    scanf(" %f", &total);
    printf("Ingresa el monto recibido\n");
    scanf(" %f", &pag);
    
    for(;pag<total;){
        printf("El monto es menor al total, ingresa el monto valido ");
        scanf(" %f", &pag);
   	}
    camb = pag - total;
    printf("Su cambio es: %f ", camb);
    comp= total + camb;
    printf("Su cambio es: %f + %f = %f ", total, camb, comp );
    return 0;

}
