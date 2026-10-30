#include <stdio.h>
#include <math.h>


int main(){
	int N = 0;
    int V1 = 0;
    int V3 = 0;
    int horas = 0;
    int i = 0;
    int nagua = 0;
    char C = ' ';
    char estado = ' ';
    float V2 = 0;
    float retencion = 0;
    printf("Ingresa el numero de tanques a introducir\n");
    scanf(" %d", &N);

    for(i=1; i<=N; i++){
        printf("Ingresa el valor de C (I o D), litros, clima y fugas inicial\n");
        scanf(" %c %d %f %d", &C, &V1, &V2, &V3);
		
		horas=0;
        while(V3>0){
            V3=(V3/2)-3;
            horas++;
        }

        if(C=='I'){
            retencion = (V1 * V2)+ 15.5;
        }else{
            retencion= ((V1 * V2) / 2.0)- 5.0;
        }

        nagua = V1 + (horas * 5)- ((V1 % 5)* 2) - (int)retencion;

        if(horas>4){
            nagua=nagua-6;
        }

        if((V1 >= 29 && nagua > 18) || !(C == 'D')){
            estado='A';
        }else{
            estado='R';
        }
    }
    
     printf("Numero de tanques: %d, numero de iteracciones: %d, horas: %d, nivel de agua: %d, estado: %c \n", N, i, horas, nagua, estado);

    return 0;
}
