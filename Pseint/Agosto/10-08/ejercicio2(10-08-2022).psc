Proceso ejercicio2
	
	Definir n, i, j como entero
	Leer n
	Dimension mat(n,n)
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			mat(i,j) <- Aleatorio(1,9)
		FinPara
	FinPara
	
	diagoPrima<-0
	diagoSecu<-0
	
	Para i<-0 hasta n-1 Hacer
		Para j<-0 hasta n-1 Hacer
			Si i = j Entonces
				diagoPrima <- diagoPrima + mat(i,j)
			FinSi
			Si i + j = n-1 Entonces
				diagoSecu <- diagoSecu + mat(i,j)
			FinSi
			Escribir "[",mat(i,j),"]" Sin Saltar
		FinPara
		Escribir " "
	FinPara
	
	Escribir "Suma de la diagonal primaria: ", diagoPrima
	Escribir "Suma de la diagonal secundaria: ", diagoSecu
	
FinProceso
