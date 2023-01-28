Proceso ejercicio18
	
	Definir sueldo Como Entero;
	
	Repetir
		Escribir "Ingrese su sueldo para verificar si tiene derecho a crédito"
		Leer sueldo;
	Hasta Que sueldo >= 100000 //sueldo minimo de $100.000
	
	Si sueldo < 200000 Entonces
		Mostrar "Usted no tiene derecho a sueldo debido a su sueldo";
	SiNo
		Si sueldo >= 200000 y sueldo < 500000 Entonces
			Mostrar "Tiene derecho a optar a un crédito hasta por $500.000"
		SiNo
			Si sueldo >= 500000 y sueldo < 1000000 Entonces
				Mostrar "Tiene derecho a optar a un crédito hasta por $2.000.000"
			FinSi
		FinSi
	FinSi
	
	
FinProceso