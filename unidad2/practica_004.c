#include <stdio.h>

double pi=3.1416, rad, area=0, suma;
int main(){
    printf("Introdice el radio del circulo para calcular su area: ");
    scanf(" %lf", &rad);
    area=pi*(rad*rad);
    printf("El area del circulo es: %lf ", area);
    return 0;
}
