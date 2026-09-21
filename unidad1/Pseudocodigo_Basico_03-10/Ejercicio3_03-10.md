# Ejercicio 3: Detección de rebotador (Debounce) de un pulsador mecánico

**Enunciado:** Desarrolla un algoritmo que lea el estado digital de un botón físico y confirme una pulsación válida únicamente cuando la señal mantenga un estado lógico alto (1) de forma ininterrumpida durante una cantidad consecutiva de lecturas.

*Investigación requerida: El estudiante debe entender el fenómeno del rebote mecánico (mechanical bounce) en entradas digitales e implementar un contador con borrado automático si detecta ruido (0) antes de alcanzar el umbral de confirmación (ej. 5 lecturas consecutivas).*

Inicio
    estado <- 1
    cont <- 0
    Mientras que estado=1 AND cont<5 entonces
        Escribe "Escribe el estado dijital del valor (alto:1 , ruido:0)"
        Leer estado
        cont<-cont+1
    Fin Mientras que
    Si cont=5
         
