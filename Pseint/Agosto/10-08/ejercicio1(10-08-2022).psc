Proceso ejercicio1
	
	Definir n, m, i, j como entero
	Leer n, m
	Dimension mat(n,m)
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			Leer mat(i,j)
		FinPara
	FinPara
	
	contadorPar<-0
	contadorImpar<-0
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta m-1 Hacer
			Escribir "[",mat(i,j),"]" Sin Saltar
			Si mat(i,j) % 2 = 0 Entonces
				contadorPar <- contadorPar + 1
			SiNo
				contadorImpar <- contadorImpar + 1
			FinSi
		FinPara
		Escribir " "
	FinPara
	
	Escribir "Cantidad de pares: ", contadorPar
	Escribir "Cantidad de impares: ", contadorImpar
	
FinProceso
