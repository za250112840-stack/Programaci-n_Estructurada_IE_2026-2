#include <stdio.h>

int num1, num2, suma;

int main(){
    printf("Ingrese el primer numero para realizar la suma \n");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero para realizar la suma\n");
    scanf("%d", &num2);
    suma= num1 + num2;
    printf("El resultado de la suma es: %d\n", suma);

    return 0;
}
