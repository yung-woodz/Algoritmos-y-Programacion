Proceso TablasMultiplicar
	
	Definir numeroIngresado, contador como entero;
	
	// Asignamos valor al contador
	contador = 1;
	
	Escribir "Ingrese numero: ";
	Leer numeroIngresado;
	
	Mientras contador <= 10 Hacer
		Escribir numeroIngresado, " * ", contador, " = ", numeroIngresado * contador
		// Escribir "Resultado: ", numeroIngresado * contador;
		
		contador = contador +1;
		
	FinMientras
	
FinProceso
