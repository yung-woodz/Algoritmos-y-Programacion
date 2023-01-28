Proceso ejercicio2
	
	Dimension t(24)
	
	Para i<-0 hasta 23 Con Paso 1 Hacer
		t(i) <- Aleatorio(-920,620)
		t(i) <- t(i) / 10
	FinPara
	
	Para i<-0 hasta 23 Con Paso 1 Hacer
		Escribir "Hora ", i+1, ": ", t(i), "°C"
	FinPara
	
	Escribir "temperaturas históricas registradas: "
	
	Para i<-0 hasta 23 Con Paso 1 Hacer
		Si t(i) > 54.4 o t(i) < -89.2 Entonces
			Escribir t(i), "°C"
		FinSi
	FinPara
	
FinProceso
