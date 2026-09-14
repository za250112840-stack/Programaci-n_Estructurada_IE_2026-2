# Ejercicio 1: Control de velocidad con rampa de aceleración

**Enunciado:** Diseña un pseudocódigo para el control de un motor que reciba una velocidad actual y una velocidad objetivo. El programa debe incrementar o decrementar progresivamente la velocidad en pasos fijos por unidad de tiempo hasta alcanzar la velocidad deseada, evitando cambios bruscos.

*Investigación requerida: El estudiante debe proponer un delta de aceleración seguro (ej. ) e implementar una estructura iterativa (mientras velocidad_actual != velocidad_objetivo) que contemple tanto aceleración como desaceleración.*

Inicio

    Escribir "Ingrese la velocidad actual y la velocidad objetivo"
    Leer velo_act, velo_ob
    delta_ac <- (velo_ob - velo_act)/10
    Mientras velo_act != velo_ob
        velo_act <- velo_act + delta_ac
        Escribir "Velocidad ", velo_act
    FinMientras
    
Fin

[Archivo dfd](./Ejercicio1_03-10.dfd)
