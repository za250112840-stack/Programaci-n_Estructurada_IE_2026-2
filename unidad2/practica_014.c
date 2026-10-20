#include <stdio.h>
#include <math.h>

float pers, total, prop;
float tpers, pcprop;
int main(void){
    printf("Ingresa el total de la cuenta\n");
    scanf(" %f", &total);
    printf("Ingresa el porcentaje de propina que se dejara\n");
    scanf(" %f", &prop);
    printf("Ingrasa el numero de personas que pagaran la cuenta\n");
    scanf(" %f", &pers);
    pcprop= total*(prop/100.0);
    tpers=(total+pcprop)/pers;
    printf("El total corespondiente de cada persona es: %.2f\n", tpers);
    return 0;
}
