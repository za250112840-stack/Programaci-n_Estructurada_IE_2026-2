#include <stdio.h>

float alt, pes, imc;
int main(void){
    printf("===Calcula tu IMC (Indice de Masa Corporal)===\n");
    printf("Ingresa tu peso en kg (kilogramos)\n");
    scanf(" %f", &pes);
    printf("Ingresa tu estatura en m (metros)\n");
    scanf(" %f", &alt);
    imc= pes /(alt*alt);

    printf("Tu indice de masa corporal es: %.2f \n", imc);
    if(imc<24.9 && imc>18.5){
    	printf("Su peso esta dentro del parametro normal\n");
	}else if(imc<18.5){
        printf("Usted se encuentra bajo de peso\n");
    	}else if(imc>24.9){
        	if(imc>25 && imc<29.9){
            printf("Usted tiene sobrepeso \n");
        	}else if(imc>30.0){
           		 printf("Usted tine obesidad, acuda asu medico\n");
       		 }
    }
    
    
    return 0;
}
