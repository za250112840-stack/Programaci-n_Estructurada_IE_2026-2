#include <stdio.h>

float cel, far;
int main(void){
    printf("Ingresa lo grados fahrenheit\n");
    scanf(" %f", &far);

    cel=(far-32)*5/9;
    printf("Logrados celcius son: %.4f\n", cel);
    return 0;
    
}
