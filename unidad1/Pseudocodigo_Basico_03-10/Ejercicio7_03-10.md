# Ejercicio 7: Autodiagnóstico de sensor por fuera de rango (Out of Bounds)

**Enunciado:** Desarrolla un algoritmo que procese el voltaje entregado por un sensor industrial con salida de 4 a 20 mA (convertido a voltaje). Si la lectura cae por debajo de 4 mA o supera los 20 mA, el programa debe identificar si se trata de un corte de cable o un cortocircuito.

*Investigación requerida: El estudiante debe investigar el estándar industrial de 4 a 20 mA, donde una lectura de 0 mA indica línea rota/abierta y un valor por encima de 20 mA (ej. 24 mA) indica cortocircuito o sobre-rango, traduciendo estos eventos a códigos de error lógicos.*

*Pseudocodigo*

Inicio
    Escribir "Ingrese el valor de salida(mA)"
    Leer Am
    Mientras (Am = 0 O Am > 24) Hacer
        Si Am > 24 Entonces
            Escribir "Cortocircuito o sobre-rango"
        Sino
            Escribir "Linea rota o abierta"
        Fin Si
        Escribir "Ingrese el valor de salida (mA)"
        Leer Am
    Fin Mientras
    cont <- 0
    Mientras ((Am <= 4 O Am > 20) Y cont < 3) Hacer
        cont <- cont + 1
        Escribir "Ingrese el valor de salida (mA)"
        Leer Am
    Fin Mientras
    Si (cont > 0 Y cont < 3) Entonces
        Escribir "Cable roto o cortocircuito"
    Sino
        Escribir "Todo dentro de lo normal"
    Fin Si

Fin

[Archivo dfd](./Ejercicio7_03-10.dfd)