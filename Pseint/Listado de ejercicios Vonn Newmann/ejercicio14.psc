Proceso ejercicio14
	
	Definir x, resultado Como Entero;
	
	Escribir "Ingrese un valor de x para la funcion por tramo";
	Leer x;
	
	Si x < 0 Entonces
		resultado <- x^2 - 2*x - 5
		Mostrar "El resultado es: ", resultado;
	SiNo
		Si x > 0 y x < 3 Entonces
			resultado <- x^3 - 3*x^2
			Mostrar "El resultado es: ", resultado;
		SiNo
			Si x >= 3 y x <5 Entonces
				resultado <- x^4 - 4*x^3 + x^2
				Mostrar "El resultado es: ", resultado;
			SiNo
				Si x >= 5 Entonces
					resultado <- x^5 - 5*x^4 + x^3
					Mostrar "El resultado es: ", resultado;
				FinSi
			FinSi
		FinSi
	FinSi
	
FinProceso