#include <stdio.h>

int suma, num1, num2, num3;
float prom;
int main(){

    printf("Igresa el primer numero para realizar el promedio de 3 calificaciones \n ");
    if (scanf("%d", &num1) != 1) {
        printf("Error: Debes ingresar un numero valido.\n");
        return 1;
    }

    printf("Igresa el segundo numero para realizar el promedio de 3 calificaciones \n ");
    if (scanf("%d", &num2) != 1) {
        printf("Error: Debes ingresar un numero valido.\n");
        return 1;
    } 

    printf("Igresa el tercer numero para realizar el promedio de 3 calificaciones \n ");
    if (scanf("%d", &num3) != 1) {
        printf("Error: Debes ingresar un numero valido.\n");
        return 1;
    }

    suma= num1+ num2+ num3;
    prom=suma/3;
    printf("El promedio de la tres calificaciones es: %.2f\n", prom);

    if(prom<70 ){
        printf("La calificacion no es aprobatria\n");
    }
    if((prom>69) && (prom<101)){
        printf("La calificacion es aprobatria\n");
    }
return 0;
}
