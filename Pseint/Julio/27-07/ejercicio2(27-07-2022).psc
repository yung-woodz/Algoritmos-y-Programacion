Proceso ejercicio2
	
	Definir n Como Real
	Dimension t(24)
	
	Para i<-0 hasta 23 Con Paso 1 Hacer
		Escribir "Ingrese la temperatura de la hora [", i+1, "]"
		Repetir
			Leer t(i)
		Hasta Que t(i) > (-272) y t(i) < 54
	FinPara
	
	Para i<-0 hasta 23 Con Paso 1 Hacer
		Escribir "Hora ", i+1, ": ", t(i), "°C"
	FinPara
	
	Escribir "Las temperaturas menores o iguales a cero son: "
	
	Para i<-0 hasta 23 Con Paso 1 Hacer
		Si t(i) <= 0 y t(i) >= -272 Entonces
			Escribir t(i), "°C"
		FinSi
	FinPara
	
FinProceso
