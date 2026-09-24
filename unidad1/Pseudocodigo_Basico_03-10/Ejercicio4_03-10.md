#Ejercicio 4: Limitador de corriente de arranque (Soft Starter)

**Enunciado:** Crea la lógica para un arrancador suave de un motor trifásico. Durante los primeros segundos de encendido, la corriente consumida debe ser monitoreada con un límite tolerado mayor; tras superar el periodo de arranque, el límite de corriente de protección debe reducirse al valor nominal de trabajo.

*Investigación requerida: El alumno debe consultar la relación común entre la corriente de arranque y la corriente nominal en motores eléctricos (ej. la corriente de arranque suele ser de 3 a 5 veces la nominal) y definir la lógica de cambio de estado según el tiempo transcurrido.*

*Pseudocodigo*

Inicio
    