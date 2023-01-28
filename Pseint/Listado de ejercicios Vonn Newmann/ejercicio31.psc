Proceso ejercicio31
	
	Definir a, b, resultado Como Entero;
	
	Escribir "Ingrese su rango [a,b] para la función deseada"
	Leer a, b;
	
	x <- a
	
	Mientras x <= b Hacer
		Si x >= 5 Entonces
				resultado <- x^5 - 5*x^3 - x^4
				Mostrar resultado;
			SiNo
				Si x >= 3 y x < 5 Entonces
					resultado <- x^4 - 4*x^3 - x^2
					Mostrar resultado;
				SiNo
					Si x >= 0 y x < 3 Entonces
						resultado <- x^3 - 3*x^2
						Mostrar resultado;
				SiNo
					si x < 0 Entonces
					resultado <- x^2 - 2*x - 5
					Mostrar resultado;
					FinSi
				FinSi
			FinSi
		FinSi
		x <- x + 1
	FinMientras
	
	
FinProceso