# Ejercicio 2: Monitoreo de sobrecalentamiento de un motor

**Enunciado:**  Desarrolla un algoritmo que lea la temperatura actual de un motor mediante un sensor y determine si el motor debe apagarse por sobrecalentamiento.

*Algoritmo*

<!--Pasos-->
1. Leer la temperatura actual del sensor.
2. Si la temperatura el mayor a 110 grados centigrados
    * Enviar la orden de apagar el motor
    * Mostrar el mensaje "*El motor sobrepaso el limite de temperatura, el motor se apago por sobrecalentamiento*".
3. Si la temperatura se encuentra dentro del rango temp>=80 AND temp<110
    * Mantener el motor encendido
    * Mostrar el mensaje "*La temperatura se encuentra dentro del parametro*"

4. Si la temperatura del motor se encuentra por debajo del rango temp<80
    * Mostrar el mensaje "*la temperatura del mortor esta por debajo de el parametro de temperatura*".

    [Eejercicio 2 dfd](Ejercicio2_04-10.dfd)
