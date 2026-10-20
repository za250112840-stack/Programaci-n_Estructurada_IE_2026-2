#include <stdio.h>

int hext, hnor, suel;
int main(void){
    printf("Igresa el numero de horas trabajadas en la seman\n");
    scanf("%d", &hnor);
    printf("Ingresa las horas extras trabajadas\n");
    scanf("%d", &hext);
    suel=(hnor*100)+(hext*200);
    printf("Su sueldo de esta semana es de: %d", suel);
    return 0;
}