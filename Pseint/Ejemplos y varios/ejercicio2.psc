Algoritmo ejercicio2
	
	Definir nro1, nro2 Como Real;
	
	Repetir
		Escribir "Ingrese dos número el cual quieras dividir: ";
		Leer nro1, nro2;
	Hasta Que nro2 <> 0
	
	i=nro1
	resto= 0
	
	Si nro2 > 0 Entonces
		Mientras nro1 <= nro2 Hacer
			resto <- nro1 - nro2
			i= i + 1
		FinMientras
		
		Mostrar resto;
	SiNo
		Si nro2 < 0 Entonces
			Mientras i <= (-nro2) Hacer
				resto <- resto + nro1
				i= i + 1
			FinMientras
			
			Mostrar (-resto);
		SiNo
			Si nro1 < 0 y nro2 < 0 Entonces
				Mientras i <= nro2 Hacer
					resto <- resto + nro1
					i= i + 1
				FinMientras
				
				Mostrar resto;
			FinSi
		Fin Si
	Fin Si
	
	
FinAlgoritmo
	