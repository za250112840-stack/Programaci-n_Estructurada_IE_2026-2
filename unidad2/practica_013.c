#include <stdio.h>
#include <math.h>

int heren, hrd, hrdt, caridad;
int main(){
    printf("ingresa la herencia total \n");
    scanf("%d", &heren);
    
    printf("Ingresa el nuemero de herederos\n");
    scanf("%d", &hrd);

    hrdt=heren/hrd;
    caridad=heren%hrd;

    printf("La herencia que le corresponde a cada uno de los herederos es: %d \n",hrdt);
    printf("Para la caridad coresponde: %d\n", caridad);

    return 0;
}
