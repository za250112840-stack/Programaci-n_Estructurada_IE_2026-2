Algoritmo ControlInventarioComponentes
	// 1. Declaración de vectores y variables
	Dimension stock[5]
	Dimension consumo[5]
	Dimension nombres[5]
	
	Definir stock, consumo, i Como Entero
	Definir nombres Como Cadena
	
	// Nombres de los componentes según la práctica
	nombres[1] <- "Transistor 2N2222"
	nombres[2] <- "LED Rojo"
	nombres[3] <- "CI 555"
	nombres[4] <- "OpAmp LM741"
	nombres[5] <- "Diodo 1N4007"
	
	Escribir "--- PRÁCTICA 35: CONTROL DE INVENTARIO DE COMPONENTES ---"
	Repetir
		Escribir "================ MENÚ PRINCIPAL ================"
		Escribir "1. Ver estado general del inventario"
		Escribir "2. Registrar consumo de un producto"
		Escribir "3. Reabastecer manualmente un producto"
		Escribir "4. Salir"
		Escribir "Seleccione una opción (1-4):"
		Leer opcionMenu
		
		Segun opcionMenu Hacer
			1: 
				Escribir "------------------------------------------------------------"
				Escribir "ESTADO ACTUAL DEL INVENTARIO:"
				Escribir "------------------------------------------------------------"
				Para i <- 1 Hasta 5 Con Paso 1 Hacer
					Escribir i, ". ", nombres[i], " | Stock: ", stock[i], " unidades" Sin Saltar
					Si stock[i] < 10 Entonces
						Escribir " -> [ALERTA: CRÍTICO]"
					Sino
						Escribir " -> [OK]"
					FinSi
				FinPara
		
	 
			2: 
				Escribir "=== REGISTRO DE CONSUMO DE LA PRÁCTICA ==="
				Para i <- 1 Hasta 5 Con Paso 1 Hacer
					Repetir
						Escribir "Ingrese la cantidad consumida de ", nombres[i], " (Disponible: ", stock[i], "):"
						Leer consumo[i]
						
						Si consumo[i] < 0 O consumo[i] > stock[i] Entonces
							Escribir "Error: El consumo no puede ser negativo ni mayor al stock disponible (", stock[i], ")."
						FinSi
					Hasta Que consumo[i] >= 0 Y consumo[i] <= stock[i]
					stock[i] <- stock[i] - consumo[i]
				FinPara
				
	 
		
	
			3: Escribir " REGISTRO DE STOCK INICIAL"
				Para i <- 1 Hasta 5 Con Paso 1 Hacer
					Repetir
						Escribir "Ingrese el stock inicial para ", nombres[i], ":"
						Leer stock[i]
						Si stock[i] < 0 Entonces
							Escribir "Error: El stock inicial no puede ser negativo."
						FinSi
					Hasta Que stock[i] >= 0
				FinPara
				
				
			4: 
				Escribir"Saliendo del programa"
				
			De Otro Modo:
				Escribir " Opcion no valida, intente de nuevo"
	
FinSegun

Hasta Que opcionMenu=4


	
FinAlgoritmo
