#include <stdio.h>
 
 int main(void){
    char nom1[] , nom2[], ap1[], ap2[] ;
    
    printf("Ingresa tu primer nombre ");
    scanf(" %c", &nom1[]);
    
    printf("Ingresa tu segundo nombre ");
    scanf(" %c", &nom2[]);
    
    printf("Ingresa tu primer apellido ");
    scanf(" %c", &ap1[]);
    
    printf("Ingresa tu segundo apellido ");
    scanf(" %c", &ap2[]);

    printf("La primera inicial es: %c\n", nom1[]);
    printf("la segunda inicial es: %c\n", nom2[]);
    printf("la segunda inicial es: %c\n", ap1[]);
    printf("la segunda inicial es: %c\n", ap2[]);
    printf("Las iniciales son: %c %c %c %c\n", nom1[], nom2[], ap1[], ap2[]);

    return 0;
 }
