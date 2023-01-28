Algoritmo ejercicio1
	
	Definir nro1, nro2, i Como Real;
	
	Escribir "Ingrese dos número para multiplicar: ";
	Leer nro1, nro2;
	
	i=1
	suma= 0
	
	Si nro2 > 0 Entonces
		Mientras i <= nro2 Hacer
			suma <- suma + nro1
			i= i + 1
		FinMientras
		
		Mostrar suma;
	SiNo
		Si nro2 < 0 Entonces
			Mientras i <= (-nro2) Hacer
				suma <- suma + nro1
				i= i + 1
			FinMientras
			
			Mostrar (-suma);
		SiNo
			Si nro1 < 0 y nro2 < 0 Entonces
				Mientras i <= nro2 Hacer
					suma <- suma + nro1
					i= i + 1
				FinMientras
				
				Mostrar suma;
			FinSi
		Fin Si
	Fin Si
	
FinAlgoritmo