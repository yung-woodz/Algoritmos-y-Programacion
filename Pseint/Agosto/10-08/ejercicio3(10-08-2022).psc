Proceso ejercicio3
	
	Definir n Como Entero
	
	Escribir "Ingrese el tamaño de su matriz NxN"
	Leer n
	
	Dimension mat(n,n)
	
	Para i<-0 hasta n-1 Hacer // Generar matriz
		Para j<-0 hasta n-1 Hacer
			mat(i,j) <- Aleatorio(10,20)
			Escribir "[", mat(i,j), "]" Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
	Escribir "-----------------------"
	
	trianguSupe <- 0
	contador1 <- 0
	trianguInfe <- 0
	contador2 <- 0
	promedio1 <- 0
	promedio2 <- 0
	
	Para i<-0 hasta n-1 Hacer // Triangular Superior
		Para j<-0 hasta n-1 Hacer
			Si i <= j Entonces
				Escribir "[", mat(i,j), "]" Sin Saltar
				trianguSupe <- trianguSupe + mat(i,j)
				contador1 <- contador1 + 1
			FinSi
		FinPara
		Escribir " "
	FinPara
	
	promedio1 <- trianguSupe / contador1
	Escribir promedio1
	
	Escribir "-----------------------"
	
	Para i<-0 hasta n-1 Hacer // Triangular Inferior
		Para j<-0 hasta n-1 Hacer
			Si i >= j Entonces
				Escribir "[", mat(i,j), "]" Sin Saltar
				trianguInfe <- trianguInfe + mat(i,j)
				contador2 <- contador2 + 1
			FinSi
		FinPara
		Escribir " "
	FinPara
	
	promedio2 <- trianguInfe / contador2
	Escribir promedio2
	
	Escribir "-----------------------"
	
	Si promedio1 > promedio2 Entonces
		Escribir "El promedio de la triangular superior es mayor en comparación al otro promedio"
	SiNo
		Si promedio1 < promedio2 Entonces
			Escribir "El promedio de la triangular inferior es mayor en comparación al otro promedio"
		SiNo
			Si promedio1 == promedio2 Entonces
				Escribir "Ambos promedios son iguales"
			FinSi
		FinSi
	FinSi
	
	Escribir "-----------------------"
	
FinProceso
