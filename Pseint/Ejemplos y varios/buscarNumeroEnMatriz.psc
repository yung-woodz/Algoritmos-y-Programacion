Proceso buscarNumeroEnMatriz
	
	Definir n, m, x como entero
	
	Leer n, m
	
	Dimension mat(n,m)
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			mat(i,j) <- Aleatorio(1,9)
		FinPara
	FinPara
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			Escribir " ", mat(i,j), " " Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
	contador <- 0
	
	Escribir "Ingrese un numero a buscar"
	Leer x
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			Si x == mat(i,j) entonces
				contador <- contador + 1
			FinSi
		FinPara
	FinPara
	
	Si contador == 1 Entonces
		Escribir "El número ", x, " se repite ", contador, " vez"
	SiNo
		Escribir "El número ", x, " se repite ", contador, " veces"
	FinSi
	
FinProceso
