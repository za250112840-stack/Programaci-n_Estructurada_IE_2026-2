# Ejercicio 8: Alternancia operativa de bombas de agua (Balance de desgaste)

**Enunciado:** Escribe un pseudocódigo para controlar el llenado de un tanque mediante dos bombas redundantes. Cada vez que el tanque requiera agua, el sistema debe activar la bomba que tenga menos horas de uso acumuladas para equilibrar el desgaste de ambos equipos.

*Investigación requerida: El alumno debe utilizar acumuladores de tiempo para cada equipo, establecer una comparación condicional (horas_bomba1 < horas_bomba2) y definir una regla por defecto en caso de empate (prioridad a la Bomba 1).*

**Pseudocodigo**
Inicio 
    Escribir "¿El tanque requiere agua? si:1, no:0"
    Leer res
    Si res=1 entonces 
        Escribir "Ingrese la hora de uso de la bomba 1"
        Leer bom1
        Escribir "In grese las horas de uso de la bomba 2"
        Leer bom2
        Si bom1<bom2 OR bom2<bom1 entonces
            Si bom1<bom2 entonces 
                Escribir "Bomba 1 encendida"
            Sino 
                Escribir "Bomba 2 encendida"
            FinSi
        Sino 
            Escribir "Bomba 1 encendida (Horas iguales de uso en las bombas)"
        FinSi
    Sino 
        Escribir "El tanque no requiere agua"
    FinSi

[Archivo dfd](./Ejercicio8_03-10.dfd)
