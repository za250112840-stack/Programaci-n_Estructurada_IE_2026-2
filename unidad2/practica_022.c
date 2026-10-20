#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* Necesaria para la funcion fabs() */

#define NIP_CORRECTO 1234.0
#define TOLERANCIA 0.00001
#define MAX_INTENTOS 3

int main(void) {
    /* Declaracion de variables locales al inicio del bloque */
    double nip_ingresado = 0.0;
    int intentos = MAX_INTENTOS;
    int acceso = 0; /* 0 = denegado, 1 = concedido */

    printf("=== SISTEMA DE VALIDACION DE NIP (TIPO DOUBLE) ===\n\n");

    /* Ciclo de validacion por intentos */
    while (intentos > 0 && acceso == 0) {
        printf("Ingrese su NIP (Intentos restantes %d): ", intentos);
        
        if (scanf("%lf", &nip_ingresado) != 1) {
            printf("Error: Entrada invalida. Ingrese un valor numerico.\n");
            return EXIT_FAILURE;
        }

        /* Comparacion de precision usando fabs() de <math.h> */
        if (fabs(nip_ingresado - NIP_CORRECTO) < TOLERANCIA) {
            acceso = 1; /* Transicion de estado: acceso otorgado */
            printf("\n[EXITO]: NIP Correcto. Acceso concedido al sistema.\n");
        } else {
            intentos--;
            if (intentos > 0) {
                printf("[ERROR]: NIP Incorrecto. Intente de nuevo.\n\n");
            } else {
                printf("\n[ALERTA]: NIP Incorrecto. Se han agotado los intentos. Sistema bloqueado.\n");
            }
        }
    }

    return EXIT_SUCCESS;
}

