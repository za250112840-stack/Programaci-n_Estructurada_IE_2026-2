#include <stdio.h>
#include <math.h>

int a, b, c;
double vx1, vx2, res, res2;
int main(void){
    printf("===CALCULA X POR FORMULA GENERAL===\n");
    printf("Ingresa el valor de a en la ecuacion\n");
    scanf("%d", &a);
    printf("Ingresa el valor de b en la ecuacion\n");
    scanf("%d", &b);
    printf("Ingresa el valor de c en la ecuacion\n");
    scanf("%d", &c);
    vx1=(-b+sqrt((b*b)-(4*a*c)))/2;
    vx2=(-b-sqrt((b*b)-(4*a*c)))/2;
    printf("El resultado de las x es X1= %lf, X2= %lf \n", vx1, vx2);
    res2= sqrt((b*b)-(4*a*c));
    res=(b*b)-(4*a*c);
	printf("%f\n", res);
	printf("%f\n", res2);
    return 0;
}
