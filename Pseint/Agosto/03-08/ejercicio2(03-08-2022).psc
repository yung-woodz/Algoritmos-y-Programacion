Proceso ejercicio2
	
	Definir n, i Como Entero
	
	Leer n
	
	Dimension v(n)
	
	Para i<-0 hasta n-1 Con Paso 1 Hacer
		v(i) <- Aleatorio(10,15)
		Escribir v(i)
	FinPara
	
	suma= 0
	
	Para i<-0 hasta n-1 Con Paso 1 Hacer
		suma <- suma + v(i)
	FinPara
	
	Escribir "suma: " suma
	
FinProceso
