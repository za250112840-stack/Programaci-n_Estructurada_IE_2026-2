# Ejercicio 2: Monitoreo de presión con ventana de tolerancia (Banda muerta)

**Enunciado:** Escribe el pseudocódigo para un sistema de presurización. El compresor debe activarse si la presión cae por debajo del límite inferior tolerable y desactivarse solo cuando alcance el límite superior, evitando encendidos y apagados continuos si la lectura oscila ligeramente alrededor del valor nominal.

*Investigación requerida: El alumno debe investigar cómo funciona una "banda muerta" o zona neutra en control industrial y definir condiciones de borde claras (presión < setpoint - tolerancia para encender y presión > setpoint + tolerancia para apagar).*

Inicio
    Escribir "Ingresa el setpoint (Valor deseado)"
    Leer setpoint
    Escribir " La telorancia"
    Leer tol
    tolerancia <- (setpoint*tol)/100
    lim_in <- setpoint-tolerancia
    lim_su <- setpoint+tolerancia
    Escribir "Ingrese la presion actual"
    Leer presion
    Mientras lim_in>presion OR lim_sup < presion entonces
        Si presion < lim_in  entonces
            Escribir "Compresor encendido"
        Sino 
            Escribir "Compesor apagado"
        Finsi
        Escribir "Ingrese la presion actual"
        Leer presion
    FinMientras
    Escribir "La presion del compresor esta dentro del valor nominal"
Fin

[Archivo dfd](./Ejercicio2_03-10.dfd)


 
     