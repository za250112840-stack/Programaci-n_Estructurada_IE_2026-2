#include <stdio.h>

int temp;
int main(void){
    printf("Ingrese a temperatura\n");
    scanf("%d", &temp);
    if( temp<0 && temp !=-1){
        printf("!!!ALERTA!!!!\n");
        return 1;
    }
        return 0;
}
